
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_ipmi_softc {int ipmi; } ;
struct ipmi_request {scalar_t__ ir_error; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *,struct ipmi_request*) ;
 struct ipmi_request* FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct opal_ipmi_softc*,struct ipmi_request*,int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_2)
{
 struct opal_ipmi_softc *VAR_3 = VAR_2;
 struct ipmi_request *VAR_4;
 int VAR_5, VAR_6;

 FUNC_2(&VAR_3->ipmi);
 while ((VAR_4 = FUNC_5(&VAR_3->ipmi)) != ((void*)0)) {
  FUNC_3(&VAR_3->ipmi);
  VAR_6 = 0;
  for (VAR_5 = 0; VAR_5 < 3 && !VAR_6; VAR_5++) {
   FUNC_0(&VAR_3->ipmi);
   VAR_6 = FUNC_7(VAR_3, VAR_4, VAR_1);
   FUNC_1(&VAR_3->ipmi);
  }
  if (VAR_6)
   VAR_4->ir_error = 0;
  else
   VAR_4->ir_error = VAR_0;
  FUNC_2(&VAR_3->ipmi);
  FUNC_4(&VAR_3->ipmi, VAR_4);
 }
 FUNC_3(&VAR_3->ipmi);
 FUNC_6(0);
}
