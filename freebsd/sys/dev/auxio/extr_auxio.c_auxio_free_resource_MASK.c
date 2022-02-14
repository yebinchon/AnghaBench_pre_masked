
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auxio_softc {int sc_nauxio; scalar_t__* sc_res; int * sc_rid; int sc_dev; } ;


 int FUNC_0 (struct auxio_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct auxio_softc *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->sc_nauxio; VAR_2++)
  if (VAR_1->sc_res[VAR_2])
   FUNC_1(VAR_1->sc_dev, VAR_0,
       VAR_1->sc_rid[VAR_2], VAR_1->sc_res[VAR_2]);
 FUNC_0(VAR_1);
}
