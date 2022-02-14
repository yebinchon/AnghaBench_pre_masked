
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct see_pre_extension_expr {struct see_pre_extension_expr* next; struct see_pre_extension_expr* avail_occr; struct see_pre_extension_expr* antic_occr; } ;
struct see_occr {struct see_occr* next; struct see_occr* avail_occr; struct see_occr* antic_occr; } ;


 int FUNC_0 (struct see_pre_extension_expr*) ;

__attribute__((used)) static void
FUNC_1 (void *VAR_0)
{
  struct see_pre_extension_expr *VAR_1 = VAR_0;
  struct see_occr *VAR_2 = VAR_1->antic_occr;
  struct see_occr *VAR_3 = ((void*)0);


  while (VAR_2)
    {
      VAR_3 = VAR_2->next;
      FUNC_0 (VAR_2);
      VAR_2 = VAR_3;
    }


  VAR_2 = VAR_1->avail_occr;
  while (VAR_2)
    {
      VAR_3 = VAR_2->next;
      FUNC_0 (VAR_2);
      VAR_2 = VAR_3;
    }


  FUNC_0 (VAR_1);
}
