
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct elink_phy {int type; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef scalar_t__ (* read_sfp_module_eeprom_func_p ) (struct elink_phy*,struct elink_params*,int,scalar_t__,int,int*,int ) ;
typedef scalar_t__ elink_status_t ;


 int FUNC_0 (struct bxe_softc*,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;




 scalar_t__ FUNC_1 (struct elink_phy*,struct elink_params*,int,scalar_t__,int,int*,int ) ;
 scalar_t__ FUNC_2 (struct elink_phy*,struct elink_params*,int,scalar_t__,int,int*,int ) ;
 scalar_t__ FUNC_3 (struct elink_phy*,struct elink_params*,int,scalar_t__,int,int*,int ) ;

elink_status_t FUNC_4(struct elink_phy *VAR_3,
     struct elink_params *VAR_4, uint8_t VAR_5,
     uint16_t VAR_6, uint16_t VAR_7, uint8_t *VAR_8)
{
 elink_status_t VAR_9 = 0;
 struct bxe_softc *VAR_10 = VAR_4->sc;
 uint8_t VAR_11;
 uint8_t *VAR_12 = VAR_8;
 read_sfp_module_eeprom_func_p VAR_13;
 if ((VAR_5 != 0xa0) && (VAR_5 != 0xa2)) {
  FUNC_0(VAR_10, "invalid dev_addr 0x%x\n", VAR_5);
  return VAR_2;
 }

 switch (VAR_3->type) {
 case 130:
  VAR_13 = FUNC_1;
  break;
 case 129:
 case 131:
  VAR_13 = FUNC_2;
  break;
 case 128:
  VAR_13 = FUNC_3;
  break;
 default:
  return VAR_0;
 }

 while (!VAR_9 && (VAR_7 > 0)) {
  VAR_11 = (VAR_7 > VAR_1) ?
   VAR_1 : VAR_7;
  VAR_9 = VAR_13(VAR_3, VAR_4, VAR_5, VAR_6, VAR_11,
          VAR_12, 0);
  VAR_7 -= VAR_11;
  VAR_12 += VAR_11;
  VAR_6 += VAR_11;
 }
 return VAR_9;
}
