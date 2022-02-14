
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int dummy; } ;
struct ifnet {int if_dunit; int * if_softc; } ;
typedef int e6000sw_softc_t ;


 int VAR_0 ;
 struct mii_data* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct mii_data*) ;

__attribute__((used)) static int
FUNC_2(struct ifnet *VAR_1)
{
 e6000sw_softc_t *VAR_2;
 struct mii_data *VAR_3;

 VAR_2 = VAR_1->if_softc;
 VAR_3 = FUNC_0(VAR_2, VAR_1->if_dunit);
 if (VAR_3 == ((void*)0))
  return (VAR_0);
 FUNC_1(VAR_3);

 return (0);
}
