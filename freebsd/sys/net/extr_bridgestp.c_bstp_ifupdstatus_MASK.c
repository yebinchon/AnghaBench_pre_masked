
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ifnet {int (* if_ioctl ) (struct ifnet*,int ,int ) ;int if_flags; } ;
struct ifmediareq {int ifm_status; int ifm_active; } ;
struct bstp_state {int dummy; } ;
struct bstp_port {int bp_flags; int bp_ptp_link; scalar_t__ bp_path_cost; scalar_t__ bp_role; scalar_t__ bp_protover; int bp_operedge; scalar_t__ bp_infois; int bp_active; struct ifnet* bp_ifp; struct bstp_state* bp_bs; } ;
typedef int ifmr ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bstp_state*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct bstp_state*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct bstp_state*) ;
 scalar_t__ FUNC_3 (struct bstp_port*) ;
 int FUNC_4 (struct bstp_state*,struct bstp_port*) ;
 int FUNC_5 (struct bstp_state*,struct bstp_port*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct ifnet*,int ,int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_10, int VAR_11)
{
 struct bstp_port *VAR_12 = (struct bstp_port *)VAR_10;
 struct bstp_state *VAR_13 = VAR_12->bp_bs;
 struct ifnet *VAR_14 = VAR_12->bp_ifp;
 struct ifmediareq VAR_15;
 int VAR_16, VAR_17;

 if (!VAR_12->bp_active)
  return;

 FUNC_6((char *)&VAR_15, sizeof(VAR_15));
 VAR_16 = (*VAR_14->if_ioctl)(VAR_14, VAR_9, (caddr_t)&VAR_15);

 FUNC_0(VAR_13);
 VAR_17 = 0;
 if ((VAR_16 == 0) && (VAR_14->if_flags & VAR_6)) {
  if (VAR_15.ifm_status & VAR_7) {

   if (VAR_12->bp_flags & VAR_2) {
    int VAR_18;

    VAR_18 = VAR_15.ifm_active & VAR_8 ? 1 : 0;
    if (VAR_12->bp_ptp_link ^ VAR_18) {
     VAR_12->bp_ptp_link = VAR_18;
     VAR_17 = 1;
    }
   }


   if (VAR_12->bp_flags & VAR_3) {
    uint32_t VAR_19;

    VAR_19 = FUNC_3(VAR_12);
    if (VAR_12->bp_path_cost != VAR_19) {
     VAR_12->bp_path_cost = VAR_19;
     VAR_17 = 1;
    }
    VAR_12->bp_flags &= ~VAR_3;
   }

   if (VAR_12->bp_role == VAR_5) {
    FUNC_5(VAR_13, VAR_12);
    VAR_17 = 1;
   }
  } else {
   if (VAR_12->bp_role != VAR_5) {
    FUNC_4(VAR_13, VAR_12);
    VAR_17 = 1;
    if ((VAR_12->bp_flags & VAR_1) &&
        VAR_12->bp_protover == VAR_4)
     VAR_12->bp_operedge = 1;
   }
  }
 } else if (VAR_12->bp_infois != VAR_0) {
  FUNC_4(VAR_13, VAR_12);
  VAR_17 = 1;
 }
 if (VAR_17)
  FUNC_2(VAR_13);
 FUNC_1(VAR_13);
}
