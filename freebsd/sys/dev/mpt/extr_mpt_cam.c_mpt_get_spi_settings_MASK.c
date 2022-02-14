
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int uint32_t ;
typedef int tmp ;
typedef size_t target_id_t ;
struct TYPE_9__ {int Capabilities; } ;
struct mpt_softc {scalar_t__ phydisk_sim; int mpt_disc_enable; int mpt_tag_enable; TYPE_3__ mpt_port_page0; TYPE_5__* mpt_dev_page0; } ;
struct ccb_trans_settings_spi {int sync_offset; int sync_period; int flags; int valid; int bus_width; } ;
struct ccb_trans_settings_scsi {int flags; scalar_t__ valid; } ;
struct TYPE_10__ {size_t target_id; scalar_t__ target_lun; int path; } ;
struct TYPE_8__ {struct ccb_trans_settings_spi spi; } ;
struct TYPE_7__ {struct ccb_trans_settings_scsi scsi; } ;
struct ccb_trans_settings {TYPE_4__ ccb_h; TYPE_2__ xport_specific; TYPE_1__ proto_specific; } ;
struct TYPE_11__ {int NegotiatedParameters; int Information; int Header; } ;
typedef TYPE_5__ CONFIG_PAGE_SCSI_DEVICE_0 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (struct ccb_trans_settings*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (struct mpt_softc*,int ,char*,size_t,...) ;
 scalar_t__ FUNC_5 (struct mpt_softc*,union ccb*,size_t*) ;
 int FUNC_6 (struct mpt_softc*,char*,size_t) ;
 int FUNC_7 (struct mpt_softc*,size_t,int *,int,int ,int) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct mpt_softc *VAR_25, struct ccb_trans_settings *VAR_26)
{
 struct ccb_trans_settings_scsi *VAR_27 = &VAR_26->proto_specific.scsi;
 struct ccb_trans_settings_spi *VAR_28 = &VAR_26->xport_specific.spi;
 target_id_t VAR_29;
 uint32_t VAR_30, VAR_31, VAR_32;
 int VAR_33;

 if (FUNC_0(VAR_26) == 0) {
  VAR_29 = VAR_26->ccb_h.target_id;
 } else if (FUNC_8(VAR_26->ccb_h.path) == VAR_25->phydisk_sim) {
  if (FUNC_5(VAR_25, (union ccb *)VAR_26, &VAR_29)) {
   return (-1);
  }
 } else {
  VAR_29 = VAR_26->ccb_h.target_id;
 }
 if (FUNC_0(VAR_26)) {
  CONFIG_PAGE_SCSI_DEVICE_0 VAR_34;
  VAR_30 = 0;

  VAR_34 = VAR_25->mpt_dev_page0[VAR_29];
  VAR_33 = FUNC_7(VAR_25, VAR_29, &VAR_34.Header,
      sizeof(VAR_34), VAR_15, 5000);
  if (VAR_33) {
   FUNC_6(VAR_25, "can't get tgt %d config page 0\n", VAR_29);
   return (VAR_33);
  }
  FUNC_3(&VAR_34);

  FUNC_4(VAR_25, VAR_21,
      "mpt_get_spi_settings[%d]: current NP %x Info %x\n", VAR_29,
      VAR_34.NegotiatedParameters, VAR_34.Information);
  VAR_30 |= (VAR_34.NegotiatedParameters & VAR_20) ?
      VAR_14 : VAR_10;
  VAR_30 |= (VAR_25->mpt_disc_enable & (1 << VAR_29)) ?
      VAR_9 : VAR_8;
  VAR_30 |= (VAR_25->mpt_tag_enable & (1 << VAR_29)) ?
      VAR_13 : VAR_12;
  VAR_32 = VAR_34.NegotiatedParameters;
  VAR_32 &= VAR_16;
  VAR_32 >>= VAR_18;
  VAR_31 = VAR_34.NegotiatedParameters;
  VAR_31 &= VAR_17;
  VAR_31 >>= VAR_19;
  VAR_25->mpt_dev_page0[VAR_29] = VAR_34;
 } else {
  VAR_30 = VAR_14|VAR_9|VAR_13|VAR_11;
  VAR_32 = VAR_25->mpt_port_page0.Capabilities;
  VAR_32 = FUNC_1(VAR_32);
  VAR_31 = VAR_25->mpt_port_page0.Capabilities;
  VAR_31 = FUNC_2(VAR_31);
 }

 VAR_28->valid = 0;
 VAR_27->valid = 0;
 VAR_28->flags = 0;
 VAR_27->flags = 0;
 VAR_28->sync_offset = VAR_32;
 VAR_28->sync_period = VAR_31;
 VAR_28->valid |= VAR_6;
 VAR_28->valid |= VAR_7;
 VAR_28->valid |= VAR_4;
 if (VAR_30 & VAR_14) {
  VAR_28->bus_width = VAR_23;
 } else {
  VAR_28->bus_width = VAR_24;
 }
 if (VAR_26->ccb_h.target_lun != VAR_0) {
  VAR_27->valid = VAR_2;
  if (VAR_30 & VAR_13) {
   VAR_27->flags |= VAR_1;
  }
  VAR_28->valid |= VAR_5;
  if (VAR_30 & VAR_9) {
   VAR_28->flags |= VAR_3;
  }
 }

 FUNC_4(VAR_25, VAR_22,
     "mpt_get_spi_settings[%d]: %s flags 0x%x per 0x%x off=%d\n", VAR_29,
     FUNC_0(VAR_26) ? "ACTIVE" : "NVRAM ", VAR_30, VAR_31, VAR_32);
 return (0);
}
