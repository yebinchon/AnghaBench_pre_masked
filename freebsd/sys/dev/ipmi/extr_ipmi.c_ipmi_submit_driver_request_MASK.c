
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {int (* ipmi_driver_request ) (struct ipmi_softc*,struct ipmi_request*,int) ;} ;
struct ipmi_request {int dummy; } ;


 int FUNC_0 (struct ipmi_softc*,struct ipmi_request*,int) ;

int
FUNC_1(struct ipmi_softc *VAR_0, struct ipmi_request *VAR_1,
    int VAR_2)
{

 return (VAR_0->ipmi_driver_request(VAR_0, VAR_1, VAR_2));
}
