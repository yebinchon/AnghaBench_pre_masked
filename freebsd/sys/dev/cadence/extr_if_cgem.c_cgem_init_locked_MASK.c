
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int dummy; } ;
struct cgem_softc {int tick_ch; int miibus; int ifp; } ;


 int FUNC_0 (struct cgem_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,struct cgem_softc*) ;
 int FUNC_2 (struct cgem_softc*) ;
 int FUNC_3 (struct cgem_softc*) ;
 int VAR_2 ;
 struct mii_data* FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_8(struct cgem_softc *VAR_4)
{
 struct mii_data *VAR_5;

 FUNC_0(VAR_4);

 if ((FUNC_5(VAR_4->ifp) & VAR_1) != 0)
  return;

 FUNC_2(VAR_4);
 FUNC_3(VAR_4);

 FUNC_6(VAR_4->ifp, VAR_1, VAR_0);

 VAR_5 = FUNC_4(VAR_4->miibus);
 FUNC_7(VAR_5);

 FUNC_1(&VAR_4->tick_ch, VAR_3, VAR_2, VAR_4);
}
