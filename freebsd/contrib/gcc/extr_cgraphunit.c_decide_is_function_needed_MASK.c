
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_2__ {int externally_visible; int inlinable; int disregard_inline_limits; } ;
struct cgraph_node {TYPE_1__ local; int origin; scalar_t__ needed; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct cgraph_node*,int *) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_15 (char*,int ) ;
 int VAR_2 ;

__attribute__((used)) static bool
FUNC_16 (struct cgraph_node *VAR_3, tree VAR_4)
{
  tree VAR_5;
  if (FUNC_10 (FUNC_7 (VAR_4))
      && FUNC_11 (VAR_4))
    {
      VAR_3->local.externally_visible = 1;
      return 1;
    }


  if (VAR_3->local.externally_visible)
    return 1;

  if (!VAR_0 && FUNC_15 ("used", FUNC_2 (VAR_4)))
    return 1;




  if (FUNC_1 (VAR_4)
      && FUNC_12 (FUNC_0 (VAR_4)))
    return 1;




  if (VAR_3->needed)
    return 1;
  if (((FUNC_11 (VAR_4)
 || (!VAR_2 && !VAR_3->local.disregard_inline_limits
     && !FUNC_4 (VAR_4)
     && !VAR_3->origin))
      && !VAR_1)
      && !FUNC_3 (VAR_4) && !FUNC_5 (VAR_4))
    return 1;



  if (FUNC_8 (VAR_4) || FUNC_9 (VAR_4))
    return 1;

  if (VAR_0)
    return 0;





  if (FUNC_5 (VAR_4))
    return 0;


  for (VAR_5 = FUNC_14 (VAR_4); VAR_5;
       VAR_5 = FUNC_14 (VAR_5))
    if (FUNC_5 (VAR_5))
      return 0;

  if (FUNC_3 (VAR_4))
    return 0;
  if (!FUNC_6 (VAR_4)
      || (!VAR_3->local.disregard_inline_limits


   && !FUNC_4 (VAR_4)
   && (!VAR_3->local.inlinable || !FUNC_13 (VAR_3, ((void*)0)))))
    return 1;

  return 0;
}
