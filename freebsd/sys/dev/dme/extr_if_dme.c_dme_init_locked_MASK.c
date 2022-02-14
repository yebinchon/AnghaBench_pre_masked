
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; } ;
struct dme_softc {int dme_tick_ch; struct ifnet* dme_ifp; } ;


 int FUNC_0 (struct dme_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,struct dme_softc*) ;
 int FUNC_2 (struct dme_softc*) ;
 int FUNC_3 (struct dme_softc*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct dme_softc *VAR_4)
{
 struct ifnet *VAR_5 = VAR_4->dme_ifp;

 FUNC_0(VAR_4);

 if ((VAR_5->if_drv_flags & VAR_1) != 0)
  return;

 FUNC_3(VAR_4);
 FUNC_2(VAR_4);

 VAR_5->if_drv_flags |= VAR_1;
 VAR_5->if_drv_flags &= ~VAR_0;

 FUNC_1(&VAR_4->dme_tick_ch, VAR_3, VAR_2, VAR_4);
}
