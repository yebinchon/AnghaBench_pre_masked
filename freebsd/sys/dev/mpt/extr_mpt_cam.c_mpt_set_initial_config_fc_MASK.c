
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mpt_softc {scalar_t__ do_cfg_role; int cfg_role; int role; } ;
typedef int fc ;
typedef int U32 ;
struct TYPE_4__ {int Flags; int Header; } ;
typedef TYPE_1__ CONFIG_PAGE_FC_PORT_1 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct mpt_softc*,int) ;
 int FUNC_3 (struct mpt_softc*,char*) ;
 int FUNC_4 (struct mpt_softc*,int ,int,int ,int *,int ,int) ;
 int FUNC_5 (struct mpt_softc*,int ,int ,int *,int,int ,int) ;
 int FUNC_6 (struct mpt_softc*,int ,int ,int *,int,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct mpt_softc *VAR_10)
{
 CONFIG_PAGE_FC_PORT_1 VAR_11;
 U32 VAR_12;
 int VAR_13, VAR_14 = 0;
 int VAR_15;

 VAR_13 = FUNC_4(VAR_10, VAR_3, 1, 0,
     &VAR_11.Header, VAR_0, 5000);
 if (VAR_13) {
  FUNC_3(VAR_10, "failed to read FC page 1 header\n");
  return (FUNC_2(VAR_10, 1));
 }

 VAR_13 = FUNC_5(VAR_10, VAR_1, 0,
     &VAR_11.Header, sizeof (VAR_11), VAR_0, 5000);
 if (VAR_13) {
  FUNC_3(VAR_10, "failed to read FC page 1\n");
  return (FUNC_2(VAR_10, 1));
 }
 FUNC_1(&VAR_11);




 VAR_14 = 0;
 VAR_15 = 0;
 VAR_12 = VAR_11.Flags;

 if (VAR_12 & VAR_4) {
  VAR_15 |= VAR_8;
 }
 if (VAR_12 & VAR_5) {
  VAR_15 |= VAR_9;
 }

 VAR_12 &= ~VAR_6;

 if (VAR_10->do_cfg_role == 0) {
  VAR_15 = VAR_10->cfg_role;
 } else {
  VAR_10->do_cfg_role = 0;
 }

 if (VAR_15 != VAR_10->cfg_role) {
  if (VAR_10->cfg_role & VAR_8) {
   if ((VAR_15 & VAR_8) == 0) {
    FUNC_3(VAR_10, "adding initiator role\n");
    VAR_12 |= VAR_4;
    VAR_14++;
   } else {
    FUNC_3(VAR_10, "keeping initiator role\n");
   }
  } else if (VAR_15 & VAR_8) {
   FUNC_3(VAR_10, "removing initiator role\n");
   VAR_14++;
  }
  if (VAR_10->cfg_role & VAR_9) {
   if ((VAR_15 & VAR_9) == 0) {
    FUNC_3(VAR_10, "adding target role\n");
    VAR_12 |= VAR_5;
    VAR_14++;
   } else {
    FUNC_3(VAR_10, "keeping target role\n");
   }
  } else if (VAR_15 & VAR_9) {
   FUNC_3(VAR_10, "removing target role\n");
   VAR_14++;
  }
  VAR_10->role = VAR_10->cfg_role;
 }

 if (VAR_12 & VAR_5) {
  if ((VAR_12 & VAR_7) == 0) {
   FUNC_3(VAR_10, "adding OXID option\n");
   VAR_12 |= VAR_7;
   VAR_14++;
  }
 }

 if (VAR_14) {
  VAR_11.Flags = VAR_12;
  FUNC_0(&VAR_11);
  VAR_13 = FUNC_6(VAR_10,
      VAR_2, 0, &VAR_11.Header,
      sizeof(VAR_11), VAR_0, 5000);
  if (VAR_13 != 0) {
   FUNC_3(VAR_10, "failed to update NVRAM with changes\n");
   return (0);
  }
  FUNC_3(VAR_10, "NOTE: NVRAM changes will not take "
      "effect until next reboot or IOC reset\n");
 }
 return (0);
}
