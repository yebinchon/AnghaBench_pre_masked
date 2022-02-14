
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct request_sock {TYPE_1__* rsk_ops; } ;
struct netlbl_lsm_secattr {int domain; } ;
struct TYPE_5__ {struct cipso_v4_doi* cipsov4; } ;
struct netlbl_domaddr4_map {TYPE_2__ type_def; int type; } ;
struct TYPE_6__ {struct cipso_v4_doi* cipsov4; } ;
struct netlbl_dom_map {TYPE_3__ type_def; int type; } ;
struct inet_request_sock {int rmt_addr; } ;
struct cipso_v4_doi {int dummy; } ;
struct TYPE_4__ {int family; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct request_sock*) ;
 int FUNC_1 (struct request_sock*,struct cipso_v4_doi*,struct netlbl_lsm_secattr const*) ;
 struct inet_request_sock* FUNC_2 (struct request_sock*) ;
 struct netlbl_dom_map* FUNC_3 (int ) ;
 struct netlbl_domaddr4_map* FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

int FUNC_7(struct request_sock *VAR_3,
         const struct netlbl_lsm_secattr *VAR_4)
{
 int VAR_5;
 struct netlbl_dom_map *VAR_6;
 struct netlbl_domaddr4_map *VAR_7;
 u32 VAR_8;
 struct cipso_v4_doi *VAR_9;

 FUNC_5();
 VAR_6 = FUNC_3(VAR_4->domain);
 if (VAR_6 == ((void*)0)) {
  VAR_5 = -VAR_0;
  goto req_setattr_return;
 }
 switch (VAR_3->rsk_ops->family) {
 case 131:
  if (VAR_6->type == VAR_2) {
   struct inet_request_sock *VAR_10 = FUNC_2(VAR_3);
   VAR_7 = FUNC_4(VAR_4->domain,
           VAR_10->rmt_addr);
   if (VAR_7 == ((void*)0)) {
    VAR_5 = -VAR_0;
    goto req_setattr_return;
   }
   VAR_8 = VAR_7->type;
   VAR_9 = VAR_7->type_def.cipsov4;
  } else {
   VAR_8 = VAR_6->type;
   VAR_9 = VAR_6->type_def.cipsov4;
  }
  switch (VAR_8) {
  case 129:
   VAR_5 = FUNC_1(VAR_3, VAR_9, VAR_4);
   break;
  case 128:


   FUNC_0(VAR_3);
   VAR_5 = 0;
   break;
  default:
   VAR_5 = -VAR_0;
  }
  break;







 default:
  VAR_5 = -VAR_1;
 }

req_setattr_return:
 FUNC_6();
 return VAR_5;
}
