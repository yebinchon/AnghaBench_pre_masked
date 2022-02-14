
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int frag; } ;
struct sw_flow_key {TYPE_1__ ip; } ;
struct sk_buff {struct sk_buff* next; } ;
struct net {int dummy; } ;
struct dp_upcall_info {struct sw_flow_key* key; } ;
struct TYPE_4__ {unsigned short gso_type; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 unsigned short VAR_3 ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int,int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct net*,int,struct sk_buff*,struct dp_upcall_info const*) ;
 TYPE_2__* FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct net *VAR_4, int VAR_5,
        struct sk_buff *VAR_6,
        const struct dp_upcall_info *VAR_7)
{
 unsigned short VAR_8 = FUNC_6(VAR_6)->gso_type;
 struct dp_upcall_info VAR_9;
 struct sw_flow_key VAR_10;
 struct sk_buff *VAR_11, *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_2(VAR_6, VAR_1 | VAR_0, 0);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);


 VAR_6 = VAR_11;
 do {
  VAR_13 = FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7);
  if (VAR_13)
   break;

  if (VAR_6 == VAR_11 && VAR_8 & VAR_3) {




   VAR_10 = *VAR_7->key;
   VAR_10.ip.frag = VAR_2;

   VAR_9 = *VAR_7;
   VAR_9.key = &VAR_10;
   VAR_7 = &VAR_9;
  }
 } while ((VAR_6 = VAR_6->next));


 VAR_6 = VAR_11;
 do {
  VAR_12 = VAR_6->next;
  if (VAR_13)
   FUNC_4(VAR_6);
  else
   FUNC_3(VAR_6);
 } while ((VAR_6 = VAR_12));
 return VAR_13;
}
