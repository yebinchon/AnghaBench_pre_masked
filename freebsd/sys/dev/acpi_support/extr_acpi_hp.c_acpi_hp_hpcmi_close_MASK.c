
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cdev {struct acpi_hp_softc* si_drv1; } ;
struct acpi_hp_softc {scalar_t__ hpcmi_open_pid; int hpcmi_bufptr; int hpcmi_sbuf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct cdev* VAR_2, int VAR_3, int VAR_4, struct thread *VAR_5)
{
 struct acpi_hp_softc *VAR_6;
 int VAR_7;

 if (VAR_2 == ((void*)0) || VAR_2->si_drv1 == ((void*)0))
  return (VAR_0);
 VAR_6 = VAR_2->si_drv1;

 FUNC_0(VAR_1);
 if (VAR_6->hpcmi_open_pid == 0) {
  VAR_7 = VAR_0;
 }
 else {
  if (VAR_6->hpcmi_bufptr != -1) {
   FUNC_2(&VAR_6->hpcmi_sbuf);
   VAR_6->hpcmi_bufptr = -1;
  }
  VAR_6->hpcmi_open_pid = 0;
  VAR_7 = 0;
 }
 FUNC_1(VAR_1);

 return (VAR_7);
}
