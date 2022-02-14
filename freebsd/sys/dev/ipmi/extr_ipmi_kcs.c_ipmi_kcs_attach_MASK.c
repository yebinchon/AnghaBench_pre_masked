
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {int ipmi_driver_requests_polled; int ipmi_dev; int ipmi_driver_request; int ipmi_enqueue_request; int ipmi_startup; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipmi_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct ipmi_softc*) ;
 int VAR_6 ;

int
FUNC_4(struct ipmi_softc *VAR_7)
{
 int VAR_8;


 VAR_7->ipmi_startup = VAR_6;
 VAR_7->ipmi_enqueue_request = VAR_4;
 VAR_7->ipmi_driver_request = VAR_5;
 VAR_7->ipmi_driver_requests_polled = 1;


 VAR_8 = FUNC_0(VAR_7, VAR_1);
 if (VAR_8 == 0xff) {
  FUNC_2(VAR_7->ipmi_dev, "couldn't find it\n");
  return (VAR_0);
 }




 if (VAR_8 & VAR_2 ||
     FUNC_1(VAR_8) != VAR_3)
  FUNC_3(VAR_7);

 return (0);
}
