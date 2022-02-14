
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct nrv_data {scalar_t__ var; scalar_t__ result; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_1 (tree *VAR_1, int *VAR_2, void *VAR_3)
{
  struct nrv_data *VAR_4 = (struct nrv_data *)VAR_3;


  if (FUNC_0 (*VAR_1))
    *VAR_2 = 0;


  else if (*VAR_1 == VAR_4->var)
    *VAR_1 = VAR_4->result;


  return VAR_0;
}
