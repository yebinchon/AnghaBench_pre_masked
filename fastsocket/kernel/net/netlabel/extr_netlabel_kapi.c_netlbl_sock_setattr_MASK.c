
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sock {int dummy; } ;
struct netlbl_lsm_secattr {int domain; } ;
struct TYPE_2__ {int cipsov4; } ;
struct netlbl_dom_map {TYPE_1__ type_def; int type; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct sock*,int ,struct netlbl_lsm_secattr const*) ;
 struct netlbl_dom_map* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(struct sock *VAR_3,
   u16 VAR_4,
   const struct netlbl_lsm_secattr *VAR_5)
{
 int VAR_6;
 struct netlbl_dom_map *VAR_7;

 FUNC_2();
 VAR_7 = FUNC_1(VAR_5->domain);
 if (VAR_7 == ((void*)0)) {
  VAR_6 = -VAR_1;
  goto socket_setattr_return;
 }
 switch (VAR_4) {
 case 132:
  switch (VAR_7->type) {
  case 130:
   VAR_6 = -VAR_0;
   break;
  case 129:
   VAR_6 = FUNC_0(VAR_3,
          VAR_7->type_def.cipsov4,
          VAR_5);
   break;
  case 128:
   VAR_6 = 0;
   break;
  default:
   VAR_6 = -VAR_1;
  }
  break;







 default:
  VAR_6 = -VAR_2;
 }

socket_setattr_return:
 FUNC_3();
 return VAR_6;
}
