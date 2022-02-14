
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varlist {int * value; int * name; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (char*) ;
 struct varlist* FUNC_2 (struct varlist*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (size_t*,char const**,char**,char**) ;
 int VAR_0 ;
 size_t FUNC_6 (char const*) ;

__attribute__((used)) static void
FUNC_7(
 struct varlist *VAR_1,
 const char *VAR_2
 )
{
 struct varlist *VAR_3;
 size_t VAR_4;
 char *VAR_5;
 char *VAR_6;

 VAR_4 = FUNC_6(VAR_2);
 while (FUNC_5(&VAR_4, &VAR_2, &VAR_5, &VAR_6)) {
  FUNC_0(VAR_5 && VAR_6);
  VAR_3 = FUNC_2(VAR_1, VAR_5);
  if (((void*)0) == VAR_3) {
   FUNC_3(VAR_0, "Variable list full\n");
   return;
  }

  if (((void*)0) == VAR_3->name) {
   VAR_3->name = FUNC_1(VAR_5);
  } else if (VAR_3->value != ((void*)0)) {
   FUNC_4(VAR_3->value);
   VAR_3->value = ((void*)0);
  }

  if (VAR_6 != ((void*)0))
   VAR_3->value = FUNC_1(VAR_6);
 }
}
