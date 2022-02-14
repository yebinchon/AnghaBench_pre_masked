
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct netlbl_lsm_secattr {int domain; } ;
struct TYPE_2__ {int cipsov4; } ;
struct netlbl_domaddr4_map {TYPE_1__ type_def; int type; } ;
struct iphdr {int daddr; } ;




 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ,struct netlbl_lsm_secattr const*) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 struct netlbl_domaddr4_map* FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6(struct sk_buff *VAR_2,
     u16 VAR_3,
     const struct netlbl_lsm_secattr *VAR_4)
{
 int VAR_5;
 struct iphdr *VAR_6;
 struct netlbl_domaddr4_map *VAR_7;

 FUNC_4();
 switch (VAR_3) {
 case 131:
  VAR_6 = FUNC_2(VAR_2);
  VAR_7 = FUNC_3(VAR_4->domain,
             VAR_6->daddr);
  if (VAR_7 == ((void*)0)) {
   VAR_5 = -VAR_0;
   goto skbuff_setattr_return;
  }
  switch (VAR_7->type) {
  case 129:
   VAR_5 = FUNC_1(VAR_2,
         VAR_7->type_def.cipsov4,
         VAR_4);
   break;
  case 128:


   VAR_5 = FUNC_0(VAR_2);
   break;
  default:
   VAR_5 = -VAR_0;
  }
  break;







 default:
  VAR_5 = -VAR_1;
 }

skbuff_setattr_return:
 FUNC_5();
 return VAR_5;
}
