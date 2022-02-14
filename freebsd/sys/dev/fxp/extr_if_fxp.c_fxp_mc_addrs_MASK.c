
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fxp_softc {int ifp; struct fxp_cb_mcs* mcsp; } ;
struct fxp_cb_mcs {int mc_cnt; } ;
typedef int if_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,struct fxp_softc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static void
FUNC_4(struct fxp_softc *VAR_4)
{
 struct fxp_cb_mcs *VAR_5 = VAR_4->mcsp;
 if_t VAR_6 = VAR_4->ifp;

 if ((FUNC_2(VAR_6) & VAR_1) == 0) {
  VAR_5->mc_cnt = 0;
  FUNC_1(VAR_4->ifp, VAR_3, VAR_4);
  if (VAR_5->mc_cnt >= VAR_2) {
   FUNC_3(VAR_6, VAR_1, 0);
   VAR_5->mc_cnt = 0;
  }
 }
 VAR_5->mc_cnt = FUNC_0(VAR_5->mc_cnt * VAR_0);
}
