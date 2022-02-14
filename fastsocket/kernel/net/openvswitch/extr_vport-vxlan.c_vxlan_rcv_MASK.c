
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_sock {struct vport* data; } ;
struct vport {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ovs_key_ipv4_tunnel {int dummy; } ;
struct iphdr {int dummy; } ;
typedef int __be64 ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ovs_key_ipv4_tunnel*,struct iphdr*,int ,int ) ;
 int FUNC_4 (struct vport*,struct sk_buff*,struct ovs_key_ipv4_tunnel*) ;

__attribute__((used)) static void FUNC_5(struct vxlan_sock *VAR_1, struct sk_buff *VAR_2, __be32 VAR_3)
{
 struct ovs_key_ipv4_tunnel VAR_4;
 struct vport *VAR_5 = VAR_1->data;
 struct iphdr *VAR_6;
 __be64 VAR_7;


 VAR_6 = FUNC_1(VAR_2);
 VAR_7 = FUNC_0(FUNC_2(VAR_3) >> 8);
 FUNC_3(&VAR_4, VAR_6, VAR_7, VAR_0);

 FUNC_4(VAR_5, VAR_2, &VAR_4);
}
