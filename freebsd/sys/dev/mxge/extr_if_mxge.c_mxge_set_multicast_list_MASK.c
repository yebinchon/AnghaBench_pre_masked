
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mxge_add_maddr_ctx {int error; TYPE_1__* sc; } ;
struct ifnet {int if_flags; } ;
struct TYPE_4__ {int dev; scalar_t__ adopted_rx_filter_bug; int fw_multicast_support; struct ifnet* ifp; } ;
typedef TYPE_1__ mxge_softc_t ;
typedef int mxge_cmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ifnet*,int ,struct mxge_add_maddr_ctx*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static void
FUNC_3(mxge_softc_t *VAR_5)
{
 struct mxge_add_maddr_ctx VAR_6;
 struct ifnet *VAR_7 = VAR_5->ifp;
 mxge_cmd_t VAR_8;
 int VAR_9;


 if (!VAR_5->fw_multicast_support)
  return;


 VAR_9 = FUNC_2(VAR_5, VAR_2, &VAR_8);
 if (VAR_9 != 0) {
  FUNC_0(VAR_5->dev, "Failed MXGEFW_ENABLE_ALLMULTI,"
         " error status: %d\n", VAR_9);
  return;
 }

 if (VAR_5->adopted_rx_filter_bug)
  return;

 if (VAR_7->if_flags & VAR_0)

  return;



 VAR_9 = FUNC_2(VAR_5, VAR_3, &VAR_8);
 if (VAR_9 != 0) {
  FUNC_0(VAR_5->dev,
         "Failed MXGEFW_LEAVE_ALL_MULTICAST_GROUPS"
         ", error status: %d\n", VAR_9);
  return;
 }


 VAR_6.sc = VAR_5;
 VAR_6.error = 0;
 FUNC_1(VAR_7, VAR_4, &VAR_6);
 if (VAR_6.error != 0) {
  FUNC_0(VAR_5->dev, "Failed MXGEFW_JOIN_MULTICAST_GROUP, "
      "error status:" "%d\t", VAR_6.error);

  return;
 }


 VAR_9 = FUNC_2(VAR_5, VAR_1, &VAR_8);
 if (VAR_9 != 0) {
  FUNC_0(VAR_5->dev, "Failed MXGEFW_DISABLE_ALLMULTI"
         ", error status: %d\n", VAR_9);
 }
}
