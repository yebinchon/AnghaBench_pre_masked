
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snps_dwc3_softc {scalar_t__ usb3_phy; scalar_t__ usb2_phy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct snps_dwc3_softc*,int ) ;
 int FUNC_2 (struct snps_dwc3_softc*,int ,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct snps_dwc3_softc *VAR_6)
{
 uint32_t VAR_7, VAR_8, VAR_9;

 if (VAR_6->usb2_phy)
  FUNC_3(VAR_6->usb2_phy);
 if (VAR_6->usb3_phy)
  FUNC_3(VAR_6->usb3_phy);

 VAR_7 = FUNC_1(VAR_6, VAR_0);
 VAR_7 |= VAR_1;
 FUNC_2(VAR_6, VAR_0, VAR_7);

 VAR_8 = FUNC_1(VAR_6, VAR_2);
 VAR_8 |= VAR_3;
 FUNC_2(VAR_6, VAR_2, VAR_8);

 VAR_9 = FUNC_1(VAR_6, VAR_4);
 VAR_9 |= VAR_5;
 FUNC_2(VAR_6, VAR_4, VAR_9);

 FUNC_0(1000);

 VAR_8 &= ~VAR_3;
 FUNC_2(VAR_6, VAR_2, VAR_8);

 VAR_9 &= ~VAR_5;
 FUNC_2(VAR_6, VAR_4, VAR_9);

 VAR_7 &= ~VAR_1;
 FUNC_2(VAR_6, VAR_0, VAR_7);

}
