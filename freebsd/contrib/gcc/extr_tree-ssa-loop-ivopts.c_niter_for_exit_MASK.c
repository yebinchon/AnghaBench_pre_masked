
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct tree_niter_desc {int niter; int may_be_zero; } ;
struct nfe_cache_elt {int niter; int exit; } ;
struct ivopts_data {int current_loop; int niters; } ;
typedef int edge ;
typedef struct nfe_cache_elt* PTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct nfe_cache_elt** FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,struct tree_niter_desc*,int) ;
 struct nfe_cache_elt* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static tree
FUNC_6 (struct ivopts_data *VAR_2, edge VAR_3)
{
  struct nfe_cache_elt *VAR_4;
  struct tree_niter_desc VAR_5;
  PTR *VAR_6;

  VAR_6 = FUNC_1 (VAR_2->niters, VAR_3,
       FUNC_2 (VAR_3),
       VAR_0);

  if (!*VAR_6)
    {
      VAR_4 = FUNC_4 (sizeof (struct nfe_cache_elt));
      VAR_4->exit = VAR_3;






      if (FUNC_3 (VAR_2->current_loop,
         VAR_3, &VAR_5, 1)
   && FUNC_5 (VAR_5.may_be_zero)
        && !FUNC_0 (VAR_5.niter))
 VAR_4->niter = VAR_5.niter;
      else
 VAR_4->niter = VAR_1;
    }
  else
    VAR_4 = *VAR_6;

  return VAR_4->niter;
}
