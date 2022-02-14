
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; } ;
struct fv_softc {int fv_stat_callout; struct ifnet* fv_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fv_softc*,int ,int ) ;
 int FUNC_1 (struct fv_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct fv_softc *VAR_6)
{
 struct ifnet *VAR_7;

 FUNC_1(VAR_6);

 VAR_7 = VAR_6->fv_ifp;
 VAR_7->if_drv_flags &= ~(VAR_5 | VAR_4);
 FUNC_2(&VAR_6->fv_stat_callout);


 FUNC_0(VAR_6, VAR_0, 0);


 FUNC_0(VAR_6, VAR_1, 0);
 FUNC_0(VAR_6, VAR_2, 0);
 FUNC_0(VAR_6, VAR_3, 0);

}
