
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
struct TYPE_4__ {int finalized; } ;
struct cgraph_node {scalar_t__ nested; int lowered; TYPE_1__ local; int decl; } ;
struct TYPE_6__ {int * cfg; } ;
struct TYPE_5__ {int (* deferred_inline_function ) (int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct cgraph_node*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct cgraph_node*,int) ;
 int FUNC_8 (struct cgraph_node*) ;
 int FUNC_9 (struct cgraph_node*) ;
 struct cgraph_node* FUNC_10 (int ) ;
 int FUNC_11 (struct cgraph_node*) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_12 (struct cgraph_node*,int ) ;
 int FUNC_13 (int ) ;
 int VAR_1 ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 scalar_t__ VAR_2 ;

void
FUNC_19 (tree VAR_3, bool VAR_4)
{
  struct cgraph_node *VAR_5 = FUNC_10 (VAR_3);

  if (VAR_5->local.finalized)
    FUNC_11 (VAR_5);

  FUNC_17 (VAR_3);
  VAR_5->decl = VAR_3;
  VAR_5->local.finalized = 1;
  VAR_5->lowered = FUNC_2 (VAR_3)->cfg != ((void*)0);
  if (VAR_5->nested)

    FUNC_16 (VAR_3, 0);
  FUNC_14 (!VAR_5->nested);



  if (!VAR_1)
    {
      FUNC_5 (VAR_5);
      FUNC_7 (VAR_5, 0);
    }

  if (FUNC_12 (VAR_5, VAR_3))
    FUNC_8 (VAR_5);




  if ((FUNC_4 (VAR_3) && !FUNC_0 (VAR_3) && !FUNC_1 (VAR_3)))
    FUNC_9 (VAR_5);



  if (!VAR_4)
    {
      if (!FUNC_6 ())
 FUNC_15 ();
    }


  if (!FUNC_3 (VAR_3))
    (*VAR_0->deferred_inline_function) (VAR_3);


  if (VAR_2)
    FUNC_13 (VAR_3);
}
