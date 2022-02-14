
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ addr_len; int dev_addrs; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,scalar_t__,unsigned char) ;
 int FUNC_2 (int ,struct net_device*) ;

int FUNC_3(struct net_device *VAR_2,
     struct net_device *VAR_3,
     unsigned char VAR_4)
{
 int VAR_5;

 FUNC_0();

 if (VAR_3->addr_len != VAR_2->addr_len)
  return -VAR_0;
 VAR_5 = FUNC_1(&VAR_2->dev_addrs, &VAR_3->dev_addrs,
         VAR_2->addr_len, VAR_4);
 if (!VAR_5)
  FUNC_2(VAR_1, VAR_2);
 return VAR_5;
}
