
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpt_softc {int verbose; int cfg_role; int do_cfg_role; int msi_enable; int dev; scalar_t__ is_sas; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,char*,int*) ;

__attribute__((used)) static void
FUNC_3(struct mpt_softc *VAR_0)
{
 int VAR_1;

 VAR_1 = 0;
 if (FUNC_2(FUNC_0(VAR_0->dev),
     FUNC_1(VAR_0->dev), "debug", &VAR_1) == 0 && VAR_1 != 0) {
  VAR_0->verbose = VAR_1;
 }
 VAR_1 = -1;
 if (FUNC_2(FUNC_0(VAR_0->dev),
     FUNC_1(VAR_0->dev), "role", &VAR_1) == 0 && VAR_1 >= 0 &&
     VAR_1 <= 3) {
  VAR_0->cfg_role = VAR_1;
  VAR_0->do_cfg_role = 1;
 }
 VAR_1 = 0;
 VAR_0->msi_enable = 0;
 if (VAR_0->is_sas)
  VAR_0->msi_enable = 1;
 if (FUNC_2(FUNC_0(VAR_0->dev),
     FUNC_1(VAR_0->dev), "msi_enable", &VAR_1) == 0) {
  VAR_0->msi_enable = VAR_1;
 }
}
