
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vte_softc {int vte_tick_ch; int vte_miibus; } ;
struct mii_data {int dummy; } ;


 int FUNC_0 (struct vte_softc*) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct vte_softc*) ;
 struct mii_data* FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct mii_data*) ;
 int FUNC_4 (struct vte_softc*) ;
 int FUNC_5 (struct vte_softc*) ;
 int FUNC_6 (struct vte_softc*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1)
{
 struct vte_softc *VAR_2;
 struct mii_data *VAR_3;

 VAR_2 = (struct vte_softc *)VAR_1;

 FUNC_0(VAR_2);

 VAR_3 = FUNC_2(VAR_2->vte_miibus);
 FUNC_3(VAR_3);
 FUNC_4(VAR_2);
 FUNC_5(VAR_2);
 FUNC_6(VAR_2);
 FUNC_1(&VAR_2->vte_tick_ch, VAR_0, FUNC_7, VAR_2);
}
