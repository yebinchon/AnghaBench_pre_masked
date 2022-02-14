
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_15__ {int if_type; } ;
struct TYPE_13__ {int fw_version_too_low; } ;
struct TYPE_12__ {int speed; } ;
struct TYPE_14__ {int os; TYPE_4__ sli; TYPE_2__ workaround; TYPE_1__ config; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
typedef int ocs_hw_port_e ;
typedef int ocs_hw_port_control_cb_t ;
typedef int ocs_hw_linkcfg_e ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_11 ;
 int FUNC_2 (TYPE_3__*,int *,int ,int ,int *) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ,void*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*,int) ;
 int * FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (TYPE_4__*,int *,int ) ;
 int FUNC_8 (TYPE_4__*,int *,int ) ;
 int FUNC_9 (TYPE_4__*,int *,int ,int ,int ) ;
 scalar_t__ FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (TYPE_4__*) ;

ocs_hw_rtn_e
FUNC_12(ocs_hw_t *VAR_12, ocs_hw_port_e VAR_13, uintptr_t VAR_14, ocs_hw_port_control_cb_t VAR_15, void *VAR_16)
{
 ocs_hw_rtn_e VAR_17 = VAR_2;

 switch (VAR_13) {
 case 130:
 {
  uint8_t *VAR_18;
  uint32_t VAR_19 = 0;
  uint8_t VAR_20 = 0;

  if (VAR_10 == FUNC_11(&VAR_12->sli)) {
   uint8_t *VAR_21;

   VAR_21 = FUNC_6(VAR_12->os, VAR_8, VAR_7);
   if (VAR_21 == ((void*)0)) {
    FUNC_4(VAR_12->os, "no buffer for command\n");
    return VAR_3;
   }

   if (FUNC_7(&VAR_12->sli, VAR_21, VAR_8)) {
    VAR_17 = FUNC_2(VAR_12, VAR_21, VAR_1,
       VAR_11, ((void*)0));
   }

   if (VAR_17 != VAR_4) {
    FUNC_1(VAR_12->os, VAR_21, VAR_8);
    FUNC_4(VAR_12->os, "CONFIG_LINK failed\n");
    break;
   }
   VAR_19 = VAR_12->config.speed;
   VAR_20 = (uint8_t)(VAR_14 & 0xff);
  } else {
   VAR_19 = VAR_0;
  }




  if (VAR_12->workaround.fw_version_too_low) {
   if (VAR_9 == VAR_12->sli.if_type) {
    FUNC_4(VAR_12->os, "Cannot bring up link.  Please update firmware to %s or later (current version is %s)\n",
     FUNC_0(VAR_5), (char *) FUNC_10(&VAR_12->sli,0));
   } else {
    FUNC_4(VAR_12->os, "Cannot bring up link.  Please update firmware to %s or later (current version is %s)\n",
     FUNC_0(VAR_6), (char *) FUNC_10(&VAR_12->sli, 0));
   }

   return VAR_2;
  }

  VAR_17 = VAR_2;


  VAR_18 = FUNC_6(VAR_12->os, VAR_8, VAR_7);
  if (VAR_18 == ((void*)0)) {
   FUNC_4(VAR_12->os, "no buffer for command\n");
   return VAR_3;
  }


  if (FUNC_9(&VAR_12->sli, VAR_18, VAR_8, VAR_19, VAR_20)) {
   VAR_17 = FUNC_2(VAR_12, VAR_18, VAR_1,
      VAR_11, ((void*)0));
  }

  if (VAR_17 != VAR_4) {
   FUNC_1(VAR_12->os, VAR_18, VAR_8);
   FUNC_4(VAR_12->os, "INIT_LINK failed\n");
  }
  break;
 }
 case 128:
 {
  uint8_t *VAR_22;

  VAR_22 = FUNC_6(VAR_12->os, VAR_8, VAR_7);
  if (VAR_22 == ((void*)0)) {
   FUNC_4(VAR_12->os, "no buffer for command\n");
   return VAR_3;
  }
  if (FUNC_8(&VAR_12->sli, VAR_22, VAR_8)) {
   VAR_17 = FUNC_2(VAR_12, VAR_22, VAR_1,
      VAR_11, ((void*)0));
  }

  if (VAR_17 != VAR_4) {
   FUNC_1(VAR_12->os, VAR_22, VAR_8);
   FUNC_4(VAR_12->os, "DOWN_LINK failed\n");
  }
  break;
 }
 case 129:
  VAR_17 = FUNC_3(VAR_12, (ocs_hw_linkcfg_e)VAR_14, VAR_1, VAR_15, VAR_16);
  break;
 default:
  FUNC_5(VAR_12->os, "unhandled control %#x\n", VAR_13);
  break;
 }

 return VAR_17;
}
