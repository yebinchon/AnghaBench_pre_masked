
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_gpio_softc {int* sc_ro_pins; int sc_ro_npins; int sc_dev; } ;
typedef int phandle_t ;
typedef int pcell_t ;


 int FUNC_0 (int ,char const*,int,void**) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int
FUNC_4(struct bcm_gpio_softc *VAR_0, phandle_t VAR_1,
 const char *VAR_2, const char *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 pcell_t *VAR_9;


 VAR_6 = FUNC_0(VAR_1, VAR_2, sizeof(*VAR_9),
     (void **)&VAR_9);
 if (VAR_6 < 0)
  return (-1);
 if (VAR_6 == 0) {
  FUNC_1(VAR_9);
  return (0);
 }
 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
  VAR_0->sc_ro_pins[VAR_4 + VAR_0->sc_ro_npins] = VAR_9[VAR_4];
 VAR_0->sc_ro_npins += VAR_6;
 VAR_5 = 0;
 FUNC_2(VAR_0->sc_dev, "%s pins: ", VAR_3);
 VAR_7 = VAR_8 = VAR_9[0];
 for (VAR_4 = 1; VAR_4 < VAR_6; VAR_4++) {
  if (VAR_9[VAR_4] != VAR_8 + 1) {
   if (VAR_5)
    FUNC_3(",");
   if (VAR_7 != VAR_8)
    FUNC_3("%d-%d", VAR_7, VAR_8);
   else
    FUNC_3("%d", VAR_7);
   VAR_7 = VAR_8 = VAR_9[VAR_4];
   VAR_5 = 1;
  } else
   VAR_8++;
 }
 if (VAR_5)
  FUNC_3(",");
 if (VAR_7 != VAR_8)
  FUNC_3("%d-%d.\n", VAR_7, VAR_8);
 else
  FUNC_3("%d.\n", VAR_7);
 FUNC_1(VAR_9);

 return (0);
}
