
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ qkey; scalar_t__ tclass; int sl_flow_hop; int pkey; } ;
struct TYPE_7__ {TYPE_1__ mcmember_rec; } ;
typedef TYPE_2__ osm_mgrp_t ;
typedef int osm_log_t ;
typedef int osm_log_level_t ;
typedef int ib_net64_t ;
struct TYPE_8__ {scalar_t__ qkey; scalar_t__ tclass; int sl_flow_hop; int pkey; } ;
typedef TYPE_3__ ib_member_rec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(osm_log_t * VAR_6, ib_net64_t VAR_7,
          const ib_member_rec_t * VAR_8,
          osm_mgrp_t * VAR_9,
          osm_log_level_t VAR_10)
{
 int VAR_11 = 0;

 if ((VAR_3 & VAR_7) &&
     VAR_8->qkey != VAR_9->mcmember_rec.qkey) {
  FUNC_0(VAR_6, VAR_10, "ERR 1B30: "
   "Q_Key mismatch: query 0x%x group 0x%x\n",
   FUNC_2(VAR_8->qkey),
   FUNC_2(VAR_9->mcmember_rec.qkey));
  goto Exit;
 }

 if (VAR_2 & VAR_7) {
  if (!(FUNC_5(VAR_8->pkey) ||
        FUNC_5(VAR_9->mcmember_rec.pkey))) {
   FUNC_0(VAR_6, VAR_10, "ERR 1B31: "
    "Both limited P_Keys: query 0x%x group 0x%x\n",
    FUNC_1(VAR_8->pkey),
    FUNC_1(VAR_9->mcmember_rec.pkey));
   goto Exit;
  }
  if (FUNC_4(VAR_8->pkey) !=
      FUNC_4(VAR_9->mcmember_rec.pkey)) {
   FUNC_0(VAR_6, VAR_10, "ERR 1B32: "
    "P_Key base mismatch: query 0x%x group 0x%x\n",
    FUNC_1(VAR_8->pkey),
    FUNC_1(VAR_9->mcmember_rec.pkey));
   goto Exit;
  }
 }

 if ((VAR_5 & VAR_7) &&
     VAR_8->tclass != VAR_9->mcmember_rec.tclass) {
  FUNC_0(VAR_6, VAR_10, "ERR 1B33: "
   "TClass mismatch: query %d group %d\n",
   VAR_8->tclass, VAR_9->mcmember_rec.tclass);
  goto Exit;
 }


 {
  uint32_t VAR_12, VAR_13;
  uint8_t VAR_14, VAR_15;
  uint8_t VAR_16, VAR_17;

  FUNC_3(VAR_8->sl_flow_hop,
       &VAR_15, &VAR_13, &VAR_17);

  FUNC_3(VAR_9->mcmember_rec.sl_flow_hop,
       &VAR_14, &VAR_12, &VAR_16);

  if ((VAR_4 & VAR_7) && VAR_15 != VAR_14) {
   FUNC_0(VAR_6, VAR_10, "ERR 1B34: "
    "SL mismatch: query %d group %d\n",
    VAR_15, VAR_14);
   goto Exit;
  }

  if ((VAR_0 & VAR_7) &&
      VAR_13 != VAR_12) {
   FUNC_0(VAR_6, VAR_10, "ERR 1B35: "
    "FlowLabel mismatch: query 0x%x group 0x%x\n",
    VAR_13, VAR_12);
   goto Exit;
  }

  if ((VAR_1 & VAR_7) && VAR_17 != VAR_16) {
   FUNC_0(VAR_6, VAR_10, "ERR 1B36: "
    "Hop mismatch: query %d group %d\n",
    VAR_17, VAR_16);
   goto Exit;
  }
 }

 VAR_11 = 1;
Exit:
 return VAR_11;
}
