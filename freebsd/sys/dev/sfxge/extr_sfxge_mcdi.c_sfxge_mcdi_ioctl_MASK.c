
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct sfxge_mcdi {scalar_t__ state; } ;
struct sfxge_softc {struct sfxge_mcdi mcdi; int enp; } ;
struct TYPE_9__ {int cmd; scalar_t__ len; int payload; int rc; } ;
struct TYPE_10__ {TYPE_1__ mcdi; } ;
struct TYPE_11__ {TYPE_2__ u; } ;
typedef TYPE_3__ sfxge_ioc_t ;
struct TYPE_12__ {int enc_features; } ;
typedef TYPE_4__ efx_nic_cfg_t ;
struct TYPE_13__ {scalar_t__ emr_out_length_used; int emr_cmd; int emr_rc; scalar_t__ emr_out_length; int * emr_out_buf; scalar_t__ emr_in_length; int * emr_in_buf; } ;
typedef TYPE_5__ efx_mcdi_req_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int ,int *,scalar_t__) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 TYPE_4__* FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (scalar_t__,int ,int) ;
 int VAR_10 ;
 int FUNC_6 (struct sfxge_softc*,TYPE_5__*) ;
 int FUNC_7 (struct sfxge_softc*) ;

int
FUNC_8(struct sfxge_softc *VAR_11, sfxge_ioc_t *VAR_12)
{
 const efx_nic_cfg_t *VAR_13 = FUNC_3(VAR_11->enp);
 struct sfxge_mcdi *VAR_14 = &(VAR_11->mcdi);
 efx_mcdi_req_t VAR_15;
 uint8_t *VAR_16;
 int VAR_17;

 if (VAR_14->state == VAR_9) {
  VAR_17 = VAR_2;
  goto fail1;
 }

 if (!(VAR_13->enc_features & VAR_0)) {
  VAR_17 = VAR_3;
  goto fail2;
 }

 if (VAR_12->u.mcdi.len > VAR_8) {
  VAR_17 = VAR_1;
  goto fail3;
 }

 VAR_16 = FUNC_5(VAR_8, VAR_5, VAR_6 | VAR_7);
 if ((VAR_17 = FUNC_1(VAR_12->u.mcdi.payload, VAR_16, VAR_12->u.mcdi.len)) != 0) {
  goto fail5;
 }

 VAR_15.emr_cmd = VAR_12->u.mcdi.cmd;
 VAR_15.emr_in_buf = VAR_16;
 VAR_15.emr_in_length = VAR_12->u.mcdi.len;

 VAR_15.emr_out_buf = VAR_16;
 VAR_15.emr_out_length = VAR_8;

 FUNC_6(VAR_11, &VAR_15);

 VAR_12->u.mcdi.rc = VAR_15.emr_rc;
 VAR_12->u.mcdi.cmd = VAR_15.emr_cmd;
 VAR_12->u.mcdi.len = VAR_15.emr_out_length_used;
 if ((VAR_17 = FUNC_2(VAR_16, VAR_12->u.mcdi.payload, VAR_12->u.mcdi.len)) != 0) {
  goto fail6;
 }





 if (VAR_12->u.mcdi.cmd == VAR_4) {

  FUNC_0(VAR_10);

  (void) FUNC_7(VAR_11);
 }

 FUNC_4(VAR_16, VAR_5);

 return (0);

fail6:
fail5:
 FUNC_4(VAR_16, VAR_5);
fail3:
fail2:
fail1:
 return (VAR_17);
}
