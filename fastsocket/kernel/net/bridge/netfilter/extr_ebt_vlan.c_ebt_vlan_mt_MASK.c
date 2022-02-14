
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_match_param {struct ebt_vlan_info* matchinfo; } ;
struct vlan_hdr {unsigned char h_vlan_encapsulated_proto; int h_vlan_TCI; } ;
struct sk_buff {int dummy; } ;
struct ebt_vlan_info {int dummy; } ;
typedef int _frame ;
typedef unsigned char __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned short VAR_3 ;
 unsigned short FUNC_2 (int ) ;
 struct vlan_hdr* FUNC_3 (struct sk_buff const*,int ,int,struct vlan_hdr*) ;

__attribute__((used)) static bool
FUNC_4(const struct sk_buff *VAR_4, const struct xt_match_param *VAR_5)
{
 const struct ebt_vlan_info *VAR_6 = VAR_5->matchinfo;
 const struct vlan_hdr *VAR_7;
 struct vlan_hdr VAR_8;

 unsigned short VAR_9;
 unsigned short VAR_10;
 unsigned char VAR_11;

 __be16 VAR_12;

 VAR_7 = FUNC_3(VAR_4, 0, sizeof(VAR_8), &VAR_8);
 if (VAR_7 == ((void*)0))
  return 0;
 VAR_9 = FUNC_2(VAR_7->h_vlan_TCI);
 VAR_10 = VAR_9 & VAR_3;
 VAR_11 = (VAR_9 >> 13) & 0x7;
 VAR_12 = VAR_7->h_vlan_encapsulated_proto;


 if (FUNC_1(VAR_1))
  FUNC_0(VAR_10, VAR_1);


 if (FUNC_1(VAR_2))
  FUNC_0(VAR_11, VAR_2);


 if (FUNC_1(VAR_0))
  FUNC_0(VAR_12, VAR_0);

 return 1;
}
