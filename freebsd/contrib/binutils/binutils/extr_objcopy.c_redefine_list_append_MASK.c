
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct redefine_node {struct redefine_node* next; void* target; void* source; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,char const*) ;
 struct redefine_node* VAR_0 ;
 scalar_t__ FUNC_2 (char const*,void*) ;
 void* FUNC_3 (char const*) ;
 struct redefine_node* FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5 (const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
  struct redefine_node **VAR_4;
  struct redefine_node *VAR_5;
  struct redefine_node *VAR_6;

  for (VAR_4 = &VAR_0; (VAR_5 = *VAR_4) != ((void*)0); VAR_4 = &VAR_5->next)
    {
      if (FUNC_2 (VAR_2, VAR_5->source) == 0)
 FUNC_1 (FUNC_0("%s: Multiple redefinition of symbol \"%s\""),
        VAR_1, VAR_2);

      if (FUNC_2 (VAR_3, VAR_5->target) == 0)
 FUNC_1 (FUNC_0("%s: Symbol \"%s\" is target of more than one redefinition"),
        VAR_1, VAR_3);
    }

  VAR_6 = FUNC_4 (sizeof (struct redefine_node));

  VAR_6->source = FUNC_3 (VAR_2);
  VAR_6->target = FUNC_3 (VAR_3);
  VAR_6->next = ((void*)0);

  *VAR_4 = VAR_6;
}
