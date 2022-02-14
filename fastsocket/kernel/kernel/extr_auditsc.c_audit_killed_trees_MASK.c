
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct audit_context {struct list_head killed_trees; int in_syscall; } ;
struct TYPE_2__ {struct audit_context* audit_context; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

struct list_head *FUNC_1(void)
{
 struct audit_context *VAR_1 = VAR_0->audit_context;
 if (FUNC_0(!VAR_1 || !VAR_1->in_syscall))
  return ((void*)0);
 return &VAR_1->killed_trees;
}
