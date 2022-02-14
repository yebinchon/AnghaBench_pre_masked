
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
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char const*,int *) ;

__attribute__((used)) static isc_result_t
FUNC_4(isc_region_t *VAR_1, int VAR_2, const char *VAR_3,
       isc_buffer_t *VAR_4, const char VAR_5[])
{
 char VAR_6[9];
 unsigned int VAR_7 = 0;

 if (VAR_2 >= 0 && VAR_2 < 8)
  VAR_2 = 8;

 FUNC_2(VAR_6, 0, sizeof(VAR_6));
 while (VAR_1->length > 0) {
  VAR_6[0] = VAR_5[((VAR_1->base[0]>>3)&0x1f)];
  if (VAR_1->length == 1) {
   VAR_6[1] = VAR_5[(VAR_1->base[0]<<2)&0x1c];
   VAR_6[2] = VAR_6[3] = VAR_6[4] = '=';
   VAR_6[5] = VAR_6[6] = VAR_6[7] = '=';
   FUNC_0(FUNC_3(VAR_6, VAR_4));
   break;
  }
  VAR_6[1] = VAR_5[((VAR_1->base[0]<<2)&0x1c)|
         ((VAR_1->base[1]>>6)&0x03)];
  VAR_6[2] = VAR_5[((VAR_1->base[1]>>1)&0x1f)];
  if (VAR_1->length == 2) {
   VAR_6[3] = VAR_5[(VAR_1->base[1]<<4)&0x10];
   VAR_6[4] = VAR_6[5] = VAR_6[6] = VAR_6[7] = '=';
   FUNC_0(FUNC_3(VAR_6, VAR_4));
   break;
  }
  VAR_6[3] = VAR_5[((VAR_1->base[1]<<4)&0x10)|
         ((VAR_1->base[2]>>4)&0x0f)];
  if (VAR_1->length == 3) {
   VAR_6[4] = VAR_5[(VAR_1->base[2]<<1)&0x1e];
   VAR_6[5] = VAR_6[6] = VAR_6[7] = '=';
   FUNC_0(FUNC_3(VAR_6, VAR_4));
   break;
  }
  VAR_6[4] = VAR_5[((VAR_1->base[2]<<1)&0x1e)|
         ((VAR_1->base[3]>>7)&0x01)];
  VAR_6[5] = VAR_5[((VAR_1->base[3]>>2)&0x1f)];
  if (VAR_1->length == 4) {
   VAR_6[6] = VAR_5[(VAR_1->base[3]<<3)&0x18];
   VAR_6[7] = '=';
   FUNC_0(FUNC_3(VAR_6, VAR_4));
   break;
  }
  VAR_6[6] = VAR_5[((VAR_1->base[3]<<3)&0x18)|
         ((VAR_1->base[4]>>5)&0x07)];
  VAR_6[7] = VAR_5[VAR_1->base[4]&0x1f];
  FUNC_0(FUNC_3(VAR_6, VAR_4));
  FUNC_1(VAR_1, 5);

  VAR_7++;
  if (VAR_1->length != 0 && VAR_2 >= 0 &&
      (int)((VAR_7 + 1) * 8) >= VAR_2)
  {
   VAR_7 = 0;
   FUNC_0(FUNC_3(VAR_3, VAR_4));
  }
 }
 if (VAR_1->length > 0)
  FUNC_1(VAR_1, VAR_1->length);
 return (VAR_0);
}
