
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ disregard_inline_limits; } ;
struct TYPE_6__ {TYPE_2__* inlined_to; } ;
struct cgraph_node {scalar_t__ decl; TYPE_1__ local; TYPE_3__ global; } ;
struct TYPE_5__ {scalar_t__ decl; } ;


 char* FUNC_0 (char*) ;

__attribute__((used)) static bool
FUNC_1 (struct cgraph_node *VAR_0,
        struct cgraph_node *VAR_1,
        const char **VAR_2)
{
  bool VAR_3;
  if (VAR_0->global.inlined_to)
    VAR_3 = VAR_1->decl == VAR_0->global.inlined_to->decl;
  else
    VAR_3 = VAR_1->decl == VAR_0->decl;


  if (VAR_3 && VAR_2)
    *VAR_2 = (VAR_1->local.disregard_inline_limits
        ? FUNC_0("recursive inlining") : "");
  return VAR_3;
}
