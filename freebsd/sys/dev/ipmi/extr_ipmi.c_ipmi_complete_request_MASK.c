
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {int dummy; } ;
struct ipmi_request {struct ipmi_device* ir_owner; } ;
struct ipmi_device {struct ipmi_request ipmi_requests; scalar_t__ ipmi_closing; int ipmi_select; int ipmi_completed_requests; } ;


 int FUNC_0 (struct ipmi_softc*) ;
 int FUNC_1 (int *,struct ipmi_request*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ipmi_request*) ;

void
FUNC_4(struct ipmi_softc *VAR_1, struct ipmi_request *VAR_2)
{
 struct ipmi_device *VAR_3;

 FUNC_0(VAR_1);





 if (VAR_2->ir_owner == ((void*)0))
  FUNC_3(VAR_2);
 else {
  VAR_3 = VAR_2->ir_owner;
  FUNC_1(&VAR_3->ipmi_completed_requests, VAR_2, VAR_0);
  FUNC_2(&VAR_3->ipmi_select);
  if (VAR_3->ipmi_closing)
   FUNC_3(&VAR_3->ipmi_requests);
 }
}
