
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_pending_var {char const* name; int kind; int val; int type; struct stab_pending_var* next; } ;
struct stab_handle {scalar_t__ gcc_compiled; struct stab_pending_var* pending; scalar_t__ n_opt_found; int within_function; } ;
typedef enum debug_var_kind { ____Placeholder_debug_var_kind } debug_var_kind ;
typedef int debug_type ;
typedef int bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,char const*,int ,int,int ) ;
 int FUNC_1 (struct stab_pending_var*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (void *VAR_3, struct stab_handle *VAR_4,
        const char *VAR_5, debug_type VAR_6,
        enum debug_var_kind VAR_7, bfd_vma VAR_8)
{
  struct stab_pending_var *VAR_9;

  if ((VAR_7 == VAR_0 || VAR_7 == VAR_1)
      || ! VAR_4->within_function
      || (VAR_4->gcc_compiled == 0 && VAR_4->n_opt_found))
    return FUNC_0 (VAR_3, VAR_5, VAR_6, VAR_7, VAR_8);

  VAR_9 = (struct stab_pending_var *) FUNC_2 (sizeof *VAR_9);
  FUNC_1 (VAR_9, 0, sizeof *VAR_9);

  VAR_9->next = VAR_4->pending;
  VAR_9->name = VAR_5;
  VAR_9->type = VAR_6;
  VAR_9->kind = VAR_7;
  VAR_9->val = VAR_8;
  VAR_4->pending = VAR_9;

  return VAR_2;
}
