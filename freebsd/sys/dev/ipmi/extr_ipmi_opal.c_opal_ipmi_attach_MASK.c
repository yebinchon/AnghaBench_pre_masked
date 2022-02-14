
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ipmi_driver_requests_polled; int ipmi_dev; int ipmi_enqueue_request; int ipmi_driver_request; int ipmi_startup; } ;
struct opal_ipmi_softc {int sc_msg; TYPE_1__ ipmi; int sc_interface; } ;
struct opal_ipmi_msg {int dummy; } ;
typedef int pcell_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,char*,int *,int) ;
 struct opal_ipmi_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_8)
{
 struct opal_ipmi_softc *VAR_9;

 VAR_9 = FUNC_1(VAR_8);

 if (FUNC_0(FUNC_5(VAR_8), "ibm,ipmi-interface-id",
     (pcell_t*)&VAR_9->sc_interface, sizeof(VAR_9->sc_interface)) < 0) {
  FUNC_2(VAR_8, "Missing interface id\n");
  return (VAR_0);
 }
 VAR_9->ipmi.ipmi_startup = VAR_7;
 VAR_9->ipmi.ipmi_driver_request = VAR_6;
 VAR_9->ipmi.ipmi_enqueue_request = VAR_5;
 VAR_9->ipmi.ipmi_driver_requests_polled = 1;
 VAR_9->ipmi.ipmi_dev = VAR_8;

 VAR_9->sc_msg = FUNC_4(sizeof(struct opal_ipmi_msg) + VAR_1, VAR_2,
     VAR_3 | VAR_4);

 return (FUNC_3(VAR_8));
}
