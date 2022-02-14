
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct miiproxy_softc {int * mdio; int * proxy; int * parent; } ;
typedef int * device_t ;
struct TYPE_2__ {int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *) ;
 struct miiproxy_softc* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,...) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (int *,char const*,int ) ;
 scalar_t__ FUNC_9 (int ,int ,char*,char const**) ;

device_t
FUNC_10(device_t VAR_3)
{
 struct miiproxy_softc *VAR_4;
 int VAR_5;
 const char *VAR_6;
 device_t VAR_7;

 if (FUNC_9(FUNC_2(VAR_3),
     FUNC_5(VAR_3), "mdio", &VAR_6) != 0) {
      if (VAR_0)
   FUNC_7("mii_attach_proxy: not attaching, no mdio"
       " device hint for %s\n", FUNC_3(VAR_3));
  return (((void*)0));
 }

 VAR_7 = FUNC_1(VAR_3, VAR_1.name, -1);
 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 != 0) {
  FUNC_6(VAR_3, "can't attach miiproxy\n");
  return (((void*)0));
 }
 VAR_4 = FUNC_4(VAR_7);
 VAR_4->parent = VAR_3;
 VAR_4->proxy = VAR_7;
 if (FUNC_8(VAR_7, VAR_6, VAR_2) != 0) {
  FUNC_6(VAR_3, "can't attach proxy\n");
  return (((void*)0));
 }
 FUNC_6(VAR_7, "attached to target %s\n", FUNC_3(VAR_4->mdio));
 return (VAR_7);
}
