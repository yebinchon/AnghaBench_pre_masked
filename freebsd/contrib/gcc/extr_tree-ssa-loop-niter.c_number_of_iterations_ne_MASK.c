
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* tree ;
struct TYPE_3__ {void* step; void* base; } ;
struct tree_niter_desc {void* assumptions; void* niter; int cmp; void* bound; TYPE_1__ control; } ;
typedef TYPE_1__ affine_iv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (void*) ;
 void* VAR_11 ;
 void* FUNC_1 (void*,int) ;
 void* FUNC_2 (void*,scalar_t__) ;
 void* FUNC_3 (int ,void*,void*,void*) ;
 void* FUNC_4 (int ,void*,void*) ;
 void* FUNC_5 (int ,void*,void*,void*) ;
 void* FUNC_6 (void*,void*) ;
 scalar_t__ FUNC_7 (void*) ;
 void* FUNC_8 (void*,void*) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (void*) ;
 scalar_t__ FUNC_11 (void*) ;
 scalar_t__ FUNC_12 (void*,int) ;
 void* FUNC_13 (void*) ;

__attribute__((used)) static bool
FUNC_14 (tree VAR_12, affine_iv *VAR_13, tree VAR_14,
    struct tree_niter_desc *VAR_15, bool VAR_16)
{
  tree VAR_17 = FUNC_13 (VAR_12);
  tree VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;

  VAR_15->control = *VAR_13;
  VAR_15->bound = VAR_14;
  VAR_15->cmp = VAR_8;



  if (FUNC_11 (VAR_13->step))
    {
      VAR_18 = FUNC_6 (VAR_17,
   FUNC_4 (VAR_7, VAR_12, VAR_13->step));
      VAR_19 = FUNC_5 (VAR_5, VAR_17,
         FUNC_6 (VAR_17, VAR_13->base),
         FUNC_6 (VAR_17, VAR_14));
    }
  else
    {
      VAR_18 = FUNC_6 (VAR_17, VAR_13->step);
      VAR_19 = FUNC_5 (VAR_5, VAR_17,
         FUNC_6 (VAR_17, VAR_14),
         FUNC_6 (VAR_17, VAR_13->base));
    }


  if (FUNC_7 (VAR_18))
    {
      VAR_15->niter = VAR_19;
      return 1;
    }




  VAR_21 = FUNC_10 (VAR_18);
  VAR_24 = FUNC_2 (VAR_17,
          (FUNC_0 (VAR_17)
    - FUNC_12 (VAR_21, 1)));

  VAR_20 = FUNC_3 (VAR_4, VAR_17,
          FUNC_1 (VAR_17, 1), VAR_21);
  VAR_18 = FUNC_3 (VAR_9, VAR_17, VAR_18, VAR_21);

  if (!VAR_16)
    {


      VAR_22 = FUNC_5 (VAR_3, VAR_17, VAR_19, VAR_20);
      VAR_22 = FUNC_5 (VAR_1, VAR_11,
    VAR_22, FUNC_1 (VAR_17, 0));
      if (!FUNC_9 (VAR_22))
 VAR_15->assumptions = FUNC_5 (VAR_10, VAR_11,
       VAR_15->assumptions, VAR_22);
    }

  VAR_19 = FUNC_5 (VAR_2, VAR_17, VAR_19, VAR_20);
  VAR_23 = FUNC_5 (VAR_6, VAR_17, VAR_19, FUNC_8 (VAR_18, VAR_24));
  VAR_15->niter = FUNC_5 (VAR_0, VAR_17, VAR_23, VAR_24);
  return 1;
}
