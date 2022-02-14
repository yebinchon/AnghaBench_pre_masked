
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rl_softc {int rl_flags; int rl_stat_callout; int rl_dev; int rl_miibus; } ;
struct mii_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rl_softc*) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct rl_softc*) ;
 struct mii_data* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct mii_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct rl_softc*) ;
 int FUNC_6 (struct rl_softc*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_2)
{
 struct rl_softc *VAR_3;
 struct mii_data *VAR_4;

 VAR_3 = VAR_2;

 FUNC_0(VAR_3);

 VAR_4 = FUNC_2(VAR_3->rl_miibus);
 FUNC_3(VAR_4);
 if ((VAR_3->rl_flags & VAR_0) == 0)
  FUNC_4(VAR_3->rl_dev);






 FUNC_5(VAR_3);
 FUNC_6(VAR_3);
 FUNC_1(&VAR_3->rl_stat_callout, VAR_1, FUNC_7, VAR_3);
}
