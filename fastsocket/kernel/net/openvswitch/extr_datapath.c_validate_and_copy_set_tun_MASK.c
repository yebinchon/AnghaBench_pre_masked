
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tun_key ;
struct sw_flow_actions {int dummy; } ;
struct ovs_key_ipv4_tunnel {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sw_flow_actions**,int ,struct ovs_key_ipv4_tunnel*,int) ;
 int FUNC_1 (struct sw_flow_actions*,int) ;
 int FUNC_2 (struct sw_flow_actions**,int ) ;
 int FUNC_3 (struct nlattr const*) ;
 int FUNC_4 (int ,struct ovs_key_ipv4_tunnel*) ;

__attribute__((used)) static int FUNC_5(const struct nlattr *VAR_2,
         struct sw_flow_actions **VAR_3)
{
 struct ovs_key_ipv4_tunnel VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_4(FUNC_3(VAR_2), &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_6 = FUNC_2(VAR_3, VAR_0);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = FUNC_0(VAR_3, VAR_1, &VAR_4, sizeof(VAR_4));
 FUNC_1(*VAR_3, VAR_6);

 return VAR_5;
}
