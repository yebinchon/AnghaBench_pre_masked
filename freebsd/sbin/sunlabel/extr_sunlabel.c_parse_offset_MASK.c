
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct sun_disklabel {int sl_nsectors; int sl_ntracks; TYPE_1__* sl_part; } ;
struct TYPE_2__ {int sdkp_cyloffset; scalar_t__ sdkp_nsectors; } ;


 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_2(struct sun_disklabel *VAR_0, int VAR_1, char *VAR_2)
{
 uintmax_t VAR_3;
 uintmax_t VAR_4;
 char *VAR_5;
 int VAR_6;

 VAR_3 = 0;
 VAR_4 = FUNC_1(VAR_2, &VAR_5, 10);
 if (*VAR_5 != '\0') {
  if (FUNC_0(VAR_2, "*") == 0) {
   for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
    if (VAR_6 == 2)
     continue;
    VAR_3 += VAR_0->sl_part[VAR_6].sdkp_nsectors;
   }
   VAR_4 = VAR_3 / (VAR_0->sl_nsectors * VAR_0->sl_ntracks);
  } else
   return (-1);
 }
 VAR_0->sl_part[VAR_1].sdkp_cyloffset = VAR_4;
 return (0);
}
