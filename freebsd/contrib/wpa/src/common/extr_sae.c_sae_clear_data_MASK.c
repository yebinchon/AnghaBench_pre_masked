
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sae_data {int peer_commit_scalar; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sae_data*,int ,int) ;
 int FUNC_2 (struct sae_data*) ;

void FUNC_3(struct sae_data *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 FUNC_2(VAR_0);
 FUNC_0(VAR_0->peer_commit_scalar, 0);
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
}
