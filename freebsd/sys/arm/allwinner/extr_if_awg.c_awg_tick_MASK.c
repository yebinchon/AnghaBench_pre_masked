
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int dummy; } ;
struct awg_softc {int link; int stat_ch; int miibus; int ifp; } ;
typedef int if_t ;


 int FUNC_0 (struct awg_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct awg_softc*) ;
 int FUNC_2 (int *,int ,void (*) (void*),struct awg_softc*) ;
 struct mii_data* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_2)
{
 struct awg_softc *VAR_3;
 struct mii_data *VAR_4;
 if_t VAR_5;
 int VAR_6;

 VAR_3 = VAR_2;
 VAR_5 = VAR_3->ifp;
 VAR_4 = FUNC_3(VAR_3->miibus);

 FUNC_0(VAR_3);

 if ((FUNC_4(VAR_5) & VAR_0) == 0)
  return;

 VAR_6 = VAR_3->link;
 FUNC_5(VAR_4);
 if (VAR_3->link && !VAR_6)
  FUNC_1(VAR_3);

 FUNC_2(&VAR_3->stat_ch, VAR_1, FUNC_6, VAR_3);
}
