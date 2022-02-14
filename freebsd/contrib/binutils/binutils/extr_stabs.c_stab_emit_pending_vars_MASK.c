
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_pending_var {struct stab_pending_var* next; int val; int kind; int type; int name; } ;
struct stab_handle {struct stab_pending_var* pending; } ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,int ,int ,int ) ;
 int FUNC_1 (struct stab_pending_var*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (void *VAR_2, struct stab_handle *VAR_3)
{
  struct stab_pending_var *VAR_4;

  VAR_4 = VAR_3->pending;
  while (VAR_4 != ((void*)0))
    {
      struct stab_pending_var *VAR_5;

      if (! FUNC_0 (VAR_2, VAR_4->name, VAR_4->type, VAR_4->kind, VAR_4->val))
 return VAR_0;

      VAR_5 = VAR_4->next;
      FUNC_1 (VAR_4);
      VAR_4 = VAR_5;
    }

  VAR_3->pending = ((void*)0);

  return VAR_1;
}
