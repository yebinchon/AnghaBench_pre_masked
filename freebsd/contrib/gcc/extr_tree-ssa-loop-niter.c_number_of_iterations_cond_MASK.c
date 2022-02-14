
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int tree ;
struct tree_niter_desc {void* niter; int cmp; void* bound; void* additional_info; int may_be_zero; void* assumptions; } ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_11__ {int no_overflow; int base; void* step; } ;
typedef TYPE_1__ affine_iv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 void* VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* FUNC_2 (int ,int ) ;
 void* FUNC_3 (int ,int ,void*,void*) ;
 void* FUNC_4 (int,int ,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,TYPE_1__*,TYPE_1__*,struct tree_niter_desc*,int) ;
 int FUNC_8 (int ,TYPE_1__*,TYPE_1__*,struct tree_niter_desc*,int) ;
 int FUNC_9 (int ,TYPE_1__*,int ,struct tree_niter_desc*,int) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (void*) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (void*) ;

__attribute__((used)) static bool
FUNC_14 (tree VAR_8, affine_iv *VAR_9, enum tree_code VAR_10,
      affine_iv *VAR_11, struct tree_niter_desc *VAR_12,
      bool VAR_13)
{
  bool VAR_14;






  VAR_12->assumptions = VAR_6;
  VAR_12->may_be_zero = VAR_5;
  VAR_12->niter = VAR_4;
  VAR_12->additional_info = VAR_6;

  VAR_12->bound = VAR_4;
  VAR_12->cmp = VAR_0;



  if (VAR_10 == VAR_1 || VAR_10 == VAR_2
      || (VAR_10 == 128 && FUNC_13 (VAR_9->step)))
    {
      FUNC_1 (VAR_9, VAR_11);
      VAR_10 = FUNC_10 (VAR_10);
    }

  if (!VAR_13)
    {
      VAR_9->no_overflow = 0;
      VAR_11->no_overflow = 0;
    }

  if (FUNC_0 (VAR_8))
    {
      VAR_9->no_overflow = 1;
      VAR_11->no_overflow = 1;
    }



  if (!FUNC_13 (VAR_9->step) && VAR_9->no_overflow)
    VAR_14 = 1;
  else if (!FUNC_13 (VAR_11->step) && VAR_11->no_overflow)
    VAR_14 = 1;
  else
    VAR_14 = 0;




  if (!FUNC_13 (VAR_9->step) && !FUNC_13 (VAR_11->step))
    {
      if (VAR_10 != 128)
 return 0;

      VAR_9->step = FUNC_3 (VAR_3, VAR_8,
        VAR_9->step, VAR_11->step);
      VAR_9->no_overflow = 0;
      VAR_11->step = VAR_4;
      VAR_11->no_overflow = 1;
    }




  if (FUNC_13 (VAR_9->step) && FUNC_13 (VAR_11->step))
    return 0;


  if (VAR_10 != 128)
    {
      if (VAR_9->step && FUNC_11 (VAR_9->step))
 return 0;

      if (!FUNC_13 (VAR_11->step) && !FUNC_11 (VAR_11->step))
 return 0;
    }


  if (FUNC_13 (FUNC_4 (VAR_10, VAR_7, VAR_9->base, VAR_11->base)))
    {
      VAR_12->niter = FUNC_2 (FUNC_12 (VAR_8), 0);
      return 1;
    }



  switch (VAR_10)
    {
    case 128:
      FUNC_5 (FUNC_13 (VAR_11->step));
      return FUNC_9 (VAR_8, VAR_9, VAR_11->base, VAR_12, VAR_14);
    case 129:
      return FUNC_8 (VAR_8, VAR_9, VAR_11, VAR_12, VAR_14);
    case 130:
      return FUNC_7 (VAR_8, VAR_9, VAR_11, VAR_12, VAR_14);
    default:
      FUNC_6 ();
    }
}
