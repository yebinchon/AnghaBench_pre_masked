
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_softc {int sge_flags; int sge_stat_ch; scalar_t__ sge_timer; struct ifnet* sge_ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int FUNC_0 (struct sge_softc*,int ) ;
 int FUNC_1 (struct sge_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct sge_softc*) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sge_softc*) ;
 int FUNC_6 (struct sge_softc*) ;

__attribute__((used)) static void
FUNC_7(struct sge_softc *VAR_7)
{
 struct ifnet *VAR_8;

 VAR_8 = VAR_7->sge_ifp;

 FUNC_3(VAR_7);

 VAR_7->sge_timer = 0;
 FUNC_4(&VAR_7->sge_stat_ch);
 VAR_8->if_drv_flags &= ~(VAR_1 | VAR_0);

 FUNC_1(VAR_7, VAR_2, 0);
 FUNC_0(VAR_7, VAR_2);
 FUNC_1(VAR_7, VAR_3, 0xffffffff);

 FUNC_1(VAR_7, VAR_6, 0x1a00);
 FUNC_1(VAR_7, VAR_4, 0x1a00);

 FUNC_2(2000);
 FUNC_1(VAR_7, VAR_2, 0);
 FUNC_1(VAR_7, VAR_3, 0xffffffff);

 VAR_7->sge_flags &= ~VAR_5;
 FUNC_5(VAR_7);
 FUNC_6(VAR_7);
}
