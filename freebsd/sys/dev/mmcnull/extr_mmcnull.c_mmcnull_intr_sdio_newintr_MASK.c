
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmcnull_softc {int dev; int sim; int sc_mtx; } ;
struct cam_path {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,struct cam_path*,int *) ;
 scalar_t__ FUNC_4 (struct cam_path**,int *,int ,int ,int ) ;
 int FUNC_5 (struct cam_path*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3) {
 struct mmcnull_softc *VAR_4;
 struct cam_path *VAR_5;

 VAR_4 = (struct mmcnull_softc *) VAR_3;
 FUNC_2(&VAR_4->sc_mtx, VAR_2);
 FUNC_1(VAR_4->dev, "mmcnull_intr_sdio_newintr()\n");


 if (FUNC_4(&VAR_5, ((void*)0), FUNC_0(VAR_4->sim), 0, 0) != VAR_1) {
  FUNC_1(VAR_4->dev, "mmcnull_intr_sdio_newintr(): cannot create path\n");
  return;
 }
 FUNC_3(VAR_0, VAR_5, ((void*)0));
 FUNC_5(VAR_5);
}
