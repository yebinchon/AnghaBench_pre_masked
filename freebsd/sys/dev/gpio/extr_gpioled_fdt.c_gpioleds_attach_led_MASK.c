
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpioleds_softc {int sc_dev; } ;
struct gpioled {int leddev; int pin; struct gpioleds_softc* parent_sc; } ;
typedef int phandle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,void**) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,struct gpioled*,char*,int) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static void
FUNC_7(struct gpioleds_softc *VAR_2, phandle_t VAR_3,
    struct gpioled *VAR_4)
{
 char *VAR_5;
 int VAR_6, VAR_7;
 char *VAR_8;

 VAR_4->parent_sc = VAR_2;

 VAR_6 = 0;
 if (FUNC_0(VAR_3, "default-state",
     (void **)&VAR_8) != -1) {
  if (FUNC_6(VAR_8, "on") == 0)
   VAR_6 = 1;
  else if (FUNC_6(VAR_8, "off") == 0)
   VAR_6 = 0;
  else if (FUNC_6(VAR_8, "keep") == 0)
   VAR_6 = -1;
  else {
   VAR_6 = -1;
   FUNC_2(VAR_2->sc_dev,
       "unknown value for default-state in FDT\n");
  }
  FUNC_1(VAR_8);
 }

 VAR_5 = ((void*)0);
 if (FUNC_0(VAR_3, "label", (void **)&VAR_5) == -1)
  FUNC_0(VAR_3, "name", (void **)&VAR_5);

 if (VAR_5 == ((void*)0)) {
  FUNC_2(VAR_2->sc_dev,
      "no name provided for gpio LED, skipping\n");
  return;
 }

 VAR_7 = FUNC_3(VAR_2->sc_dev, VAR_3, 0, &VAR_4->pin);
 if (VAR_7) {
  FUNC_2(VAR_2->sc_dev, "<%s> failed to map pin\n", VAR_5);
  if (VAR_5)
   FUNC_1(VAR_5);
  return;
 }
 FUNC_4(VAR_4->pin, VAR_0);

 VAR_4->leddev = FUNC_5(VAR_1, VAR_4, VAR_5,
     VAR_6);

 if (VAR_5 != ((void*)0))
  FUNC_1(VAR_5);
}
