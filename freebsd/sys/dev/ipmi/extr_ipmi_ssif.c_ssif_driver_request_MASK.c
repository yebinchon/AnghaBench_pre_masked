
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {int ipmi_requests_lock; } ;
struct ipmi_request {int ir_error; } ;


 int FUNC_0 (struct ipmi_softc*) ;
 int FUNC_1 (struct ipmi_softc*) ;
 int FUNC_2 (struct ipmi_softc*,struct ipmi_request*) ;
 int FUNC_3 (struct ipmi_request*,int *,int ,char*,int) ;

__attribute__((used)) static int
FUNC_4(struct ipmi_softc *VAR_0, struct ipmi_request *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0);
 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_3 == 0)
  VAR_3 = FUNC_3(VAR_1, &VAR_0->ipmi_requests_lock, 0, "ipmireq",
      VAR_2);
 if (VAR_3 == 0)
  VAR_3 = VAR_1->ir_error;
 FUNC_1(VAR_0);
 return (VAR_3);
}
