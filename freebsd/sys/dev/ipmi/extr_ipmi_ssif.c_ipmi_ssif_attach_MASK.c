
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {int ipmi_ssif_smbus_address; int ipmi_driver_request; int ipmi_enqueue_request; int ipmi_startup; int ipmi_ssif_smbus; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(struct ipmi_softc *VAR_3, device_t VAR_4, int VAR_5)
{


 VAR_3->ipmi_ssif_smbus = VAR_4;
 VAR_3->ipmi_ssif_smbus_address = VAR_5;


 VAR_3->ipmi_startup = VAR_2;
 VAR_3->ipmi_enqueue_request = VAR_0;
 VAR_3->ipmi_driver_request = VAR_1;

 return (0);
}
