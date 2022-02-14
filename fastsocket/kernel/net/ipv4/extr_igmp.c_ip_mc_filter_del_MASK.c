
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int addr_len; } ;
struct in_device {struct net_device* dev; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct in_device *VAR_1, __be32 VAR_2)
{
 char VAR_3[VAR_0];
 struct net_device *VAR_4 = VAR_1->dev;

 if (FUNC_0(VAR_2, VAR_3, VAR_4, 0) == 0)
  FUNC_1(VAR_4, VAR_3, VAR_4->addr_len, 0);
}
