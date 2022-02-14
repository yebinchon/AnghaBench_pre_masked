
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* old_name; char const* new_name; scalar_t__ flags; struct TYPE_4__* next; } ;
typedef TYPE_1__ section_rename ;
typedef scalar_t__ flagword ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 TYPE_1__* FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (const char * VAR_1, const char * VAR_2,
      flagword VAR_3)
{
  section_rename * VAR_4;


  for (VAR_4 = VAR_0; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
    if (FUNC_2 (VAR_4->old_name, VAR_1) == 0)
      {

 if (FUNC_2 (VAR_4->new_name, VAR_2) == 0
     && VAR_4->flags == VAR_3)
   return;

 FUNC_1 (FUNC_0("Multiple renames of section %s"), VAR_1);
      }

  VAR_4 = FUNC_3 (sizeof (* VAR_4));

  VAR_4->old_name = VAR_1;
  VAR_4->new_name = VAR_2;
  VAR_4->flags = VAR_3;
  VAR_4->next = VAR_0;

  VAR_0 = VAR_4;
}
