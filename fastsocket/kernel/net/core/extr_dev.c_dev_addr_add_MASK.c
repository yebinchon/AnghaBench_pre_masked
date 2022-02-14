
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int addr_len; int dev_addrs; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned char*,int ,unsigned char) ;
 int FUNC_2 (int ,struct net_device*) ;

int FUNC_3(struct net_device *VAR_1, unsigned char *VAR_2,
   unsigned char VAR_3)
{
 int VAR_4;

 FUNC_0();

 VAR_4 = FUNC_1(&VAR_1->dev_addrs, VAR_2, VAR_1->addr_len, VAR_3);
 if (!VAR_4)
  FUNC_2(VAR_0, VAR_1);
 return VAR_4;
}
