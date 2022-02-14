
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4780_ohci_softc {int clk; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int,int ) ;
 struct jz4780_ohci_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0)
{
 struct jz4780_ohci_softc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_3(VAR_0);

 VAR_2 = FUNC_1(VAR_0, 0, 0, &VAR_1->clk);
 if (VAR_2 != 0) {
  FUNC_4(VAR_0, "unable to lookup device clock\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_0(VAR_1->clk);
 if (VAR_2 != 0) {
  FUNC_4(VAR_0, "unable to enable device clock\n");
  return (VAR_2);
 }
 VAR_2 = FUNC_2(VAR_1->clk, 48000000, 0);
 if (VAR_2 != 0) {
  FUNC_4(VAR_0, "unable to set device clock to 48 kHZ\n");
  return (VAR_2);
 }
 return (0);
}
