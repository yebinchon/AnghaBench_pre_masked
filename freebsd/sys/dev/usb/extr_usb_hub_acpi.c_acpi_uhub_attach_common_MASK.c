
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_hub {int nports; } ;
struct TYPE_4__ {TYPE_1__* sc_udev; } ;
struct acpi_uhub_softc {int nports; int ah; int port; TYPE_2__ usc; } ;
struct acpi_uhub_port {int dummy; } ;
typedef int device_t ;
struct TYPE_3__ {struct usb_hub* hub; } ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 struct acpi_uhub_softc* FUNC_2 (int ) ;
 int FUNC_3 (int,int ,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4)
{
 struct usb_hub *VAR_5;
 struct acpi_uhub_softc *VAR_6 = FUNC_2(VAR_4);
 ACPI_STATUS VAR_7;
 int VAR_8 = VAR_0;

 VAR_5 = VAR_6->usc.sc_udev->hub;
 VAR_6->nports = VAR_5->nports;
 VAR_6->port = FUNC_3(sizeof(struct acpi_uhub_port) * VAR_5->nports,
     VAR_1, VAR_2 | VAR_3);
 VAR_7 = FUNC_1(VAR_4, VAR_6->ah);

 if (FUNC_0(VAR_7)){
  VAR_8 = 0;
 }

 return (VAR_8);
}
