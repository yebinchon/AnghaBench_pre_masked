
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rl_softc {int rl_flags; scalar_t__ rl_twister; int rl_stat_callout; scalar_t__ rl_twister_enable; int rl_dev; int rl_miibus; } ;
struct mii_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rl_softc*) ;
 int FUNC_1 (int *,int,void (*) (void*),struct rl_softc*) ;
 struct mii_data* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct mii_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct rl_softc*) ;
 int FUNC_6 (struct rl_softc*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_3)
{
 struct rl_softc *VAR_4 = VAR_3;
 struct mii_data *VAR_5;
 int VAR_6;

 FUNC_0(VAR_4);
 VAR_5 = FUNC_2(VAR_4->rl_miibus);
 FUNC_3(VAR_5);
 if ((VAR_4->rl_flags & VAR_1) == 0)
  FUNC_4(VAR_4->rl_dev);
 if (VAR_4->rl_twister_enable) {
  if (VAR_4->rl_twister == VAR_0)
   FUNC_6(VAR_4);
  else
   FUNC_5(VAR_4);
  if (VAR_4->rl_twister == VAR_0)
   VAR_6 = VAR_2;
  else
   VAR_6 = VAR_2 / 10;
 } else {
  FUNC_6(VAR_4);
  VAR_6 = VAR_2;
 }

 FUNC_1(&VAR_4->rl_stat_callout, VAR_6, FUNC_7, VAR_4);
}
