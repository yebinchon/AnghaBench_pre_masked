
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct readelf {int dop; } ;
struct TYPE_2__ {char const sn; int value; int * ln; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct readelf *VAR_2, const char *VAR_3)
{
 int VAR_4;

 if (VAR_3 == ((void*)0)) {
  VAR_2->dop |= VAR_0;
  return;
 }

 for (; *VAR_3 != '\0'; VAR_3++) {
  for (VAR_4 = 0; VAR_1[VAR_4].ln != ((void*)0); VAR_4++) {
   if (VAR_1[VAR_4].sn == *VAR_3) {
    VAR_2->dop |= VAR_1[VAR_4].value;
    break;
   }
  }
 }
}
