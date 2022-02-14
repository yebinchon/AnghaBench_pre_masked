
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hub_result {int portno; } ;
struct TYPE_5__ {TYPE_3__* sc_udev; } ;
struct acpi_uhub_softc {int nports; TYPE_1__* port; TYPE_2__ usc; } ;
typedef int device_t ;
struct TYPE_6__ {int hub; } ;
struct TYPE_4__ {scalar_t__ handle; } ;
typedef scalar_t__ ACPI_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct acpi_uhub_softc* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,struct hub_result*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3, device_t VAR_4, int VAR_5, uintptr_t *VAR_6)
{
 struct hub_result VAR_7;
 struct acpi_uhub_softc *VAR_8 = FUNC_0(VAR_3);
 ACPI_HANDLE VAR_9;

 FUNC_1(&VAR_2);
 FUNC_3(VAR_8->usc.sc_udev->hub, VAR_4, &VAR_7);
 FUNC_2(&VAR_2);

 if ((VAR_5 == VAR_0) &&
     (VAR_7.portno > 0) &&
     (VAR_7.portno <= VAR_8->nports) &&
     (VAR_9 = VAR_8->port[VAR_7.portno - 1].handle)) {
  *VAR_6 = (uintptr_t)VAR_9;
  return (0);
 }
 return (VAR_1);
}
