
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_9__ {scalar_t__ ct_cmd_resp; int ct_reason; int ct_explanation; } ;
struct TYPE_11__ {TYPE_2__* snscb_ports; TYPE_1__ snscb_cthdr; } ;
typedef TYPE_3__ sns_gid_xx_rsp_t ;
typedef int ispsoftc_t ;
typedef int isp_pdb_t ;
struct TYPE_12__ {scalar_t__ state; int handle; int portid; int probational; } ;
typedef TYPE_4__ fcportdb_t ;
struct TYPE_13__ {scalar_t__ isp_loopstate; int isp_portid; int role; int isp_lasthdl; scalar_t__ isp_scanscratch; int isp_topo; } ;
typedef TYPE_5__ fcparam ;
struct TYPE_10__ {int control; int* portid; } ;


 TYPE_5__* FUNC_0 (int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int,TYPE_4__*) ;
 int FUNC_2 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int,int,TYPE_4__**) ;
 int FUNC_8 (int *,int,int ,int *) ;
 int FUNC_9 (int *,int,int) ;
 int FUNC_10 (int *,int,int) ;
 int FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int *,int,int,int *,int *) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int,int *) ;
 int FUNC_15 (int *,int,char*,...) ;

__attribute__((used)) static int
FUNC_16(ispsoftc_t *VAR_15, int VAR_16)
{
 fcparam *VAR_17 = FUNC_0(VAR_15, VAR_16);
 fcportdb_t *VAR_18;
 uint32_t VAR_19;
 uint16_t VAR_20;
 isp_pdb_t VAR_21;
 int VAR_22, VAR_23, VAR_24;
 sns_gid_xx_rsp_t *VAR_25;

 if (VAR_17->isp_loopstate < VAR_8)
  return (-1);
 if (VAR_17->isp_loopstate >= VAR_7)
  return (0);

 FUNC_15(VAR_15, VAR_5, "Chan %d FC fabric scan", VAR_16);
 VAR_17->isp_loopstate = VAR_10;
 if (!FUNC_4(VAR_17->isp_topo)) {
  VAR_17->isp_loopstate = VAR_7;
  FUNC_15(VAR_15, VAR_5,
      "Chan %d FC fabric scan done (no fabric)", VAR_16);
  return (0);
 }

 if (VAR_17->isp_loopstate < VAR_10) {
abort:
  FUNC_2(VAR_15, VAR_16);
  FUNC_15(VAR_15, VAR_5,
      "Chan %d FC fabric scan aborted", VAR_16);
  return (1);
 }




 VAR_20 = FUNC_3(VAR_15) ? VAR_14 : VAR_2;
 VAR_24 = FUNC_8(VAR_15, VAR_16, VAR_20, &VAR_21);
 if ((VAR_24 & 0xffff) == VAR_12) {
  FUNC_5(VAR_15, VAR_16);
 }
 if (VAR_24) {
  VAR_17->isp_loopstate = VAR_9;
fail:
  FUNC_15(VAR_15, VAR_5,
      "Chan %d FC fabric scan done (bad)", VAR_16);
  return (-1);
 }


 VAR_24 = FUNC_11(VAR_15, VAR_16);
 if (VAR_17->isp_loopstate < VAR_10)
  goto abort;
 if (VAR_24 > 0) {
  VAR_17->isp_loopstate = VAR_7;
  return (-1);
 } else if (VAR_24 < 0) {
  VAR_17->isp_loopstate = VAR_9;
  return (-1);
 }

 VAR_25 = (sns_gid_xx_rsp_t *) VAR_17->isp_scanscratch;
 if (VAR_17->isp_loopstate < VAR_10)
  goto abort;
 if (VAR_25->snscb_cthdr.ct_cmd_resp != VAR_11) {
  int VAR_26;

  if (VAR_25->snscb_cthdr.ct_reason == 9 &&
      (VAR_25->snscb_cthdr.ct_explanation == 0x07 ||
       VAR_25->snscb_cthdr.ct_explanation == 0x0a)) {
   VAR_26 = VAR_5;
  } else {
   VAR_26 = VAR_4;
  }
  FUNC_15(VAR_15, VAR_26, "Chan %d Fabric Nameserver rejected GID_PT"
      " (Reason=0x%x Expl=0x%x)", VAR_16,
      VAR_25->snscb_cthdr.ct_reason,
      VAR_25->snscb_cthdr.ct_explanation);
  VAR_17->isp_loopstate = VAR_7;
  return (-1);
 }


 for (VAR_22 = 0; VAR_22 < VAR_13-1; VAR_22++) {
  if (VAR_25->snscb_ports[VAR_22].control & 0x80)
   break;
 }
 if ((VAR_25->snscb_ports[VAR_22].control & 0x80) == 0) {
  FUNC_15(VAR_15, VAR_4,
      "fabric too big for scratch area: increase ISP_FC_SCRLEN");
 }
 VAR_23 = VAR_22 + 1;
 FUNC_15(VAR_15, VAR_5,
     "Chan %d Got %d ports back from name server", VAR_16, VAR_23);


 for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++) {
  int VAR_27;

  VAR_19 =
      ((VAR_25->snscb_ports[VAR_22].portid[0]) << 16) |
      ((VAR_25->snscb_ports[VAR_22].portid[1]) << 8) |
      ((VAR_25->snscb_ports[VAR_22].portid[2]));

  for (VAR_27 = VAR_22 + 1; VAR_27 < VAR_23; VAR_27++) {
   uint32_t VAR_28 =
       ((VAR_25->snscb_ports[VAR_27].portid[0]) << 16) |
       ((VAR_25->snscb_ports[VAR_27].portid[1]) << 8) |
       ((VAR_25->snscb_ports[VAR_27].portid[2]));
   if (VAR_28 == VAR_19) {
    break;
   }
  }

  if (VAR_27 < VAR_23) {
   VAR_25->snscb_ports[VAR_27].portid[0] = 0;
   VAR_25->snscb_ports[VAR_27].portid[1] = 0;
   VAR_25->snscb_ports[VAR_27].portid[2] = 0;
   FUNC_15(VAR_15, VAR_5, "Chan %d removing duplicate PortID 0x%06x entry from list", VAR_16, VAR_19);
  }
 }
 FUNC_13(VAR_15, VAR_16);
 for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++) {
  VAR_19 = ((VAR_25->snscb_ports[VAR_22].portid[0]) << 16) |
    ((VAR_25->snscb_ports[VAR_22].portid[1]) << 8) |
    ((VAR_25->snscb_ports[VAR_22].portid[2]));
  FUNC_15(VAR_15, VAR_5,
      "Chan %d Checking fabric port 0x%06x", VAR_16, VAR_19);
  if (VAR_19 == 0) {
   FUNC_15(VAR_15, VAR_5,
       "Chan %d Port at idx %d is zero",
       VAR_16, VAR_22);
   continue;
  }
  if (VAR_19 == VAR_17->isp_portid) {
   FUNC_15(VAR_15, VAR_5,
       "Chan %d Port 0x%06x is our", VAR_16, VAR_19);
   continue;
  }


  if (FUNC_7(VAR_15, VAR_16, VAR_19, &VAR_18)) {
   if (!VAR_18->probational) {
    FUNC_15(VAR_15, VAR_3,
        "Chan %d Port 0x%06x@0x%04x [%d] is not probational (0x%x)",
        VAR_16, VAR_18->portid, VAR_18->handle,
        FUNC_1(VAR_15, VAR_16, VAR_18), VAR_18->state);
    FUNC_6(VAR_15, VAR_16);
    goto fail;
   }

   if (VAR_18->state == VAR_1)
    goto relogin;
   VAR_24 = FUNC_8(VAR_15, VAR_16, VAR_18->handle, &VAR_21);
   if (VAR_17->isp_loopstate < VAR_10)
    goto abort;
   if (VAR_24 != 0) {
    VAR_18->state = VAR_0;
    FUNC_15(VAR_15, VAR_5,
        "Chan %d Port 0x%06x handle 0x%x is dead (%d)",
        VAR_16, VAR_19, VAR_18->handle, VAR_24);
    goto relogin;
   }

   FUNC_14(VAR_15, VAR_16, &VAR_21);
   continue;
  }

relogin:
  if ((VAR_17->role & VAR_6) == 0) {
   FUNC_15(VAR_15, VAR_5,
       "Chan %d Port 0x%06x is not logged in", VAR_16, VAR_19);
   continue;
  }

  VAR_24 = FUNC_9(VAR_15, VAR_16, VAR_19);
  if (VAR_24 == 0) {
   FUNC_15(VAR_15, VAR_5,
       "Chan %d Port 0x%06x is not an FCP target", VAR_16, VAR_19);
   continue;
  }
  if (VAR_24 < 0)
   VAR_24 = FUNC_10(VAR_15, VAR_16, VAR_19);
  if (VAR_24 == 0) {
   FUNC_15(VAR_15, VAR_5,
       "Chan %d Port 0x%06x is not FCP", VAR_16, VAR_19);
   continue;
  }

  if (FUNC_12(VAR_15, VAR_16, VAR_19, &VAR_21,
      &FUNC_0(VAR_15, 0)->isp_lasthdl)) {
   if (VAR_17->isp_loopstate < VAR_10)
    goto abort;
   continue;
  }

  FUNC_14(VAR_15, VAR_16, &VAR_21);
 }

 if (VAR_17->isp_loopstate < VAR_10)
  goto abort;
 VAR_17->isp_loopstate = VAR_7;
 FUNC_15(VAR_15, VAR_5, "Chan %d FC fabric scan done", VAR_16);
 return (0);
}
