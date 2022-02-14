
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varlist {char* name; char* value; } ;
typedef int FILE ;


 size_t VAR_0 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_1(
 struct varlist *VAR_1,
 FILE *VAR_2
 )
{
 size_t VAR_3;

 if (((void*)0) == VAR_1->name) {
  FUNC_0(VAR_2, "No variables on list\n");
  return;
 }
 for (VAR_3 = 0; VAR_3 < VAR_0 && VAR_1[VAR_3].name != ((void*)0); VAR_3++) {
  if (((void*)0) == VAR_1[VAR_3].value)
   FUNC_0(VAR_2, "%s\n", VAR_1[VAR_3].name);
  else
   FUNC_0(VAR_2, "%s=%s\n", VAR_1[VAR_3].name,
    VAR_1[VAR_3].value);
 }
}
