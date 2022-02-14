
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {int ipmi_request_added; int ipmi_pending_requests; } ;
struct ipmi_request {int dummy; } ;


 int FUNC_0 (struct ipmi_softc*) ;
 int FUNC_1 (int *,struct ipmi_request*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

int
FUNC_3(struct ipmi_softc *VAR_1, struct ipmi_request *VAR_2)
{

 FUNC_0(VAR_1);

 FUNC_1(&VAR_1->ipmi_pending_requests, VAR_2, VAR_0);
 FUNC_2(&VAR_1->ipmi_request_added);
 return (0);
}
