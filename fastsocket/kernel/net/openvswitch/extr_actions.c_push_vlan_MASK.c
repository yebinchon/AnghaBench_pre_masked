
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ data; int csum; } ;
struct ovs_action_push_vlan {int vlan_tci; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_5, const struct ovs_action_push_vlan *VAR_6)
{
 if (FUNC_5(FUNC_7(VAR_5))) {
  u16 VAR_7;


  VAR_7 = FUNC_6(VAR_5);

  if (!FUNC_1(VAR_5, VAR_7))
   return -VAR_1;

  if (VAR_5->ip_summed == VAR_0)
   VAR_5->csum = FUNC_2(VAR_5->csum, FUNC_3(VAR_5->data
     + (2 * VAR_2), VAR_3, 0));

 }
 FUNC_0(VAR_5, FUNC_4(VAR_6->vlan_tci) & ~VAR_4);
 return 0;
}
