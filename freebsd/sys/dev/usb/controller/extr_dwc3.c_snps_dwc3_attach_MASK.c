
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snps_dwc3_softc {int usb3_phy; int node; int usb2_phy; int * mem_res; int bsh; int bst; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct snps_dwc3_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_1 (int ,int ,int*,int ) ;
 struct snps_dwc3_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,int ,char*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct snps_dwc3_softc*) ;
 int FUNC_9 (struct snps_dwc3_softc*) ;
 int FUNC_10 (struct snps_dwc3_softc*) ;
 int FUNC_11 (struct snps_dwc3_softc*) ;
 int FUNC_12 (struct snps_dwc3_softc*) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_5)
{
 struct snps_dwc3_softc *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_2(VAR_5);
 VAR_6->dev = VAR_5;

 VAR_6->mem_res = FUNC_1(VAR_5, VAR_3, &VAR_7,
     VAR_2);
 if (VAR_6->mem_res == ((void*)0)) {
  FUNC_3(VAR_5, "Failed to map memory\n");
  return (VAR_1);
 }
 VAR_6->bst = FUNC_6(VAR_6->mem_res);
 VAR_6->bsh = FUNC_5(VAR_6->mem_res);

 if (VAR_4)
  FUNC_3(VAR_5, "snps id: %x\n", FUNC_0(VAR_6, VAR_0));


 FUNC_4(VAR_5, VAR_6->node, "usb2-phy", &VAR_6->usb2_phy);
 FUNC_4(VAR_5, VAR_6->node, "usb3-phy", &VAR_6->usb3_phy);

 FUNC_11(VAR_6);
 FUNC_8(VAR_6);
 FUNC_9(VAR_6);
 FUNC_10(VAR_6);



 FUNC_7(VAR_5);

 return (0);
}
