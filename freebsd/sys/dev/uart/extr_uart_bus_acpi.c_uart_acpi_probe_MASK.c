
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int sc_class; } ;
struct acpi_uart_compat_data {int cd_quirks; int cd_rclk; int cd_regiowidth; int cd_regshft; int * cd_desc; int cd_class; } ;
typedef int device_t ;


 int VAR_0 ;
 struct uart_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 struct acpi_uart_compat_data* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct uart_softc *VAR_2;
 struct acpi_uart_compat_data *VAR_3;

 VAR_2 = FUNC_0(VAR_1);

 if ((VAR_3 = FUNC_2(VAR_1)) != ((void*)0)) {
  VAR_2->sc_class = VAR_3->cd_class;
  if (VAR_3->cd_desc != ((void*)0))
   FUNC_1(VAR_1, VAR_3->cd_desc);
  return (FUNC_3(VAR_1, VAR_3->cd_regshft, VAR_3->cd_regiowidth,
      VAR_3->cd_rclk, 0, 0, VAR_3->cd_quirks));
 }
 return (VAR_0);
}
