
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sae_data {TYPE_1__* tmp; } ;
struct TYPE_2__ {scalar_t__ dh; scalar_t__ ec; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sae_data*,int *) ;
 scalar_t__ FUNC_1 (struct sae_data*,int *) ;
 scalar_t__ FUNC_2 (struct sae_data*,int *) ;

int FUNC_3(struct sae_data *VAR_1)
{
 u8 VAR_2[VAR_0];
 if (VAR_1->tmp == ((void*)0) ||
     (VAR_1->tmp->ec && FUNC_0(VAR_1, VAR_2) < 0) ||
     (VAR_1->tmp->dh && FUNC_1(VAR_1, VAR_2) < 0) ||
     FUNC_2(VAR_1, VAR_2) < 0)
  return -1;
 return 0;
}
