
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbni_softc {int wch; struct ifnet* ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ,struct sbni_softc*) ;
 int FUNC_1 (struct sbni_softc*) ;
 int VAR_3 ;
 int FUNC_2 (struct ifnet*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct sbni_softc *VAR_5)
{
 struct ifnet *VAR_6;

 VAR_6 = VAR_5->ifp;





 if (VAR_6->if_drv_flags & VAR_1)
  return;

 FUNC_1(VAR_5);
 FUNC_0(&VAR_5->wch, VAR_3/VAR_2, VAR_4, VAR_5);

 VAR_6->if_drv_flags |= VAR_1;
 VAR_6->if_drv_flags &= ~VAR_0;


 FUNC_2(VAR_6);
}
