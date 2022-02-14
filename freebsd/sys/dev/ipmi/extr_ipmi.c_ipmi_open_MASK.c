
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct ipmi_softc {int ipmi_opened; } ;
struct ipmi_device {struct ipmi_softc* ipmi_softc; int ipmi_lun; int ipmi_address; int ipmi_completed_requests; } ;
struct cdev {struct ipmi_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipmi_softc*) ;
 int FUNC_1 (struct ipmi_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ipmi_device*,int ) ;
 int FUNC_4 (struct ipmi_device*,int ) ;
 int VAR_6 ;
 struct ipmi_device* FUNC_5 (int,int ,int) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_8, int VAR_9, int VAR_10, struct thread *VAR_11)
{
 struct ipmi_device *VAR_12;
 struct ipmi_softc *VAR_13;
 int VAR_14;

 if (!VAR_7)
  return (VAR_0);


 VAR_12 = FUNC_5(sizeof(struct ipmi_device), VAR_3, VAR_4 | VAR_5);
 VAR_14 = FUNC_3(VAR_12, VAR_6);
 if (VAR_14) {
  FUNC_4(VAR_12, VAR_3);
  return (VAR_14);
 }

 VAR_13 = VAR_8->si_drv1;
 FUNC_2(&VAR_12->ipmi_completed_requests);
 VAR_12->ipmi_address = VAR_1;
 VAR_12->ipmi_lun = VAR_2;
 VAR_12->ipmi_softc = VAR_13;
 FUNC_0(VAR_13);
 VAR_13->ipmi_opened++;
 FUNC_1(VAR_13);

 return (0);
}
