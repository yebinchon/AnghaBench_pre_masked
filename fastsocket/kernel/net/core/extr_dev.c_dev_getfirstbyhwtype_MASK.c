
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;


 struct net_device* FUNC_0 (struct net*,unsigned short) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

struct net_device *FUNC_4(struct net *VAR_0, unsigned short VAR_1)
{
 struct net_device *VAR_2;

 FUNC_2();
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_1(VAR_2);
 FUNC_3();
 return VAR_2;
}
