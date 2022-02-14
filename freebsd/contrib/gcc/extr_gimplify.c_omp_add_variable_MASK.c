
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct gimplify_omp_ctx {int variables; } ;
typedef TYPE_2__* splay_tree_node ;
typedef int splay_tree_key ;
struct TYPE_5__ {scalar_t__ (* omp_privatize_by_reference ) (scalar_t__) ;} ;
struct TYPE_7__ {TYPE_1__ decls; } ;
struct TYPE_6__ {unsigned int value; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 int FUNC_10 (int) ;
 TYPE_4__ VAR_12 ;
 int FUNC_11 (struct gimplify_omp_ctx*,scalar_t__) ;
 int FUNC_12 (struct gimplify_omp_ctx*,scalar_t__) ;
 int FUNC_13 (struct gimplify_omp_ctx*,scalar_t__,int) ;
 int FUNC_14 (int ,int ,unsigned int) ;
 TYPE_2__* FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (scalar_t__) ;

__attribute__((used)) static void
FUNC_17 (struct gimplify_omp_ctx *VAR_13, tree VAR_14, unsigned int VAR_15)
{
  splay_tree_node VAR_16;
  unsigned int VAR_17;
  tree VAR_18;

  if (VAR_14 == VAR_11 || FUNC_7 (VAR_14) == VAR_11)
    return;



  if (FUNC_4 (FUNC_7 (VAR_14))
      || FUNC_8 (FUNC_7 (VAR_14)))
    VAR_15 |= VAR_7;

  VAR_16 = FUNC_15 (VAR_13->variables, (splay_tree_key)VAR_14);
  if (VAR_16 != ((void*)0))
    {


      FUNC_10 ((VAR_16->value & VAR_0 & VAR_15) == 0);


      VAR_17 = VAR_16->value | VAR_15;
      FUNC_10 ((VAR_17 & VAR_0)
    == (VAR_3 | VAR_4));
      VAR_16->value = VAR_17;
      return;
    }




  if (FUNC_1 (VAR_14) && FUNC_5 (FUNC_1 (VAR_14)) != VAR_10)
    {




      if (!(VAR_15 & VAR_5))
 {
   VAR_17 = VAR_15 & VAR_6 ? VAR_6 : VAR_3;
   VAR_17 |= VAR_15 & VAR_7;
   VAR_18 = FUNC_3 (VAR_14);
   FUNC_10 (FUNC_5 (VAR_18) == VAR_9);
   VAR_18 = FUNC_6 (VAR_18, 0);
   FUNC_10 (FUNC_0 (VAR_18));
   FUNC_17 (VAR_13, VAR_18, VAR_17);
 }



      FUNC_12 (VAR_13, FUNC_2 (VAR_14));
      FUNC_12 (VAR_13, FUNC_1 (VAR_14));
      FUNC_11 (VAR_13, FUNC_7 (VAR_14));




      if (VAR_15 & VAR_8)
 VAR_15 = VAR_6 | VAR_1
  | (VAR_15 & (VAR_7 | VAR_2));
      else if (! (VAR_15 & VAR_5))
 FUNC_13 (VAR_13, FUNC_9 (FUNC_7 (VAR_14)), 1);
    }
  else if (VAR_12.decls.omp_privatize_by_reference (VAR_14))
    {
      FUNC_10 ((VAR_15 & VAR_5) == 0);
      FUNC_11 (VAR_13, FUNC_7 (VAR_14));



      if ((VAR_15 & VAR_8) == 0)
 {
   VAR_18 = FUNC_9 (FUNC_7 (FUNC_7 (VAR_14)));
   if (FUNC_5 (VAR_18) != VAR_10)
     FUNC_13 (VAR_13, VAR_18, 1);
 }
    }

  FUNC_14 (VAR_13->variables, (splay_tree_key)VAR_14, VAR_15);
}
