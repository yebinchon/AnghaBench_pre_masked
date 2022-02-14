
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_eth_adapter {int wd_callout; int mii; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct al_eth_adapter *VAR_2 = VAR_1;

 FUNC_1(VAR_2->mii);


 FUNC_0(&VAR_2->wd_callout, VAR_0);
}
