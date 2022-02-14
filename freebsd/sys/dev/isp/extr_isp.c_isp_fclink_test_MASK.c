
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_9__ {int* param; } ;
typedef TYPE_1__ mbreg_t ;
typedef int ispsoftc_t ;
struct TYPE_10__ {scalar_t__ portid; } ;
typedef TYPE_2__ isp_pdb_t ;
struct TYPE_11__ {scalar_t__ isp_loopstate; scalar_t__ isp_fwstate; int isp_topo; int isp_portid; int isp_loopid; int isp_fabric_params; scalar_t__ role; int isp_gbspeed; scalar_t__ isp_wwnn; scalar_t__ isp_wwpn; int isp_sns_hdl; } ;
typedef TYPE_3__ fcparam ;
typedef int NANOTIME_T ;


 TYPE_3__* FUNC_0 (int *,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_7 (TYPE_1__*,int ,int ,int) ;
 int FUNC_8 (int *,int *) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_9 (int) ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__* VAR_29 ;
 int FUNC_10 (int *,int,int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int,int ,TYPE_2__*) ;
 int FUNC_15 (int *,TYPE_1__*) ;
 int FUNC_16 (int *,int,char*,int,...) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int *,int) ;

__attribute__((used)) static int
FUNC_22(ispsoftc_t *VAR_30, int VAR_31, int VAR_32)
{
 mbreg_t VAR_33;
 int VAR_34, VAR_35;
 uint16_t VAR_36;
 fcparam *VAR_37;
 isp_pdb_t VAR_38;
 NANOTIME_T VAR_39, VAR_40;

 VAR_37 = FUNC_0(VAR_30, VAR_31);

 if (VAR_37->isp_loopstate < VAR_7)
  return (-1);
 if (VAR_37->isp_loopstate >= VAR_8)
  return (0);

 FUNC_16(VAR_30, VAR_4, "Chan %d FC link test", VAR_31);




 FUNC_1(&VAR_39);
 while (1) {
  FUNC_10(VAR_30, VAR_31, FUNC_13(VAR_30, VAR_31));
  if (VAR_37->isp_fwstate == VAR_1) {
   break;
  }
  if (VAR_37->isp_loopstate < VAR_7)
   goto abort;
  FUNC_1(&VAR_40);
  if ((FUNC_8(&VAR_40, &VAR_39) / 1000 + 1000 >= VAR_32))
   break;
  FUNC_3(VAR_30, 1000);
 }
 if (VAR_37->isp_fwstate != VAR_1) {
  FUNC_16(VAR_30, VAR_4,
      "Chan %d Firmware is not ready (%s)",
      VAR_31, FUNC_11(VAR_37->isp_fwstate));
  return (-1);
 }




 FUNC_7(&VAR_33, VAR_20, VAR_18, 0);
 VAR_33.param[9] = VAR_31;
 FUNC_15(VAR_30, &VAR_33);
 if (VAR_33.param[0] != VAR_19) {
  return (-1);
 }

 if (FUNC_4(VAR_30)) {




  if (FUNC_2(VAR_30, 1, 15, 37))
   VAR_37->isp_topo = VAR_25;
  else
   VAR_37->isp_topo = VAR_27;
 } else {
  int VAR_41 = (int) VAR_33.param[6];
  if (VAR_41 < VAR_27 || VAR_41 > VAR_28) {
   VAR_41 = VAR_28;
  }
  VAR_37->isp_topo = VAR_41;
 }
 VAR_37->isp_portid = VAR_33.param[2] | (VAR_33.param[3] << 16);

 if (!FUNC_9(VAR_37->isp_topo)) {
  VAR_37->isp_loopid = VAR_33.param[1] & 0xff;
 } else if (VAR_37->isp_topo != VAR_26) {
  uint8_t VAR_42 = VAR_37->isp_portid;

  for (VAR_34 = 0; VAR_29[VAR_34]; VAR_34++) {
   if (VAR_29[VAR_34] == VAR_42)
    break;
  }
  if (VAR_29[VAR_34])
   VAR_37->isp_loopid = VAR_34;
 }




 VAR_37->isp_loopstate = VAR_9;

 if (VAR_37->isp_topo == VAR_26 || VAR_37->isp_topo == VAR_25) {
  VAR_36 = FUNC_6(VAR_30) ? VAR_22 : VAR_0;
  VAR_35 = FUNC_14(VAR_30, VAR_31, VAR_36, &VAR_38);
  if (VAR_35 != 0 || VAR_38.portid == 0) {
   if (FUNC_4(VAR_30)) {
    VAR_37->isp_topo = VAR_27;
   } else {
    FUNC_16(VAR_30, VAR_3,
        "fabric topology, but cannot get info about fabric controller (0x%x)", VAR_35);
    VAR_37->isp_topo = VAR_28;
   }
   goto not_on_fabric;
  }

  if (FUNC_6(VAR_30)) {
   VAR_37->isp_fabric_params = VAR_33.param[7];
   VAR_37->isp_sns_hdl = VAR_23;
   VAR_35 = FUNC_18(VAR_30, VAR_31);
   if (VAR_37->isp_loopstate < VAR_9)
    goto abort;
   if (VAR_35 != 0)
    goto not_on_fabric;
   VAR_35 = FUNC_17(VAR_30, VAR_31);
   if (VAR_37->isp_loopstate < VAR_9)
    goto abort;
   if (VAR_35 != 0)
    goto not_on_fabric;
   VAR_35 = FUNC_20(VAR_30, VAR_31);
   if (VAR_37->isp_loopstate < VAR_9)
    goto abort;
   if (VAR_35 != 0)
    goto not_on_fabric;
   FUNC_19(VAR_30, VAR_31);
   if (VAR_37->isp_loopstate < VAR_9)
    goto abort;
  } else {
   VAR_37->isp_sns_hdl = VAR_24;
   VAR_35 = FUNC_18(VAR_30, VAR_31);
   if (VAR_35 != 0)
    goto not_on_fabric;
   if (VAR_37->role == VAR_5)
    FUNC_21(VAR_30, VAR_31);
  }
 }

not_on_fabric:

 VAR_37->isp_gbspeed = 1;
 if (FUNC_5(VAR_30) || FUNC_6(VAR_30)) {
  FUNC_7(&VAR_33, VAR_21, VAR_18, 3000000);
  VAR_33.param[1] = VAR_17;

  FUNC_15(VAR_30, &VAR_33);
  if (VAR_33.param[0] == VAR_19) {
   if (VAR_33.param[1] == VAR_10)
    VAR_37->isp_gbspeed = 10;
   else if (VAR_33.param[1] == VAR_14)
    VAR_37->isp_gbspeed = 32;
   else if (VAR_33.param[1] == VAR_11)
    VAR_37->isp_gbspeed = 16;
   else if (VAR_33.param[1] == VAR_16)
    VAR_37->isp_gbspeed = 8;
   else if (VAR_33.param[1] == VAR_15)
    VAR_37->isp_gbspeed = 4;
   else if (VAR_33.param[1] == VAR_13)
    VAR_37->isp_gbspeed = 2;
   else if (VAR_33.param[1] == VAR_12)
    VAR_37->isp_gbspeed = 1;
  }
 }

 if (VAR_37->isp_loopstate < VAR_9) {
abort:
  FUNC_16(VAR_30, VAR_4,
      "Chan %d FC link test aborted", VAR_31);
  return (1);
 }
 VAR_37->isp_loopstate = VAR_8;
 FUNC_16(VAR_30, VAR_4|VAR_2,
     "Chan %d WWPN %016jx WWNN %016jx",
     VAR_31, (uintmax_t)VAR_37->isp_wwpn, (uintmax_t)VAR_37->isp_wwnn);
 FUNC_16(VAR_30, VAR_4|VAR_2,
     "Chan %d %dGb %s PortID 0x%06x LoopID 0x%02x",
     VAR_31, VAR_37->isp_gbspeed, FUNC_12(VAR_37), VAR_37->isp_portid,
     VAR_37->isp_loopid);
 FUNC_16(VAR_30, VAR_4, "Chan %d FC link test done", VAR_31);
 return (0);
}
