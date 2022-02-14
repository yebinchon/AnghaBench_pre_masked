
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * tree ;
struct TYPE_7__ {int self_insns; scalar_t__ inlinable; int disregard_inline_limits; } ;
struct TYPE_6__ {int insns; } ;
struct cgraph_node {int analyzed; TYPE_3__ local; TYPE_2__ global; int * decl; } ;
struct TYPE_5__ {int (* disregard_inline_limits ) (int *) ;} ;
struct TYPE_8__ {TYPE_1__ tree_inlining; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct cgraph_node*,int *) ;
 int FUNC_2 (struct cgraph_node*) ;
 int * VAR_0 ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct cgraph_node*) ;
 TYPE_4__ VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

void
FUNC_9 (struct cgraph_node *VAR_4)
{
  tree VAR_5 = VAR_4->decl;

  VAR_0 = VAR_5;
  FUNC_6 (FUNC_0 (VAR_5));
  FUNC_2 (VAR_4);


  FUNC_1 (VAR_4, VAR_5);

  VAR_4->local.inlinable = FUNC_8 (VAR_5);
  if (!VAR_2)
    VAR_4->local.self_insns = FUNC_3 (VAR_5);
  if (VAR_4->local.inlinable)
    VAR_4->local.disregard_inline_limits
      = VAR_3.tree_inlining.disregard_inline_limits (VAR_5);
  FUNC_4 (VAR_4);
  if (VAR_1 && !VAR_4->local.disregard_inline_limits)
    VAR_4->local.inlinable = 0;

  VAR_4->global.insns = VAR_4->local.self_insns;

  VAR_4->analyzed = 1;
  FUNC_5 ();
  VAR_0 = ((void*)0);
}
