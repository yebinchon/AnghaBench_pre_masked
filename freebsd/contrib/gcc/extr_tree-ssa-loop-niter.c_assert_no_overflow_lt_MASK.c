
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* tree ;
struct tree_niter_desc {void* assumptions; } ;
struct TYPE_4__ {int no_overflow; void* base; void* step; } ;
typedef TYPE_1__ affine_iv ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 int VAR_6 ;
 void* FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 void* VAR_7 ;
 void* FUNC_4 (void*,int) ;
 void* FUNC_5 (int ,void*,void*,void*) ;
 void* FUNC_6 (void*,void*) ;
 scalar_t__ FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (void*) ;

__attribute__((used)) static bool
FUNC_9 (tree VAR_8, affine_iv *VAR_9, affine_iv *VAR_10,
         struct tree_niter_desc *VAR_11, tree VAR_12)
{
  tree VAR_13, VAR_14, VAR_15, VAR_16;
  tree VAR_17 = FUNC_1 (VAR_12);

  if (FUNC_7 (VAR_9->step))
    {

      if (VAR_9->no_overflow)
 return 1;





      if (FUNC_0 (VAR_9->base) == VAR_2)
 {
   VAR_14 = FUNC_5 (VAR_4, VAR_17,
      FUNC_6 (VAR_17, FUNC_2 (VAR_8)),
      FUNC_6 (VAR_17, VAR_9->base));
   VAR_16 = FUNC_5 (VAR_0, VAR_17, VAR_14, VAR_12);
 }
      else
 VAR_16 = FUNC_5 (VAR_4, VAR_17, VAR_12,
       FUNC_4 (VAR_17, 1));
      VAR_13 = FUNC_5 (VAR_4, VAR_8,
      FUNC_2 (VAR_8), FUNC_6 (VAR_8, VAR_16));
      VAR_15 = FUNC_5 (VAR_3, VAR_7,
    VAR_10->base, VAR_13);
    }
  else
    {

      if (VAR_10->no_overflow)
 return 1;

      if (FUNC_0 (VAR_10->base) == VAR_2)
 {
   VAR_14 = FUNC_5 (VAR_4, VAR_17,
      FUNC_6 (VAR_17, VAR_10->base),
      FUNC_6 (VAR_17, FUNC_3 (VAR_8)));
   VAR_16 = FUNC_5 (VAR_0, VAR_17, VAR_14, VAR_12);
 }
      else
 VAR_16 = FUNC_5 (VAR_4, VAR_17, VAR_12,
       FUNC_4 (VAR_17, 1));
      VAR_13 = FUNC_5 (VAR_5, VAR_8,
      FUNC_3 (VAR_8), FUNC_6 (VAR_8, VAR_16));
      VAR_15 = FUNC_5 (VAR_1, VAR_7,
    VAR_9->base, VAR_13);
    }

  if (FUNC_8 (VAR_15))
    return 0;
  if (!FUNC_7 (VAR_15))
    VAR_11->assumptions = FUNC_5 (VAR_6, VAR_7,
          VAR_11->assumptions, VAR_15);

  VAR_9->no_overflow = 1;
  VAR_10->no_overflow = 1;
  return 1;
}
