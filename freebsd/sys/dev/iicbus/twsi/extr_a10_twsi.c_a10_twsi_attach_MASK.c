
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twsi_softc {int need_ack; int reg_soft_reset; int reg_baud_rate; int reg_status; int reg_control; int reg_slave_ext_addr; int reg_slave_addr; int reg_data; int clk_core; } ;
typedef int hwreset_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 struct twsi_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_7)
{
 struct twsi_softc *VAR_8;
 hwreset_t VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(VAR_7);


 if (FUNC_5(VAR_7, 0, 0, &VAR_9) == 0) {
  VAR_10 = FUNC_4(VAR_9);
  if (VAR_10 != 0) {
   FUNC_3(VAR_7, "could not de-assert reset\n");
   return (VAR_10);
  }
 }


 VAR_10 = FUNC_1(VAR_7, 0, 0, &VAR_8->clk_core);
 if (VAR_10 != 0) {
  FUNC_3(VAR_7, "could not find clock\n");
  return (VAR_10);
 }
 VAR_10 = FUNC_0(VAR_8->clk_core);
 if (VAR_10 != 0) {
  FUNC_3(VAR_7, "could not enable clock\n");
  return (VAR_10);
 }

 VAR_8->reg_data = VAR_3;
 VAR_8->reg_slave_addr = VAR_0;
 VAR_8->reg_slave_ext_addr = VAR_6;
 VAR_8->reg_control = VAR_2;
 VAR_8->reg_status = VAR_5;
 VAR_8->reg_baud_rate = VAR_1;
 VAR_8->reg_soft_reset = VAR_4;

 VAR_8->need_ack = 1;
 return (FUNC_6(VAR_7));
}
