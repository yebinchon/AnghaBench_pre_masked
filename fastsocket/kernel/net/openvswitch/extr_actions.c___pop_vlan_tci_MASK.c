
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_hdr {int h_vlan_TCI; } ;
struct sk_buff {scalar_t__ ip_summed; int mac_header; scalar_t__ data; int csum; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sk_buff*,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,int) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct sk_buff*,struct vlan_hdr*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_5, __be16 *VAR_6)
{
 struct vlan_hdr *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_5, VAR_3);
 if (FUNC_6(VAR_8))
  return VAR_8;

 if (VAR_5->ip_summed == VAR_0)
  VAR_5->csum = FUNC_2(VAR_5->csum, FUNC_1(VAR_5->data
     + (2 * VAR_1), VAR_4, 0));

 VAR_7 = (struct vlan_hdr *)(VAR_5->data + VAR_2);
 *VAR_6 = VAR_7->h_vlan_TCI;

 FUNC_4(VAR_5->data + VAR_4, VAR_5->data, 2 * VAR_1);
 FUNC_0(VAR_5, VAR_4);

 FUNC_7(VAR_5, VAR_7);
 VAR_5->mac_header += VAR_4;
 FUNC_5(VAR_5);

 return 0;
}
