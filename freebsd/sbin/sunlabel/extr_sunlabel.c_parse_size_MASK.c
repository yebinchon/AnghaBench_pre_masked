
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
struct sun_disklabel {int sl_ncylinders; int sl_ntracks; int sl_nsectors; TYPE_1__* sl_part; } ;
struct TYPE_2__ {int sdkp_nsectors; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_3(struct sun_disklabel *VAR_1, int VAR_2, char *VAR_3)
{
 uintmax_t VAR_4;
 uintmax_t VAR_5;
 uintmax_t VAR_6;
 char *VAR_7;
 int VAR_8;

 VAR_4 = 0;
 VAR_6 = FUNC_2(VAR_3, &VAR_7, 10);
 if (*VAR_7 != '\0') {
  if (FUNC_1(VAR_3, "*") == 0) {
   VAR_5 = VAR_1->sl_ncylinders * VAR_1->sl_ntracks *
       VAR_1->sl_nsectors;
   for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
    if (VAR_8 == 2)
     continue;
    VAR_4 += VAR_1->sl_part[VAR_8].sdkp_nsectors;
   }
   VAR_6 = VAR_5 - VAR_4;
  } else if (VAR_7[1] == '\0' && (VAR_7[0] == 'C' || VAR_7[0] == 'c')) {
   VAR_6 = VAR_6 * VAR_1->sl_ntracks * VAR_1->sl_nsectors;
  } else if (VAR_7[1] == '\0' && (VAR_7[0] == 'K' || VAR_7[0] == 'k')) {
   VAR_6 = FUNC_0((VAR_6 * 1024) / 512,
       VAR_1->sl_ntracks * VAR_1->sl_nsectors);
  } else if (VAR_7[1] == '\0' && (VAR_7[0] == 'M' || VAR_7[0] == 'm')) {
   VAR_6 = FUNC_0((VAR_6 * 1024 * 1024) / 512,
       VAR_1->sl_ntracks * VAR_1->sl_nsectors);
  } else if (VAR_7[1] == '\0' && (VAR_7[0] == 'S' || VAR_7[0] == 's')) {

  } else if (VAR_7[1] == '\0' && (VAR_7[0] == 'G' || VAR_7[0] == 'g')) {
   VAR_6 = FUNC_0((VAR_6 * 1024 * 1024 * 1024) / 512,
       VAR_1->sl_ntracks * VAR_1->sl_nsectors);
  } else
   return (-1);
 } else if (VAR_0) {
  VAR_6 = VAR_6 * VAR_1->sl_ntracks * VAR_1->sl_nsectors;
 }
 VAR_1->sl_part[VAR_2].sdkp_nsectors = VAR_6;
 return (0);
}
