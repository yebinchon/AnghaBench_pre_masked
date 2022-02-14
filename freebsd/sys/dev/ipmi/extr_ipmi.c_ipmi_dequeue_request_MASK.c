
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {int ipmi_pending_requests; scalar_t__ ipmi_detaching; int ipmi_requests_lock; int ipmi_request_added; } ;
struct ipmi_request {int dummy; } ;


 int FUNC_0 (struct ipmi_softc*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct ipmi_request* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct ipmi_request*,int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_0 ;

struct ipmi_request *
FUNC_5(struct ipmi_softc *VAR_1)
{
 struct ipmi_request *VAR_2;

 FUNC_0(VAR_1);

 while (!VAR_1->ipmi_detaching && FUNC_1(&VAR_1->ipmi_pending_requests))
  FUNC_4(&VAR_1->ipmi_request_added, &VAR_1->ipmi_requests_lock);
 if (VAR_1->ipmi_detaching)
  return (((void*)0));

 VAR_2 = FUNC_2(&VAR_1->ipmi_pending_requests);
 FUNC_3(&VAR_1->ipmi_pending_requests, VAR_2, VAR_0);
 return (VAR_2);
}
