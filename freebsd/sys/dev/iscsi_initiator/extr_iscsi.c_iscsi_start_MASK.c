
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct isc_softc {int dummy; } ;
typedef int pduq_t ;
struct TYPE_5__ {TYPE_1__* si_drv1; } ;
struct TYPE_4__ {TYPE_2__* dev; int nsess; int oid; int clist; int * eh; int unit_sx; int unit; int pdu_zone; int isc_sess; int isc_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int *,int ,int ,char*,int ,int *,int,char*) ;
 int FUNC_2 (int *,int ,int ,char*,int ,int ,char*) ;
 int FUNC_3 (int *,int ,int ,char*,int ,char*,int,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int) ;
 TYPE_1__* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 char* VAR_16 ;
 int VAR_17 ;
 char* VAR_18 ;
 TYPE_2__* FUNC_8 (int ,int *,scalar_t__,int *,int ,int ,int,char*) ;
 TYPE_1__* FUNC_9 (int,int ,int) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_10 (int *,char*,int *,int ) ;
 int FUNC_11 (int ,scalar_t__,int *) ;
 int FUNC_12 (char*,char*) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,int,int *,int *,int *,int *,int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static int
FUNC_18(void)
{
     FUNC_7(8);

     VAR_13 = FUNC_9(sizeof(struct isc_softc), VAR_6, VAR_8|VAR_7);
     FUNC_10(&VAR_13->isc_mtx, "iscsi-isc", ((void*)0), VAR_5);

     FUNC_6(&VAR_13->isc_sess);



     VAR_13->pdu_zone = FUNC_15("pdu", sizeof(pduq_t),
     ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     0, 0);
     FUNC_16(VAR_13->pdu_zone, VAR_19);
     VAR_13->unit = FUNC_11(0, VAR_20-1, ((void*)0));
     FUNC_13(&VAR_13->unit_sx, "iscsi sx");
     FUNC_14(&VAR_13->clist);
     VAR_13->oid = FUNC_2(&VAR_13->clist,
          FUNC_5(VAR_12),
          VAR_9,
          "iscsi_initiator",
          VAR_0,
          0,
          "iSCSI Subsystem");

     FUNC_3(&VAR_13->clist,
         FUNC_4(VAR_13->oid),
         VAR_9,
         "driver_version",
         VAR_0,
         VAR_16,
         0,
         "iscsi driver version");

     FUNC_3(&VAR_13->clist,
         FUNC_4(VAR_13->oid),
         VAR_9,
         "isid",
         VAR_1,
         VAR_18,
         6+1,
         "initiator part of the Session Identifier");

     FUNC_1(&VAR_13->clist,
      FUNC_4(VAR_13->oid),
      VAR_9,
      "sessions",
      VAR_0,
      &VAR_13->nsess,
      sizeof(VAR_13->nsess),
      "number of active session");





     VAR_13->dev = FUNC_8(VAR_4, &VAR_14, VAR_20,
          ((void*)0), VAR_11, VAR_3, 0600, "iscsi");
     if (VAR_13->dev == ((void*)0)) {
   FUNC_17("iscsi_initiator: make_dev_credf failed");
   return (VAR_2);
     }
     VAR_13->dev->si_drv1 = VAR_13;

     FUNC_12("iscsi: version %s\n", VAR_16);
     return (0);
}
