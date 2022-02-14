
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct link_config {int advertising; int link_ok; scalar_t__ speed; unsigned char fc; unsigned char fec; int fec_hint; void* supported; int link_down_rc; void* lp_advertising; } ;
struct port_info {int port_type; int mod_type; int mdio_addr; int adapter; struct link_config link_cfg; } ;
struct TYPE_5__ {int linkattr32; int lpacaps32; int acaps32; int pcaps32; int lstatus32_to_cbllen32; } ;
struct TYPE_4__ {int lpacap; int acap; int pcap; int lstatus_to_modtype; } ;
struct TYPE_6__ {TYPE_2__ info32; TYPE_1__ info; } ;
struct fw_port_cmd {TYPE_3__ u; } ;
typedef enum fw_port_action { ____Placeholder_fw_port_action } fw_port_action ;


 int FUNC_0 (int ,char*,int) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
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
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 void* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int) ;
 void* FUNC_13 (int ) ;
 int FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(struct port_info *VAR_17, const struct fw_port_cmd *VAR_18,
    enum fw_port_action VAR_19, bool *VAR_20, bool *VAR_21)
{
 struct link_config VAR_22, *VAR_23 = &VAR_17->link_cfg;
 unsigned char VAR_24, VAR_25;
 u32 VAR_26, VAR_27;
 int VAR_28, VAR_29;

 VAR_28 = VAR_17->port_type;
 VAR_29 = VAR_17->mod_type;
 VAR_22 = *VAR_23;
 if (VAR_19 == VAR_3) {
  VAR_26 = FUNC_11(VAR_18->u.info.lstatus_to_modtype);

  VAR_17->port_type = FUNC_8(VAR_26);
  VAR_17->mod_type = FUNC_5(VAR_26);
  VAR_17->mdio_addr = VAR_26 & VAR_12 ?
      FUNC_3(VAR_26) : -1;

  VAR_23->supported = FUNC_13(FUNC_10(VAR_18->u.info.pcap));
  VAR_23->advertising = FUNC_13(FUNC_10(VAR_18->u.info.acap));
  VAR_23->lp_advertising = FUNC_13(FUNC_10(VAR_18->u.info.lpacap));
  VAR_23->link_ok = (VAR_26 & VAR_10) != 0;
  VAR_23->link_down_rc = FUNC_1(VAR_26);

  VAR_27 = FUNC_14(VAR_26);
 } else if (VAR_19 == VAR_4) {
  VAR_26 = FUNC_11(VAR_18->u.info32.lstatus32_to_cbllen32);

  VAR_17->port_type = FUNC_7(VAR_26);
  VAR_17->mod_type = FUNC_6(VAR_26);
  VAR_17->mdio_addr = VAR_26 & VAR_13 ?
      FUNC_4(VAR_26) : -1;

  VAR_23->supported = FUNC_11(VAR_18->u.info32.pcaps32);
  VAR_23->advertising = FUNC_11(VAR_18->u.info32.acaps32);
  VAR_23->lp_advertising = FUNC_11(VAR_18->u.info32.lpacaps32);
  VAR_23->link_ok = (VAR_26 & VAR_11) != 0;
  VAR_23->link_down_rc = FUNC_2(VAR_26);

  VAR_27 = FUNC_11(VAR_18->u.info32.linkattr32);
 } else {
  FUNC_0(VAR_17->adapter, "bad port_info action 0x%x\n", VAR_19);
  return;
 }

 VAR_23->speed = FUNC_12(VAR_27);

 VAR_24 = 0;
 if (VAR_27 & VAR_5)
  VAR_24 |= VAR_15;
 if (VAR_27 & VAR_6)
  VAR_24 |= VAR_16;
 VAR_23->fc = VAR_24;

 VAR_25 = VAR_1;
 if (VAR_27 & VAR_8)
  VAR_25 |= VAR_2;
 if (VAR_27 & VAR_7)
  VAR_25 |= VAR_0;
 VAR_23->fec = VAR_25;

 if (VAR_20 != ((void*)0))
  *VAR_20 = 0;
 if (VAR_21 != ((void*)0))
  *VAR_21 = 0;
 if (VAR_28 != VAR_17->port_type || VAR_29 != VAR_17->mod_type ||
     VAR_22.supported != VAR_23->supported) {
  if (VAR_17->mod_type != VAR_9) {
   VAR_23->fec_hint = VAR_23->advertising &
       FUNC_9(VAR_14);
  }
  if (VAR_20 != ((void*)0))
   *VAR_20 = 1;
 }
 if (VAR_22.link_ok != VAR_23->link_ok || VAR_22.speed != VAR_23->speed ||
     VAR_22.fec != VAR_23->fec || VAR_22.fc != VAR_23->fc) {
  if (VAR_21 != ((void*)0))
   *VAR_21 = 1;
 }
}
