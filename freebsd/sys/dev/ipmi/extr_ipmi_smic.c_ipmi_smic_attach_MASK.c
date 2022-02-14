
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {int ipmi_driver_requests_polled; int ipmi_dev; int ipmi_driver_request; int ipmi_enqueue_request; int ipmi_startup; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipmi_softc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_2(struct ipmi_softc *VAR_5)
{
 int VAR_6;


 VAR_5->ipmi_startup = VAR_4;
 VAR_5->ipmi_enqueue_request = VAR_2;
 VAR_5->ipmi_driver_request = VAR_3;
 VAR_5->ipmi_driver_requests_polled = 1;


 VAR_6 = FUNC_0(VAR_5, VAR_1);
 if (VAR_6 == 0xff) {
  FUNC_1(VAR_5->ipmi_dev, "couldn't find it\n");
  return (VAR_0);
 }





 return (0);
}
