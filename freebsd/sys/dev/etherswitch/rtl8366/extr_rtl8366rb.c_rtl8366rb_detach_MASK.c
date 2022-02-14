
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8366rb_softc {int numphys; int sc_mtx; int callout_mtx; int callout_tick; int * ifname; int ** ifp; scalar_t__* miibus; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct rtl8366rb_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 struct rtl8366rb_softc *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(VAR_1);

 for (VAR_3=0; VAR_3 < VAR_2->numphys; VAR_3++) {
  if (VAR_2->miibus[VAR_3])
   FUNC_2(VAR_1, VAR_2->miibus[VAR_3]);
  if (VAR_2->ifp[VAR_3] != ((void*)0))
   FUNC_5(VAR_2->ifp[VAR_3]);
  FUNC_4(VAR_2->ifname[VAR_3], VAR_0);
 }
 FUNC_0(VAR_1);
 FUNC_1(&VAR_2->callout_tick);
 FUNC_6(&VAR_2->callout_mtx);
 FUNC_6(&VAR_2->sc_mtx);

 return (0);
}
