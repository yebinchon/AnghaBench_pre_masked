
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct uart_class {int dummy; } ;
struct TYPE_3__ {struct uart_class* sc_class; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct tegra_softc {int clk; int reset; TYPE_2__ ns8250_base; } ;
struct ofw_compat_data {scalar_t__ ocd_data; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,scalar_t__*) ;
 int VAR_1 ;
 struct tegra_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,char*,int *) ;
 int FUNC_7 (int ) ;
 struct ofw_compat_data* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int,int ,int,int ,int ,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_2)
{
 struct tegra_softc *VAR_3;
 phandle_t VAR_4;
 uint64_t VAR_5;
 int VAR_6;
 int VAR_7;
 const struct ofw_compat_data *VAR_8;

 VAR_3 = FUNC_3(VAR_2);
 if (!FUNC_9(VAR_2))
  return (VAR_0);
 VAR_8 = FUNC_8(VAR_2, VAR_1);
 if (VAR_8->ocd_data == 0)
  return (VAR_0);
 VAR_3->ns8250_base.base.sc_class = (struct uart_class *)VAR_8->ocd_data;

 VAR_7 = FUNC_6(VAR_2, 0, "serial", &VAR_3->reset);
 if (VAR_7 != 0) {
  FUNC_4(VAR_2, "Cannot get 'serial' reset\n");
  return (VAR_0);
 }
 VAR_7 = FUNC_5(VAR_3->reset);
 if (VAR_7 != 0) {
  FUNC_4(VAR_2, "Cannot unreset 'serial' reset\n");
  return (VAR_0);
 }

 VAR_4 = FUNC_7(VAR_2);
 VAR_6 = FUNC_11(VAR_4);
 VAR_7 = FUNC_1(VAR_2, 0, 0, &VAR_3->clk);
 if (VAR_7 != 0) {
  FUNC_4(VAR_2, "Cannot get UART clock: %d\n", VAR_7);
  return (VAR_0);
 }
 VAR_7 = FUNC_0(VAR_3->clk);
 if (VAR_7 != 0) {
  FUNC_4(VAR_2, "Cannot enable UART clock: %d\n", VAR_7);
  return (VAR_0);
 }
 VAR_7 = FUNC_2(VAR_3->clk, &VAR_5);
 if (VAR_7 != 0) {
  FUNC_4(VAR_2, "Cannot enable UART clock: %d\n", VAR_7);
  return (VAR_0);
 }
 return (FUNC_10(VAR_2, VAR_6, 0, (int)VAR_5, 0, 0, 0));
}
