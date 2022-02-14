
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct readelf {int dop; } ;
struct TYPE_2__ {int value; int * ln; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int *) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char**,char*) ;

__attribute__((used)) static void
FUNC_5(struct readelf *VAR_3, const char *VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7;
 int VAR_8;

 if (VAR_4 == ((void*)0)) {
  VAR_3->dop |= VAR_0;
  return;
 }

 if ((VAR_5 = FUNC_3(VAR_4)) == ((void*)0))
  FUNC_0(VAR_1, "strdup failed");
 VAR_7 = VAR_5;

 while ((VAR_6 = FUNC_4(&VAR_5, ",")) != ((void*)0)) {
  for (VAR_8 = 0; VAR_2[VAR_8].ln != ((void*)0); VAR_8++) {
   if (!FUNC_2(VAR_6, VAR_2[VAR_8].ln)) {
    VAR_3->dop |= VAR_2[VAR_8].value;
    break;
   }
  }
 }

 FUNC_1(VAR_7);
}
