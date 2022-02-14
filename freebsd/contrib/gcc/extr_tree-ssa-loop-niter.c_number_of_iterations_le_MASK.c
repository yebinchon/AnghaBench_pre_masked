
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef void* tree ;
struct tree_niter_desc {void* assumptions; } ;
struct TYPE_6__ {void* base; void* step; } ;
typedef TYPE_1__ affine_iv ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 void* VAR_4 ;
 void* FUNC_2 (void*,int) ;
 void* FUNC_3 (int ,void*,void*,void*) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (void*,TYPE_1__*,TYPE_1__*,struct tree_niter_desc*,int) ;
 scalar_t__ FUNC_6 (void*) ;

__attribute__((used)) static bool
FUNC_7 (tree VAR_5, affine_iv *VAR_6, affine_iv *VAR_7,
    struct tree_niter_desc *VAR_8, bool VAR_9)
{
  tree VAR_10;






  if (!VAR_9)
    {
      if (FUNC_4 (VAR_6->step))
 VAR_10 = FUNC_3 (VAR_1, VAR_4,
      VAR_7->base, FUNC_0 (VAR_5));
      else
 VAR_10 = FUNC_3 (VAR_1, VAR_4,
      VAR_6->base, FUNC_1 (VAR_5));

      if (FUNC_6 (VAR_10))
 return 0;
      if (!FUNC_4 (VAR_10))
 VAR_8->assumptions = FUNC_3 (VAR_3, VAR_4,
       VAR_8->assumptions, VAR_10);
    }

  if (FUNC_4 (VAR_6->step))
    VAR_7->base = FUNC_3 (VAR_2, VAR_5,
        VAR_7->base, FUNC_2 (VAR_5, 1));
  else
    VAR_6->base = FUNC_3 (VAR_0, VAR_5,
        VAR_6->base, FUNC_2 (VAR_5, 1));
  return FUNC_5 (VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
