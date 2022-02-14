
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phynode {int dummy; } ;
struct awusbphy_softc {int ** reg; TYPE_1__* phy_conf; } ;
typedef int * regulator_t ;
typedef int intmax_t ;
typedef int device_t ;
struct TYPE_2__ {intptr_t num_phys; } ;


 int VAR_0 ;
 int FUNC_0 (int ,intptr_t) ;
 int FUNC_1 (int ,int*) ;
 scalar_t__ VAR_1 ;
 struct awusbphy_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct phynode*) ;
 intptr_t FUNC_5 (struct phynode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct phynode *VAR_2, bool VAR_3)
{
 device_t VAR_4;
 intptr_t VAR_5;
 struct awusbphy_softc *VAR_6;
 regulator_t VAR_7;
 int VAR_8, VAR_9;

 VAR_4 = FUNC_4(VAR_2);
 VAR_5 = FUNC_5(VAR_2);
 VAR_6 = FUNC_2(VAR_4);

 if (VAR_5 < 0 || VAR_5 >= VAR_6->phy_conf->num_phys)
  return (VAR_0);


 FUNC_0(VAR_4, VAR_5);


 VAR_7 = VAR_6->reg[VAR_5];
 if (VAR_7 == ((void*)0))
  return (0);

 if (VAR_5 == 0) {

  VAR_8 = FUNC_1(VAR_4, &VAR_9);
  if (VAR_8)
   goto out;

  if (VAR_9 == 1) {
   if (VAR_1)
    FUNC_3(VAR_4, "External VBUS detected, not enabling the regulator\n");

   return (0);
  }
 }
 if (VAR_3) {

  VAR_8 = FUNC_7(VAR_7);
 } else
  VAR_8 = FUNC_6(VAR_7);

out:
 if (VAR_8 != 0) {
  FUNC_3(VAR_4,
      "couldn't %s regulator for phy %jd\n",
      VAR_3 ? "enable" : "disable", (intmax_t)VAR_5);
  return (VAR_8);
 }

 return (0);
}
