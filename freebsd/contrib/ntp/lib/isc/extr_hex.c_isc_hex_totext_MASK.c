
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_4__ {scalar_t__ length; int* base; } ;
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
 char VAR_6[3];
 unsigned int VAR_7 = 0;

 if (VAR_3 < 2)
  VAR_3 = 2;

 FUNC_2(VAR_6, 0, sizeof(VAR_6));
 while (VAR_2->length > 0) {
  VAR_6[0] = VAR_1[(VAR_2->base[0] >> 4) & 0xf];
  VAR_6[1] = VAR_1[(VAR_2->base[0]) & 0xf];
  FUNC_0(FUNC_3(VAR_6, VAR_5));
  FUNC_1(VAR_2, 1);

  VAR_7++;
  if (VAR_2->length != 0 &&
      (int)((VAR_7 + 1) * 2) >= VAR_3)
  {
   VAR_7 = 0;
   FUNC_0(FUNC_3(VAR_4, VAR_5));
  }
 }
 return (VAR_0);
}
