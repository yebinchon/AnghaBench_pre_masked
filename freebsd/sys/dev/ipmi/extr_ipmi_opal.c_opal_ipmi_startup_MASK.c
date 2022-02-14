
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_softc {int ipmi_dev; int ipmi_kthread; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ipmi_softc*,int *,int ,int ,char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct ipmi_softc *VAR_1)
{

 return (FUNC_1(VAR_0, VAR_1, &VAR_1->ipmi_kthread, 0, 0,
     "%s: opal", FUNC_0(VAR_1->ipmi_dev)));
}
