
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_4__ {int length; int* base; } ;
typedef TYPE_1__ isc_region_t ;
typedef int isc_buffer_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char const*,int *) ;

isc_result_t
FUNC_4(isc_region_t *VAR_2, int VAR_3,
    const char *VAR_4, isc_buffer_t *VAR_5)
{
 char VAR_6[5];
 unsigned int VAR_7 = 0;

 if (VAR_3 < 4)
  VAR_3 = 4;

 FUNC_2(VAR_6, 0, sizeof(VAR_6));
 while (VAR_2->length > 2) {
  VAR_6[0] = VAR_1[(VAR_2->base[0]>>2)&0x3f];
  VAR_6[1] = VAR_1[((VAR_2->base[0]<<4)&0x30)|
    ((VAR_2->base[1]>>4)&0x0f)];
  VAR_6[2] = VAR_1[((VAR_2->base[1]<<2)&0x3c)|
    ((VAR_2->base[2]>>6)&0x03)];
  VAR_6[3] = VAR_1[VAR_2->base[2]&0x3f];
  FUNC_0(FUNC_3(VAR_6, VAR_5));
  FUNC_1(VAR_2, 3);

  VAR_7++;
  if (VAR_2->length != 0 &&
      (int)((VAR_7 + 1) * 4) >= VAR_3)
  {
   VAR_7 = 0;
   FUNC_0(FUNC_3(VAR_4, VAR_5));
  }
 }
 if (VAR_2->length == 2) {
  VAR_6[0] = VAR_1[(VAR_2->base[0]>>2)&0x3f];
  VAR_6[1] = VAR_1[((VAR_2->base[0]<<4)&0x30)|
    ((VAR_2->base[1]>>4)&0x0f)];
  VAR_6[2] = VAR_1[((VAR_2->base[1]<<2)&0x3c)];
  VAR_6[3] = '=';
  FUNC_0(FUNC_3(VAR_6, VAR_5));
  FUNC_1(VAR_2, 2);
 } else if (VAR_2->length == 1) {
  VAR_6[0] = VAR_1[(VAR_2->base[0]>>2)&0x3f];
  VAR_6[1] = VAR_1[((VAR_2->base[0]<<4)&0x30)];
  VAR_6[2] = VAR_6[3] = '=';
  FUNC_0(FUNC_3(VAR_6, VAR_5));
  FUNC_1(VAR_2, 1);
 }
 return (VAR_0);
}
