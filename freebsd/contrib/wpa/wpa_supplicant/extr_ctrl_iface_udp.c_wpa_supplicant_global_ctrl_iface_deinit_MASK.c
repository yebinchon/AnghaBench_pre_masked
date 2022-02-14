
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctrl_iface_global_priv {scalar_t__ sock; int ctrl_dst; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ctrl_iface_global_priv*) ;
 int FUNC_3 (int ) ;

void
FUNC_4(struct ctrl_iface_global_priv *VAR_0)
{
 if (VAR_0->sock >= 0) {
  FUNC_1(VAR_0->sock);
  FUNC_0(VAR_0->sock);
 }

 FUNC_3(VAR_0->ctrl_dst);
 FUNC_2(VAR_0);
}
