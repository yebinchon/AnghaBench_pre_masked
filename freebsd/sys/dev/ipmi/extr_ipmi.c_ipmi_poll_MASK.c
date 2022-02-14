
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct ipmi_softc {int dummy; } ;
struct ipmi_device {scalar_t__ ipmi_requests; int ipmi_select; int ipmi_completed_requests; } ;
struct cdev {struct ipmi_softc* si_drv1; } ;


 int FUNC_0 (struct ipmi_softc*) ;
 int FUNC_1 (struct ipmi_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (void**) ;
 int FUNC_4 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_3, int VAR_4, struct thread *VAR_5)
{
 struct ipmi_device *VAR_6;
 struct ipmi_softc *VAR_7;
 int VAR_8 = 0;

 if (FUNC_3((void **)&VAR_6))
  return (0);

 VAR_7 = VAR_3->si_drv1;
 FUNC_0(VAR_7);
 if (VAR_4 & (VAR_1 | VAR_2)) {
  if (!FUNC_2(&VAR_6->ipmi_completed_requests))
      VAR_8 |= VAR_4 & (VAR_1 | VAR_2);
  if (VAR_6->ipmi_requests == 0)
      VAR_8 |= VAR_0;
 }

 if (VAR_8 == 0) {
  if (VAR_4 & (VAR_1 | VAR_2))
   FUNC_4(VAR_5, &VAR_6->ipmi_select);
 }
 FUNC_1(VAR_7);

 return (VAR_8);
}
