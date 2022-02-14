
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* tree ;
struct tree_niter_desc {void* assumptions; void* may_be_zero; } ;
struct TYPE_4__ {void* step; void* base; int no_overflow; } ;
typedef TYPE_1__ affine_iv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* FUNC_4 (int ,void*,void*,void*) ;
 void* FUNC_5 (void*,void*) ;
 scalar_t__ FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (void*) ;

__attribute__((used)) static bool
FUNC_8 (tree VAR_11, affine_iv *VAR_12, affine_iv *VAR_13,
          struct tree_niter_desc *VAR_14,
          tree *VAR_15, tree VAR_16)
{
  tree VAR_17 = FUNC_1 (VAR_16);
  tree VAR_18 = FUNC_4 (VAR_0, VAR_17, *VAR_15, VAR_16);
  tree VAR_19;
  tree VAR_20 = VAR_9, VAR_21, VAR_22;

  if (FUNC_0 (VAR_18) != VAR_3)
    return 0;
  if (FUNC_6 (VAR_18))
    VAR_18 = FUNC_4 (VAR_5, VAR_17, VAR_16, VAR_18);
  VAR_19 = FUNC_5 (VAR_11, VAR_18);

  if (FUNC_6 (VAR_12->step))
    {



      if (!VAR_13->no_overflow && !FUNC_7 (VAR_18))
 {
   VAR_21 = FUNC_4 (VAR_5, VAR_11,
          FUNC_2 (VAR_11), VAR_19);
   VAR_20 = FUNC_4 (VAR_4, VAR_10,
        VAR_13->base, VAR_21);
   if (FUNC_7 (VAR_20))
     return 0;
 }
      VAR_22 = FUNC_4 (VAR_2, VAR_10,
       VAR_12->base,
       FUNC_4 (VAR_6, VAR_11,
      VAR_13->base, VAR_19));
    }
  else
    {



      if (!VAR_12->no_overflow && !FUNC_7 (VAR_18))
 {
   VAR_21 = FUNC_4 (VAR_6, VAR_11,
          FUNC_3 (VAR_11), VAR_19);
   VAR_20 = FUNC_4 (VAR_1, VAR_10,
        VAR_12->base, VAR_21);
   if (FUNC_7 (VAR_20))
     return 0;
 }
      VAR_22 = FUNC_4 (VAR_2, VAR_10,
       FUNC_4 (VAR_5, VAR_11,
      VAR_12->base, VAR_19),
       VAR_13->base);
    }

  if (!FUNC_6 (VAR_20))
    VAR_14->assumptions = FUNC_4 (VAR_7, VAR_10,
          VAR_14->assumptions,
          VAR_20);
  if (!FUNC_7 (VAR_22))
    VAR_14->may_be_zero = FUNC_4 (VAR_8, VAR_10,
          VAR_14->may_be_zero,
          VAR_22);
  *VAR_15 = FUNC_4 (VAR_6, VAR_17, *VAR_15, VAR_18);
  return 1;
}
