
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varlist {scalar_t__ name; void* value; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct varlist* FUNC_1 (struct varlist*,char*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (void*) ;
 struct varlist* VAR_1 ;
 scalar_t__ FUNC_4 (size_t*,char const**,char**,char**) ;
 int VAR_2 ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(
 struct varlist *VAR_3,
 const char *VAR_4
 )
{
 struct varlist *VAR_5;
 size_t VAR_6;
 char *VAR_7;
 char *VAR_8;

 VAR_6 = FUNC_5(VAR_4);
 while (FUNC_4(&VAR_6, &VAR_4, &VAR_7, &VAR_8)) {
  FUNC_0(VAR_7 && VAR_8);
  VAR_5 = FUNC_1(VAR_3, VAR_7);
  if (VAR_5 == 0 || VAR_5->name == 0) {
   (void) FUNC_2(VAR_2, "Variable `%s' not found\n",
           VAR_7);
  } else {
   FUNC_3((void *)(intptr_t)VAR_5->name);
   if (VAR_5->value != 0)
       FUNC_3(VAR_5->value);
   for ( ; (VAR_5+1) < (VAR_1 + VAR_0)
          && (VAR_5+1)->name != 0; VAR_5++) {
    VAR_5->name = (VAR_5+1)->name;
    VAR_5->value = (VAR_5+1)->value;
   }
   VAR_5->name = VAR_5->value = 0;
  }
 }
}
