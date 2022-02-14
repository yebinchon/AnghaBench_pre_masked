
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct sock {int dummy; } ;
struct netlbl_lsm_secattr {int domain; } ;
struct TYPE_3__ {int cipsov4; } ;
struct netlbl_domaddr4_map {TYPE_1__ type_def; int type; } ;




 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int ,struct netlbl_lsm_secattr const*) ;
 struct netlbl_domaddr4_map* FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int FUNC_5(struct sock *VAR_2,
   struct sockaddr *VAR_3,
   const struct netlbl_lsm_secattr *VAR_4)
{
 int VAR_5;
 struct sockaddr_in *VAR_6;
 struct netlbl_domaddr4_map *VAR_7;

 FUNC_3();
 switch (VAR_3->sa_family) {
 case 131:
  VAR_6 = (struct sockaddr_in *)VAR_3;
  VAR_7 = FUNC_2(VAR_4->domain,
             VAR_6->sin_addr.s_addr);
  if (VAR_7 == ((void*)0)) {
   VAR_5 = -VAR_0;
   goto conn_setattr_return;
  }
  switch (VAR_7->type) {
  case 129:
   VAR_5 = FUNC_1(VAR_2,
         VAR_7->type_def.cipsov4,
         VAR_4);
   break;
  case 128:


   FUNC_0(VAR_2);
   VAR_5 = 0;
   break;
  default:
   VAR_5 = -VAR_0;
  }
  break;







 default:
  VAR_5 = -VAR_1;
 }

conn_setattr_return:
 FUNC_4();
 return VAR_5;
}
