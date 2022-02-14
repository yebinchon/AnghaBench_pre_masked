
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_char ;
struct imcsmb_softc {TYPE_1__* regs; int imcsmb_pci; int dev; } ;
typedef int device_t ;
struct TYPE_2__ {int smb_cntl; int smb_stat; int smb_cmd; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 struct imcsmb_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int VAR_14 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_15, u_char VAR_16, char VAR_17, void *VAR_18, int VAR_19,
    int VAR_20)
{
 struct imcsmb_softc *VAR_21;
 int VAR_22;
 int VAR_23;
 uint32_t VAR_24;
 uint32_t VAR_25;
 uint32_t VAR_26;
 uint32_t VAR_27;
 uint16_t *VAR_28;
 uint16_t VAR_29;
 uint8_t *VAR_30;
 uint8_t VAR_31;

 VAR_21 = FUNC_1(VAR_15);
 VAR_30 = VAR_18;
 VAR_28 = VAR_18;
 VAR_31 = *VAR_30;
 VAR_29 = *VAR_28;




 VAR_26 = FUNC_5(VAR_21->imcsmb_pci,
     VAR_21->regs->smb_cntl, 4);
 VAR_25 = VAR_26;
 VAR_25 &= ~VAR_4;
 VAR_25 |= ((uint32_t) VAR_16 & 0xf0) << 24;


 VAR_25 |= VAR_3;




 VAR_25 &= ~VAR_6;


 VAR_25 &= ~VAR_5;
 VAR_24 = VAR_0;


 if (VAR_19) {
  VAR_24 |= VAR_1;
 }


 if (VAR_20) {
  VAR_24 |= VAR_2;
 }


 VAR_24 |= (uint32_t) ((VAR_16 & 0xe) << 23);




 VAR_24 |= (uint32_t) ((uint8_t) VAR_17 << 16);


 if (VAR_20) {
  if (VAR_19) {
   VAR_29 = FUNC_3(VAR_29);
  } else {



   VAR_29 = (uint16_t) (VAR_31 & 0xff);
  }
  VAR_24 |= VAR_29;
 }




 FUNC_6(VAR_21->imcsmb_pci, VAR_21->regs->smb_cntl, VAR_25, 4);






 for (VAR_22 = 4; VAR_22 != 0; VAR_22--) {
  VAR_27 = FUNC_5(VAR_21->imcsmb_pci, VAR_21->regs->smb_stat,
      4);
  if ((VAR_27 & VAR_7) == 0) {
   break;
  }
  FUNC_4("imcsmb", 10 * VAR_14 / 1000);
 }

 if (VAR_22 == 0) {
  FUNC_2(VAR_21->dev,
      "transfer: timeout waiting for device to settle\n");
 }




 FUNC_6(VAR_21->imcsmb_pci, VAR_21->regs->smb_cmd, VAR_24, 4);




 for (VAR_22 = 35000; VAR_22 != 0; VAR_22 -= 10)
 {
  FUNC_0(10);
  VAR_27 = FUNC_5(VAR_21->imcsmb_pci, VAR_21->regs->smb_stat,
      4);
  if (VAR_20) {
   if ((VAR_27 & VAR_10) != 0) {
    break;
   }
  } else {
   if ((VAR_27 & VAR_9) != 0) {
    break;
   }
  }
 }
 if (VAR_22 == 0) {
  VAR_23 = VAR_13;
  FUNC_2(VAR_15, "transfer timeout\n");
  goto out;
 }





 if ((VAR_27 & VAR_8) != 0) {




  if ((VAR_16 & 0xf0) != 0x60) {
   VAR_23 = VAR_11;
   goto out;
  }
 }


 if (VAR_20 == 0) {
  if (VAR_19) {



   VAR_29 = (uint16_t) (VAR_27 & 0xffff);
   VAR_29 = FUNC_3(VAR_29);
   *VAR_28 = VAR_29;
  } else {

   VAR_31 = (uint8_t) (VAR_27 & 0xff);
   *VAR_30 = VAR_31;
  }
 }


 VAR_23 = VAR_12;

out:

 FUNC_6(VAR_21->imcsmb_pci, VAR_21->regs->smb_cntl, VAR_26, 4);
 return (VAR_23);
}
