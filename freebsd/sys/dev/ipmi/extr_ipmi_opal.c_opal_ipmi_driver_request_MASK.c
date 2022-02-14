
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_ipmi_softc {int ipmi; } ;
struct ipmi_softc {int dummy; } ;
struct ipmi_request {int ir_error; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct opal_ipmi_softc*,struct ipmi_request*,int) ;

__attribute__((used)) static int
FUNC_3(struct ipmi_softc *VAR_0, struct ipmi_request *VAR_1,
    int VAR_2)
{
 struct opal_ipmi_softc *VAR_3 = (struct opal_ipmi_softc *)VAR_0;
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  FUNC_0(&VAR_3->ipmi);
  VAR_5 = FUNC_2(VAR_3, VAR_1, VAR_2);
  FUNC_1(&VAR_3->ipmi);
  if (VAR_5 == 0)
   break;
 }

 VAR_1->ir_error = VAR_5;

 return (VAR_5);
}
