
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8366rb_softc {int * miibus; } ;
struct mii_data {int dummy; } ;
struct ifnet {size_t if_dunit; struct rtl8366rb_softc* if_softc; } ;


 struct mii_data* FUNC_0 (int ) ;
 int FUNC_1 (struct mii_data*) ;

__attribute__((used)) static int
FUNC_2(struct ifnet *VAR_0)
{
 struct rtl8366rb_softc *VAR_1;
 struct mii_data *VAR_2;

 VAR_1 = VAR_0->if_softc;
 VAR_2 = FUNC_0(VAR_1->miibus[VAR_0->if_dunit]);

 FUNC_1(VAR_2);
 return (0);
}
