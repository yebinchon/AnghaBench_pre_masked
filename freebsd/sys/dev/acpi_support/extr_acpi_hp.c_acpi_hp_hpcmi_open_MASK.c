
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct cdev {struct acpi_hp_softc* si_drv1; } ;
struct acpi_hp_softc {scalar_t__ hpcmi_open_pid; scalar_t__ hpcmi_bufptr; int hpcmi_sbuf; } ;
struct TYPE_2__ {scalar_t__ p_pid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int *,int *,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct cdev* VAR_5, int VAR_6, int VAR_7, struct thread *VAR_8)
{
 struct acpi_hp_softc *VAR_9;
 int VAR_10;

 if (VAR_5 == ((void*)0) || VAR_5->si_drv1 == ((void*)0))
  return (VAR_0);
 VAR_9 = VAR_5->si_drv1;

 FUNC_0(VAR_4);
 if (VAR_9->hpcmi_open_pid != 0) {
  VAR_10 = VAR_1;
 }
 else {
  if (FUNC_2(&VAR_9->hpcmi_sbuf, ((void*)0), 4096, VAR_3)
      == ((void*)0)) {
   VAR_10 = VAR_2;
  } else {
   VAR_9->hpcmi_open_pid = VAR_8->td_proc->p_pid;
   VAR_9->hpcmi_bufptr = 0;
   VAR_10 = 0;
  }
 }
 FUNC_1(VAR_4);

 return (VAR_10);
}
