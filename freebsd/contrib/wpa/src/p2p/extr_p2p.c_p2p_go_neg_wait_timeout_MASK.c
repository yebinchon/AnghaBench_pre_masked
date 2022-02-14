
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {int dummy; } ;


 int FUNC_0 (struct p2p_data*,char*) ;
 int FUNC_1 (struct p2p_data*,int) ;

void FUNC_2(void *VAR_0, void *VAR_1)
{
 struct p2p_data *VAR_2 = VAR_0;

 FUNC_0(VAR_2,
  "Timeout on waiting peer to become ready for GO Negotiation");
 FUNC_1(VAR_2, -1);
}
