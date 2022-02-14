
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* tree ;
struct tree_niter_desc {void* may_be_zero; void* assumptions; } ;
struct TYPE_4__ {void* base; void* step; } ;
typedef TYPE_1__ affine_iv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*) ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* FUNC_3 (void*,int) ;
 void* FUNC_4 (int ,void*,void*,void*) ;
 scalar_t__ FUNC_5 (void*) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static void
FUNC_7 (tree VAR_9, affine_iv *VAR_10, affine_iv *VAR_11,
        struct tree_niter_desc *VAR_12)
{
  tree VAR_13 = VAR_7, VAR_14, VAR_15;
  tree VAR_16, VAR_17, VAR_18;

  if (FUNC_5 (VAR_10->step))
    {
      VAR_15 = FUNC_4 (VAR_3, VAR_9,
     VAR_10->step, FUNC_3 (VAR_9, 1));




      if (!FUNC_0 (VAR_9))
 {
   VAR_14 = FUNC_4 (VAR_4, VAR_9,
          FUNC_2 (VAR_9), VAR_15);
   VAR_13 = FUNC_4 (VAR_0, VAR_8,
        VAR_10->base, VAR_14);
 }



      VAR_17 = FUNC_4 (VAR_3, VAR_9, VAR_10->base, VAR_15);
      VAR_18 = VAR_11->base;
    }
  else
    {
      VAR_15 = FUNC_4 (VAR_4, VAR_9,
     VAR_11->step, FUNC_3 (VAR_9, 1));

      if (!FUNC_0 (VAR_9))
 {
   VAR_14 = FUNC_4 (VAR_4, VAR_9,
          FUNC_1 (VAR_9), VAR_15);
   VAR_13 = FUNC_4 (VAR_2, VAR_8,
        VAR_11->base, VAR_14);
 }

      VAR_17 = VAR_10->base;
      VAR_18 = FUNC_4 (VAR_3, VAR_9, VAR_11->base, VAR_15);
    }

  VAR_16 = FUNC_4 (VAR_1, VAR_8, VAR_17, VAR_18);

  if (!FUNC_5 (VAR_13))
    VAR_12->assumptions = FUNC_4 (VAR_5, VAR_8,
          VAR_12->assumptions, VAR_13);
  if (!FUNC_6 (VAR_16))
    VAR_12->may_be_zero = FUNC_4 (VAR_6, VAR_8,
          VAR_12->may_be_zero, VAR_16);
}
