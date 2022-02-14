
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_softc {int sge_flags; int sge_stat_ch; int sge_dev; int sge_miibus; struct ifnet* sge_ifp; } ;
struct mii_data {int dummy; } ;
struct ifnet {int if_snd; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct sge_softc*) ;
 int FUNC_2 (int *,int ,void (*) (void*),struct sge_softc*) ;
 struct mii_data* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (struct mii_data*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (struct sge_softc*) ;
 int FUNC_8 (struct sge_softc*) ;

__attribute__((used)) static void
FUNC_9(void *VAR_2)
{
 struct sge_softc *VAR_3;
 struct mii_data *VAR_4;
 struct ifnet *VAR_5;

 VAR_3 = VAR_2;
 FUNC_1(VAR_3);

 VAR_5 = VAR_3->sge_ifp;
 VAR_4 = FUNC_3(VAR_3->sge_miibus);
 FUNC_4(VAR_4);
 if ((VAR_3->sge_flags & VAR_0) == 0) {
  FUNC_5(VAR_3->sge_dev);
  if ((VAR_3->sge_flags & VAR_0) != 0 &&
      !FUNC_0(&VAR_5->if_snd))
   FUNC_6(VAR_5);
 }





 FUNC_7(VAR_3);
 FUNC_8(VAR_3);
 FUNC_2(&VAR_3->sge_stat_ch, VAR_1, FUNC_9, VAR_3);
}
