
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct bnxt_softc {int flow_ctrl_ctx; struct sysctl_oid* flow_ctrl_oid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,char*,int,struct bnxt_softc*,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_2(struct bnxt_softc *VAR_7)
{
 struct sysctl_oid *VAR_8 = VAR_7->flow_ctrl_oid;

 if (!VAR_8)
  return VAR_2;

 FUNC_0(&VAR_7->flow_ctrl_ctx, FUNC_1(VAR_8), VAR_3,
   "tx", VAR_1|VAR_0, VAR_7, 0,
   VAR_6, "A",
   "Enable or Disable Tx Flow Ctrl: 0 / 1");

 FUNC_0(&VAR_7->flow_ctrl_ctx, FUNC_1(VAR_8), VAR_3,
   "rx", VAR_1|VAR_0, VAR_7, 0,
   VAR_5, "A",
   "Enable or Disable Tx Flow Ctrl: 0 / 1");

 FUNC_0(&VAR_7->flow_ctrl_ctx, FUNC_1(VAR_8), VAR_3,
   "autoneg", VAR_1|VAR_0, VAR_7, 0,
   VAR_4, "A",
   "Enable or Disable Autoneg Flow Ctrl: 0 / 1");

 return 0;
}
