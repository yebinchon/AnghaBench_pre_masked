
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_request {int dummy; } ;
struct ipmi_device {int ipmi_requests; int ipmi_completed_requests; } ;


 int FUNC_0 (int *) ;
 struct ipmi_request* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ipmi_request*,int ) ;
 int FUNC_3 (struct ipmi_request*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct ipmi_device *VAR_1)
{
 struct ipmi_request *VAR_2;

 while (!FUNC_0(&VAR_1->ipmi_completed_requests)) {
  VAR_2 = FUNC_1(&VAR_1->ipmi_completed_requests);
  FUNC_2(&VAR_1->ipmi_completed_requests, VAR_2, VAR_0);
  VAR_1->ipmi_requests--;
  FUNC_3(VAR_2);
 }
}
