
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_xlpge_softc {int xlpge_callout; scalar_t__ mii_bus; struct ifnet* xlpge_if; } ;
struct mii_data {int dummy; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,struct nlm_xlpge_softc*) ;
 struct mii_data* FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (struct mii_data*) ;
 int VAR_3 ;
 int FUNC_3 (struct nlm_xlpge_softc*) ;
 int FUNC_4 (struct nlm_xlpge_softc*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_4)
{
 struct nlm_xlpge_softc *VAR_5;
 struct ifnet *VAR_6;
 struct mii_data *VAR_7 = ((void*)0);

 VAR_5 = (struct nlm_xlpge_softc *)VAR_4;
 VAR_6 = VAR_5->xlpge_if;

 if (VAR_6->if_drv_flags & VAR_1)
  return;

 if (VAR_5->mii_bus) {
  VAR_7 = FUNC_1(VAR_5->mii_bus);
  FUNC_2(VAR_7);
 }

 FUNC_3(VAR_5);
 VAR_6->if_drv_flags |= VAR_1;
 VAR_6->if_drv_flags &= ~VAR_0;
 FUNC_4(VAR_5);


 FUNC_0(&VAR_5->xlpge_callout, VAR_2, VAR_3, VAR_5);
}
