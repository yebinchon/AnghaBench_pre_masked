
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {int ipmi_dev; } ;
struct ipmi_request {scalar_t__ ir_error; scalar_t__ ir_compcode; int * ir_request; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ipmi_request*,int ,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct ipmi_softc*,struct ipmi_request*,int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_6, int VAR_7)
{
 struct ipmi_softc *VAR_8 = VAR_6;
 struct ipmi_request *VAR_9;




 if ((VAR_7 & VAR_4) == 0)
  return;

 FUNC_3(VAR_8->ipmi_dev, "Power cycling using IPMI\n");





 FUNC_2(VAR_9, FUNC_1(VAR_2, 0),
     VAR_1, 1, 0);
 VAR_9->ir_request[0] = VAR_0;

 FUNC_4(VAR_8, VAR_9, VAR_3);

 if (VAR_9->ir_error != 0 || VAR_9->ir_compcode != 0) {
  FUNC_3(VAR_8->ipmi_dev, "Power cycling via IPMI failed code %#x %#x\n",
      VAR_9->ir_error, VAR_9->ir_compcode);
  return;
 }






 FUNC_0(VAR_5 * 1000 * 1000);
 FUNC_3(VAR_8->ipmi_dev, "Power cycling via IPMI timed out\n");
}
