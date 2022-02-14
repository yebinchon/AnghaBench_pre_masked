
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {int ipmi_dev; } ;
struct ipmi_request {scalar_t__ ir_error; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ipmi_softc*) ;
 int FUNC_1 (struct ipmi_softc*) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_3 (struct ipmi_softc*,struct ipmi_request*) ;
 struct ipmi_request* FUNC_4 (struct ipmi_softc*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct ipmi_softc*,struct ipmi_request*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_2)
{
 struct ipmi_softc *VAR_3 = VAR_2;
 struct ipmi_request *VAR_4;
 int VAR_5, VAR_6;

 FUNC_0(VAR_3);
 while ((VAR_4 = FUNC_4(VAR_3)) != ((void*)0)) {
  FUNC_1(VAR_3);
  VAR_6 = 0;
  for (VAR_5 = 0; VAR_5 < 5; VAR_5++) {
   VAR_6 = FUNC_7(VAR_3, VAR_4);
   if (VAR_6)
    break;


   FUNC_6("retry", 60 * VAR_1 / 1000);




  }
  if (VAR_6)
   VAR_4->ir_error = 0;
  else
   VAR_4->ir_error = VAR_0;
  FUNC_0(VAR_3);
  FUNC_3(VAR_3, VAR_4);
  FUNC_1(VAR_3);


  FUNC_6("delay", VAR_1 / 100);

  FUNC_0(VAR_3);
 }
 FUNC_1(VAR_3);
 FUNC_5(0);
}
