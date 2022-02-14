
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tac_acct_start {int action; int authen_action; int authen_type; int authen_service; int priv_lvl; } ;
struct TYPE_3__ {struct tac_acct_start acct_start; } ;
struct TYPE_4__ {TYPE_1__ u; } ;
struct tac_handle {TYPE_2__ request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tac_handle*,int ,int,int) ;

int
FUNC_1(struct tac_handle *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct tac_acct_start *VAR_7;

 FUNC_0(VAR_2, VAR_0, VAR_4, VAR_5);

 VAR_7 = &VAR_2->request.u.acct_start;
 VAR_7->action = VAR_3;
 VAR_7->authen_action = VAR_4;
 VAR_7->priv_lvl = VAR_1;
 VAR_7->authen_type = VAR_5;
 VAR_7->authen_service = VAR_6;

 return 0;
}
