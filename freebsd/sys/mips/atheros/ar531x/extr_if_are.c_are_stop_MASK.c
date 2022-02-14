
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; } ;
struct are_softc {int are_stat_callout; struct ifnet* are_ifp; } ;


 int FUNC_0 (struct are_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct are_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct are_softc*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct are_softc *VAR_9)
{
 struct ifnet *VAR_10;

 FUNC_0(VAR_9);

 VAR_10 = VAR_9->are_ifp;
 VAR_10->if_drv_flags &= ~(VAR_6 | VAR_5);
 FUNC_3(&VAR_9->are_stat_callout);


 FUNC_2(VAR_9, VAR_0, 0);


 FUNC_2(VAR_9, VAR_2, 0);
 FUNC_2(VAR_9, VAR_3, 0);
 FUNC_2(VAR_9, VAR_4, 0);
 FUNC_2(VAR_9, VAR_1,
     FUNC_1(VAR_9, VAR_1) & ~(VAR_8 | VAR_7));

}
