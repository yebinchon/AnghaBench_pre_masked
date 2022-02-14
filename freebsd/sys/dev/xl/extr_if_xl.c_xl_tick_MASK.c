
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xl_softc {int xl_tick_callout; int * xl_miibus; } ;
struct mii_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xl_softc*) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct xl_softc*) ;
 struct mii_data* FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct mii_data*) ;
 int FUNC_4 (struct xl_softc*) ;
 scalar_t__ FUNC_5 (struct xl_softc*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_2)
{
 struct xl_softc *VAR_3 = VAR_2;
 struct mii_data *VAR_4;

 FUNC_0(VAR_3);

 if (VAR_3->xl_miibus != ((void*)0)) {
  VAR_4 = FUNC_2(VAR_3->xl_miibus);
  FUNC_3(VAR_4);
 }

 FUNC_4(VAR_3);
 if (FUNC_5(VAR_3) == VAR_0)
  return;

 FUNC_1(&VAR_3->xl_tick_callout, VAR_1, FUNC_6, VAR_3);
}
