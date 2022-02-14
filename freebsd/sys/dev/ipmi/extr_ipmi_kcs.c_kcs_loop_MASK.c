
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {int dummy; } ;
struct ipmi_request {scalar_t__ ir_error; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ipmi_softc*) ;
 int FUNC_1 (struct ipmi_softc*) ;
 int FUNC_2 (struct ipmi_softc*,struct ipmi_request*) ;
 struct ipmi_request* FUNC_3 (struct ipmi_softc*) ;
 int FUNC_4 (struct ipmi_softc*,struct ipmi_request*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1)
{
 struct ipmi_softc *VAR_2 = VAR_1;
 struct ipmi_request *VAR_3;
 int VAR_4, VAR_5;

 FUNC_0(VAR_2);
 while ((VAR_3 = FUNC_3(VAR_2)) != ((void*)0)) {
  FUNC_1(VAR_2);
  VAR_5 = 0;
  for (VAR_4 = 0; VAR_4 < 3 && !VAR_5; VAR_4++)
   VAR_5 = FUNC_4(VAR_2, VAR_3);
  if (VAR_5)
   VAR_3->ir_error = 0;
  else
   VAR_3->ir_error = VAR_0;
  FUNC_0(VAR_2);
  FUNC_2(VAR_2, VAR_3);
 }
 FUNC_1(VAR_2);
 FUNC_5(0);
}
