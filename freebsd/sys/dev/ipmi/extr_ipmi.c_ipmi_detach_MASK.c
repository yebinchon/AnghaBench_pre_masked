
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {int ipmi_detaching; int ipmi_requests_lock; int ipmi_io_lock; scalar_t__ ipmi_irq; int ipmi_irq_res; scalar_t__ ipmi_kthread; int ipmi_request_added; scalar_t__ ipmi_power_cycle_tag; scalar_t__ ipmi_watchdog_tag; scalar_t__ ipmi_shutdown_tag; scalar_t__ ipmi_cdev; scalar_t__ ipmi_opened; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct ipmi_softc*) ;
 int FUNC_2 (struct ipmi_softc*) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 struct ipmi_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ipmi_softc*,int ) ;
 int FUNC_9 (scalar_t__,int *,int ,char*,int ) ;
 int FUNC_10 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_11(device_t VAR_4)
{
 struct ipmi_softc *VAR_5;

 VAR_5 = FUNC_6(VAR_4);


 FUNC_1(VAR_5);
 if (VAR_5->ipmi_opened) {
  FUNC_2(VAR_5);
  return (VAR_0);
 }
 FUNC_2(VAR_5);
 if (VAR_5->ipmi_cdev)
  FUNC_5(VAR_5->ipmi_cdev);


 if (VAR_5->ipmi_shutdown_tag)
  FUNC_0(VAR_2,
  VAR_5->ipmi_shutdown_tag);
 if (VAR_5->ipmi_watchdog_tag) {
  FUNC_0(VAR_3, VAR_5->ipmi_watchdog_tag);
  FUNC_8(VAR_5, 0);
 }


 if (VAR_5->ipmi_power_cycle_tag)
  FUNC_0(VAR_1, VAR_5->ipmi_power_cycle_tag);



 FUNC_1(VAR_5);
 VAR_5->ipmi_detaching = 1;
 if (VAR_5->ipmi_kthread) {
  FUNC_4(&VAR_5->ipmi_request_added);
  FUNC_9(VAR_5->ipmi_kthread, &VAR_5->ipmi_requests_lock, 0,
      "ipmi_wait", 0);
 }
 FUNC_2(VAR_5);
 if (VAR_5->ipmi_irq)
  FUNC_3(VAR_4, VAR_5->ipmi_irq_res, VAR_5->ipmi_irq);

 FUNC_7(VAR_4);
 FUNC_10(&VAR_5->ipmi_io_lock);
 FUNC_10(&VAR_5->ipmi_requests_lock);
 return (0);
}
