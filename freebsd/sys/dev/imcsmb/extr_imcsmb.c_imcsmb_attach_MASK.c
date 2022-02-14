
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imcsmb_softc {int * smbus; int regs; int imcsmb_pci; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct imcsmb_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 struct imcsmb_softc *VAR_2;
 int VAR_3;


 VAR_2 = FUNC_4(VAR_1);
 VAR_2->dev = VAR_1;
 VAR_2->imcsmb_pci = FUNC_3(VAR_1);
 VAR_2->regs = FUNC_2(VAR_1);


 VAR_2->smbus = FUNC_1(VAR_1, "smbus", -1);
 if (VAR_2->smbus == ((void*)0)) {

  FUNC_5(VAR_1, "Child smbus not added\n");
  VAR_3 = VAR_0;
  goto out;
 }


 if ((VAR_3 = FUNC_0(VAR_1)) != 0) {
  FUNC_5(VAR_1, "Failed to attach smbus: %d\n", VAR_3);
 }

out:
 return (VAR_3);
}
