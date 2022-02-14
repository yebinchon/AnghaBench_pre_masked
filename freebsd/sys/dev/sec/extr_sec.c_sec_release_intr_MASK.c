
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_softc {int sc_dev; } ;
struct resource {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,struct resource*) ;
 int FUNC_1 (int ,struct resource*,void*) ;
 int FUNC_2 (int ,char*,char const*,int) ;

__attribute__((used)) static void
FUNC_3(struct sec_softc *VAR_1, struct resource *VAR_2, void *VAR_3,
    int VAR_4, const char *VAR_5)
{
 int VAR_6;

 if (VAR_2 == ((void*)0))
  return;

 VAR_6 = FUNC_1(VAR_1->sc_dev, VAR_2, VAR_3);
 if (VAR_6)
  FUNC_2(VAR_1->sc_dev, "bus_teardown_intr() failed for %s"
      " IRQ, error %d\n", VAR_5, VAR_6);

 VAR_6 = FUNC_0(VAR_1->sc_dev, VAR_0, VAR_4, VAR_2);
 if (VAR_6)
  FUNC_2(VAR_1->sc_dev, "bus_release_resource() failed for %s"
      " IRQ, error %d\n", VAR_5, VAR_6);
}
