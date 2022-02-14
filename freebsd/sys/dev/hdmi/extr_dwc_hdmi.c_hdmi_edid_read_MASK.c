
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct iic_msg {int member_0; int member_2; int* member_3; int member_1; } ;
struct dwc_hdmi_softc {int* sc_edid; scalar_t__ sc_edid_len; int sc_dev; int * (* sc_get_i2c_dev ) (int ) ;} ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,struct iic_msg*,int) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct dwc_hdmi_softc *VAR_8, int VAR_9, uint8_t **VAR_10,
    uint32_t *VAR_11)
{
 device_t VAR_12;
 int VAR_13;
 uint8_t VAR_14 = VAR_9 & 1 ? VAR_0 : 0;
 uint8_t VAR_15 = VAR_9 >> 1;
 struct iic_msg VAR_16[] = {
  { VAR_3, VAR_6, 1, VAR_15 },
  { VAR_2, VAR_6, 1, VAR_14 },
  { VAR_2, VAR_5, &VAR_0, *VAR_8->sc_edid }
 };

 *VAR_10 = ((void*)0);
 *VAR_11 = 0;
 VAR_12 = ((void*)0);

 if (VAR_8->sc_get_i2c_dev != ((void*)0))
  VAR_12 = VAR_8->sc_get_i2c_dev(VAR_8->sc_dev);
 if (!VAR_12) {
  FUNC_1(VAR_8->sc_dev, "no DDC device found\n");
  return (VAR_1);
 }

 if (VAR_7)
  FUNC_1(VAR_8->sc_dev,
      "reading EDID from %s, block %d, addr %02x\n",
      FUNC_0(VAR_12), VAR_9, VAR_2/2);

 VAR_13 = FUNC_3(VAR_12, VAR_8->sc_dev, VAR_4);

 if (VAR_13) {
  FUNC_1(VAR_8->sc_dev, "failed to request i2c bus: %d\n", VAR_13);
  return (VAR_13);
 }

 VAR_13 = FUNC_4(VAR_12, VAR_16, 3);
 FUNC_2(VAR_12, VAR_8->sc_dev);

 if (VAR_13) {
  FUNC_1(VAR_8->sc_dev, "i2c transfer failed: %d\n", VAR_13);
  return (VAR_13);
 } else {
  *VAR_11 = VAR_8->sc_edid_len;
  *VAR_10 = VAR_8->sc_edid;
 }

 return (VAR_13);
}
