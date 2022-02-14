
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {int state; } ;


 int FUNC_0 (int ,struct p2p_data*,int *) ;
 int FUNC_1 (unsigned int,unsigned int,int ,struct p2p_data*,int *) ;
 int FUNC_2 (struct p2p_data*,char*,int ,unsigned int,unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

void FUNC_4(struct p2p_data *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 FUNC_2(VAR_1, "Set timeout (state=%s): %u.%06u sec",
  FUNC_3(VAR_1->state), VAR_2, VAR_3);
 FUNC_0(VAR_0, VAR_1, ((void*)0));
 FUNC_1(VAR_2, VAR_3, VAR_0, VAR_1, ((void*)0));
}
