
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_hdr {scalar_t__ h_vlan_encapsulated_proto; } ;
struct sk_buff {scalar_t__ protocol; scalar_t__ data; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

__be16 FUNC_3(struct sk_buff *VAR_3)
{
 __be16 VAR_4 = VAR_3->protocol;
 int VAR_5 = VAR_0;

 while (VAR_4 == FUNC_0(VAR_1)) {
  struct vlan_hdr *VAR_6;

  if (FUNC_2(!FUNC_1(VAR_3, VAR_5 + VAR_2)))
   return 0;

  VAR_6 = (struct vlan_hdr *)(VAR_3->data + VAR_5);
  VAR_4 = VAR_6->h_vlan_encapsulated_proto;
  VAR_5 += VAR_2;
 }

 return VAR_4;
}
