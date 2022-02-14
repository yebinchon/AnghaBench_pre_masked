
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; struct TYPE_3__* next; } ;
typedef TYPE_1__ search_dirs_type ;
typedef int FILE ;


 TYPE_1__* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,char*,char*,char*,char const*) ;
 int * FUNC_1 (char const*,char const*) ;

__attribute__((used)) static FILE *
FUNC_2 (const char *VAR_2, const char *VAR_3)
{
  search_dirs_type *VAR_4;
  FILE *VAR_5;
  char VAR_6[1000];


  VAR_5 = FUNC_1 (VAR_2, "");
  if (VAR_5 == ((void*)0))
    {

      for (VAR_4 = VAR_0; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
 {
   FUNC_0 (VAR_6, "%s%s%s", VAR_4->name, VAR_1, VAR_2);

   VAR_5 = FUNC_1 (VAR_6, VAR_3);
   if (VAR_5)
     break;
 }
    }

  return VAR_5;
}
