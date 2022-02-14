
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fxp_softc {int mcs_map; int mcs_tag; int mcs_addr; int dev; struct fxp_cb_mcs* mcsp; } ;
struct fxp_cb_mcs {int link_addr; scalar_t__ cb_status; int cb_command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fxp_softc*,int ) ;
 int FUNC_1 (struct fxp_softc*,int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct fxp_softc*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct fxp_softc*,scalar_t__*,int ,int ) ;
 int FUNC_7 (struct fxp_softc*) ;
 int FUNC_8 (struct fxp_softc*,int ) ;
 int FUNC_9 (struct fxp_softc*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11(struct fxp_softc *VAR_9)
{
 struct fxp_cb_mcs *VAR_10;
 int VAR_11;

 FUNC_3(VAR_9, VAR_8);

 VAR_10 = VAR_9->mcsp;
 VAR_10->cb_status = 0;
 VAR_10->cb_command = FUNC_10(VAR_3 | VAR_2);
 VAR_10->link_addr = 0xffffffff;
 FUNC_7(VAR_9);





 VAR_11 = 100;
 while ((FUNC_0(VAR_9, VAR_5) >> 6) !=
     VAR_7 && --VAR_11)
  FUNC_2(10);
 if (VAR_11 == 0) {
  FUNC_5(VAR_9->dev, "command queue timeout\n");
  return;
 }




 FUNC_9(VAR_9);
 FUNC_4(VAR_9->mcs_tag, VAR_9->mcs_map,
     VAR_0 | VAR_1);
 FUNC_1(VAR_9, VAR_4, VAR_9->mcs_addr);
 FUNC_8(VAR_9, VAR_6);

 FUNC_6(VAR_9, &VAR_10->cb_status, VAR_9->mcs_tag, VAR_9->mcs_map);
}
