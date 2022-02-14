
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct usb_hw_ep_profile {int max_in_frame_size; int max_out_frame_size; } ;
struct TYPE_2__ {int bdev; } ;
struct avr32dci_softc {TYPE_1__ sc_bus; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct avr32dci_softc*,int ) ;
 int FUNC_9 (struct avr32dci_softc*,int ,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_10 (int *,struct usb_hw_ep_profile const**,scalar_t__) ;
 int FUNC_11 (int ,char*) ;

__attribute__((used)) static void
FUNC_12(struct avr32dci_softc *VAR_13, uint8_t VAR_14,
    uint8_t VAR_15, uint8_t VAR_16)
{
 const struct usb_hw_ep_profile *VAR_17;
 uint32_t VAR_18;
 uint32_t VAR_19;
 uint8_t VAR_20;

 if (VAR_15 == VAR_10) {

  return;
 }

 FUNC_9(VAR_13, VAR_6, FUNC_6(VAR_14));


 FUNC_9(VAR_13, FUNC_7(VAR_14), VAR_7);


 FUNC_9(VAR_13, FUNC_4(VAR_14), VAR_8);


 FUNC_9(VAR_13, FUNC_4(VAR_14), VAR_7);

 if (VAR_15 == VAR_9) {
  VAR_18 = VAR_2;
 } else if (VAR_15 == VAR_12) {
  VAR_18 = VAR_3;
 } else {
  VAR_18 = VAR_4 |
      FUNC_3(1);
 }
 if (VAR_16 & VAR_11) {
  VAR_18 |= VAR_0;
 }
 FUNC_10(((void*)0), &VAR_17, VAR_14);


 VAR_19 = VAR_17->max_in_frame_size | VAR_17->max_out_frame_size;
 VAR_20 = 0;
 while ((VAR_19 /= 2))
  VAR_20++;
 VAR_18 |= FUNC_1(VAR_20);


 if (VAR_14 < 1)
  VAR_18 |= FUNC_2(1);
 else if (VAR_14 < 3)
  VAR_18 |= FUNC_2(2);
 else
  VAR_18 |= FUNC_2(3);

 FUNC_9(VAR_13, FUNC_0(VAR_14), VAR_18);

 VAR_18 = FUNC_8(VAR_13, FUNC_0(VAR_14));

 if (!(VAR_18 & VAR_1)) {
  FUNC_11(VAR_13->sc_bus.bdev, "Chip rejected configuration\n");
 } else {
  FUNC_9(VAR_13, FUNC_5(VAR_14),
      VAR_5);
 }
}
