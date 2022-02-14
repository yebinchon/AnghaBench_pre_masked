
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct uart_class {int dummy; } ;
struct ofw_compat_data {scalar_t__ ocd_data; } ;
struct TYPE_3__ {struct uart_class* sc_class; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct jz4780_uart_softc {TYPE_2__ ns8250_base; int clk_baud; int clk_mod; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,int *) ;
 int FUNC_2 (int ,int*) ;
 int VAR_2 ;
 struct jz4780_uart_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;
 struct ofw_compat_data* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int ,int,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3)
{
 struct jz4780_uart_softc *VAR_4;
 uint64_t VAR_5;
 int VAR_6;
 int VAR_7;
 const struct ofw_compat_data *VAR_8;

 VAR_4 = FUNC_3(VAR_3);
 if (!FUNC_7(VAR_3))
  return (VAR_0);
 VAR_8 = FUNC_6(VAR_3, VAR_2);
 if (VAR_8->ocd_data == 0)
  return (VAR_0);


 VAR_7 = FUNC_1(VAR_3, 0, "module", &VAR_4->clk_mod);
 if (VAR_7 != 0) {
  FUNC_4(VAR_3, "Cannot get UART clock: %d\n", VAR_7);
  return (VAR_0);
 }
 VAR_7 = FUNC_0(VAR_4->clk_mod);
 if (VAR_7 != 0) {
  FUNC_4(VAR_3, "Cannot enable UART clock: %d\n", VAR_7);
  return (VAR_0);
 }
 VAR_7 = FUNC_1(VAR_3, 0, "baud", &VAR_4->clk_baud);
 if (VAR_7 != 0) {
  FUNC_4(VAR_3, "Cannot get UART clock: %d\n", VAR_7);
  return (VAR_0);
 }
 VAR_7 = FUNC_0(VAR_4->clk_baud);
 if (VAR_7 != 0) {
  FUNC_4(VAR_3, "Cannot enable UART clock: %d\n", VAR_7);
  return (VAR_0);
 }
 VAR_7 = FUNC_2(VAR_4->clk_baud, &VAR_5);
 if (VAR_7 != 0) {
  FUNC_4(VAR_3, "Cannot determine UART clock frequency: %d\n", VAR_7);
  return (VAR_0);
 }

 if (VAR_1)
  FUNC_4(VAR_3, "got UART clock: %lld\n", VAR_5);
 VAR_4->ns8250_base.base.sc_class = (struct uart_class *)VAR_8->ocd_data;
 VAR_6 = FUNC_5(VAR_3);
 return (FUNC_8(VAR_3, VAR_6, 0, (int)VAR_5, 0, 0, 0));
}
