
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_gpio_softc {int sc_dev; } ;
typedef int ssize_t ;
typedef scalar_t__ phandle_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,void**) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct bcm_gpio_softc*,scalar_t__,char*,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static int
FUNC_7(struct bcm_gpio_softc *VAR_0)
{
 char *VAR_1;
 phandle_t VAR_2, VAR_3, VAR_4;
 ssize_t VAR_5;


 VAR_2 = FUNC_5(VAR_0->sc_dev);
 if (FUNC_4(VAR_0, VAR_2, "broadcom,read-only",
     "read-only") != 0)
  return (0);

 VAR_4 = 0;
 VAR_3 = FUNC_0(VAR_2);
 while ((VAR_3 != 0) && (VAR_4 == 0)) {
  VAR_5 = FUNC_1(VAR_3, "name", (void **)&VAR_1);
  if (VAR_5 == -1)
   return (-1);
  if (FUNC_6(VAR_1, "reserved") == 0)
   VAR_4 = VAR_3;
  FUNC_3(VAR_1);
  VAR_3 = FUNC_2(VAR_3);
 }
 if (VAR_4 == 0)
  return (-1);

 if (FUNC_4(VAR_0, VAR_4, "broadcom,pins",
     "reserved") != 0)
  return (-1);

 return (0);
}
