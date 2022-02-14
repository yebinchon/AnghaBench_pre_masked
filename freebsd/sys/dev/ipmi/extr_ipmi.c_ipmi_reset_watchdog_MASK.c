
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {int ipmi_dev; } ;
struct ipmi_request {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ipmi_request*,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ipmi_softc*,struct ipmi_request*,int ) ;

__attribute__((used)) static int
FUNC_4(struct ipmi_softc *VAR_2)
{
 struct ipmi_request *VAR_3;
 int VAR_4;

 FUNC_1(VAR_3, FUNC_0(VAR_0, 0),
     VAR_1, 0, 0);
 VAR_4 = FUNC_3(VAR_2, VAR_3, 0);
 if (VAR_4)
  FUNC_2(VAR_2->ipmi_dev, "Failed to reset watchdog\n");
 return (VAR_4);
}
