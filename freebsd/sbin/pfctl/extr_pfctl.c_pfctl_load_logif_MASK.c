
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfioc_if {int ifname; } ;
struct pfctl {int dev; } ;
typedef int pi ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,struct pfioc_if*) ;
 int FUNC_1 (struct pfioc_if*,int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*) ;

int
FUNC_4(struct pfctl *VAR_1, char *VAR_2)
{
 struct pfioc_if VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 if (VAR_2 && FUNC_2(VAR_3.ifname, VAR_2,
     sizeof(VAR_3.ifname)) >= sizeof(VAR_3.ifname)) {
  FUNC_3("pfctl_load_logif: strlcpy");
  return (1);
 }
 if (FUNC_0(VAR_1->dev, VAR_0, &VAR_3)) {
  FUNC_3("DIOCSETSTATUSIF");
  return (1);
 }
 return (0);
}
