
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {int dummy; } ;
struct ipmi_request {int ir_error; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipmi_softc*) ;
 int FUNC_1 (struct ipmi_softc*) ;
 int FUNC_2 (struct ipmi_softc*,struct ipmi_request*) ;

__attribute__((used)) static int
FUNC_3(struct ipmi_softc *VAR_1, struct ipmi_request *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < 3 && !VAR_5; VAR_4++) {
  FUNC_0(VAR_1);
  VAR_5 = FUNC_2(VAR_1, VAR_2);
  FUNC_1(VAR_1);
 }
 if (VAR_5)
  VAR_2->ir_error = 0;
 else
  VAR_2->ir_error = VAR_0;
 return (VAR_2->ir_error);
}
