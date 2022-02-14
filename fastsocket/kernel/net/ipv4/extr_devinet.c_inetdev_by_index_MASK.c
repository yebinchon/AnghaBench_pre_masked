
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct in_device {int dummy; } ;


 struct net_device* FUNC_0 (struct net*,int) ;
 int VAR_0 ;
 struct in_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct in_device *FUNC_4(struct net *VAR_1, int VAR_2)
{
 struct net_device *VAR_3;
 struct in_device *VAR_4 = ((void*)0);
 FUNC_2(&VAR_0);
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3)
  VAR_4 = FUNC_1(VAR_3);
 FUNC_3(&VAR_0);
 return VAR_4;
}
