
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct ip_tunnel_parm {int dummy; } ;


 int FUNC_0 (struct net_device*,struct nlattr**,struct ip_tunnel_parm*) ;
 int FUNC_1 (struct nlattr**,struct nlattr**,struct ip_tunnel_parm*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
    struct nlattr *VAR_1[], struct nlattr *VAR_2[])
{
 struct ip_tunnel_parm VAR_3;

 FUNC_1(VAR_2, VAR_1, &VAR_3);
 return FUNC_0(VAR_0, VAR_1, &VAR_3);
}
