
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee_pending_parm {char const* name; int kind; int type; struct ieee_pending_parm* next; int val; int referencep; } ;
struct ieee_handle {int block_depth; int fnargcount; int fnargs; struct ieee_pending_parm* pending_parms; TYPE_2__* type_stack; } ;
typedef enum debug_parm_kind { ____Placeholder_debug_parm_kind } debug_parm_kind ;
typedef int bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_3__ {int referencep; } ;
struct TYPE_4__ {TYPE_1__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee_handle*,int *) ;
 int FUNC_2 (struct ieee_handle*) ;
 int FUNC_3 (struct ieee_handle*,int ) ;
 int FUNC_4 (struct ieee_pending_parm*,int ,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (void *VAR_2, const char *VAR_3, enum debug_parm_kind VAR_4,
    bfd_vma VAR_5)
{
  struct ieee_handle *VAR_6 = (struct ieee_handle *) VAR_2;
  struct ieee_pending_parm *VAR_7, **VAR_8;

  FUNC_0 (VAR_6->block_depth == 1);

  VAR_7 = (struct ieee_pending_parm *) FUNC_5 (sizeof *VAR_7);
  FUNC_4 (VAR_7, 0, sizeof *VAR_7);

  VAR_7->next = ((void*)0);
  VAR_7->name = VAR_3;
  VAR_7->referencep = VAR_6->type_stack->type.referencep;
  VAR_7->type = FUNC_2 (VAR_6);
  VAR_7->kind = VAR_4;
  VAR_7->val = VAR_5;

  for (VAR_8 = &VAR_6->pending_parms; *VAR_8 != ((void*)0); VAR_8 = &(*VAR_8)->next)
    ;
  *VAR_8 = VAR_7;


  if (! FUNC_1 (VAR_6, &VAR_6->fnargs)
      || ! FUNC_3 (VAR_6, VAR_7->type))
    return VAR_0;
  ++VAR_6->fnargcount;

  return VAR_1;
}
