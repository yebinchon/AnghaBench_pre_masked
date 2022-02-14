
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctrl_iface_priv {int sock; scalar_t__ ctrl_dst; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ctrl_iface_priv*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (scalar_t__) ;

void FUNC_6(struct ctrl_iface_priv *VAR_1)
{
 if (VAR_1->sock > -1) {
  FUNC_1(VAR_1->sock);
  if (VAR_1->ctrl_dst) {





   FUNC_4(VAR_0, "CTRL_IFACE wait for attached "
       "monitors to receive messages");
   FUNC_3(0, 100000);
  }
  FUNC_0(VAR_1->sock);
  VAR_1->sock = -1;
 }

 FUNC_5(VAR_1->ctrl_dst);
 FUNC_2(VAR_1);
}
