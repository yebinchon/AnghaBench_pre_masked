
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int addr_len; int uc; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,void*,int ,int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

int FUNC_5(struct net_device *VAR_1, void *VAR_2)
{
 int VAR_3;

 FUNC_0();

 FUNC_3(VAR_1);
 VAR_3 = FUNC_2(&VAR_1->uc, VAR_2, VAR_1->addr_len,
       VAR_0);
 if (!VAR_3)
  FUNC_1(VAR_1);
 FUNC_4(VAR_1);
 return VAR_3;
}
