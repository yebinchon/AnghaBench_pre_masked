
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct auxio_softc {int sc_nauxio; int* sc_rid; int sc_led_stat; int sc_led_dev; int * sc_regh; int * sc_regt; struct resource** sc_res; int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct auxio_softc*) ;
 int FUNC_1 (struct auxio_softc*,int) ;
 int FUNC_2 (struct auxio_softc*) ;
 struct resource* FUNC_3 (int ,int ,int*,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int (*) (struct auxio_softc*,int),struct auxio_softc*,char*) ;
 int FUNC_6 (struct resource*) ;
 int FUNC_7 (struct resource*) ;

__attribute__((used)) static int
FUNC_8(struct auxio_softc *VAR_4)
{
 struct resource *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4->sc_nauxio; VAR_6++) {
  VAR_4->sc_rid[VAR_6] = VAR_6;
  VAR_5 = FUNC_3(VAR_4->sc_dev, VAR_3,
      &VAR_4->sc_rid[VAR_6], VAR_2);
  if (VAR_5 == ((void*)0)) {
   FUNC_4(VAR_4->sc_dev,
       "could not allocate resources\n");
   goto attach_fail;
  }
  VAR_4->sc_res[VAR_6] = VAR_5;
  VAR_4->sc_regt[VAR_6] = FUNC_7(VAR_5);
  VAR_4->sc_regh[VAR_6] = FUNC_6(VAR_5);
 }

 VAR_4->sc_led_stat = FUNC_2(VAR_4) & VAR_0;
 VAR_4->sc_led_dev = FUNC_5(FUNC_1, VAR_4, "auxioled");

 FUNC_1(VAR_4, 1);

 return (0);

attach_fail:
 FUNC_0(VAR_4);

 return (VAR_1);
}
