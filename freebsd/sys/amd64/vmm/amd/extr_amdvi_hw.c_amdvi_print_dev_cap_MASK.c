
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivhd_dev_cfg {scalar_t__ enable_ats; int data; int end_id; int start_id; } ;
struct amdvi_softc {int dev_cfg_cnt; int dev; struct ivhd_dev_cfg* dev_cfg; } ;


 int FUNC_0 (int ,char*,int ,int ,int ,char*,char*) ;

__attribute__((used)) static void
FUNC_1(struct amdvi_softc *VAR_0)
{
 struct ivhd_dev_cfg *VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->dev_cfg;
 for (VAR_2 = 0; VAR_2 < VAR_0->dev_cfg_cnt; VAR_2++) {
  FUNC_0(VAR_0->dev, "device [0x%x - 0x%x]"
      "config:%b%s\n", VAR_1->start_id, VAR_1->end_id,
      VAR_1->data,
      "\020\001INIT\002ExtInt\003NMI"
      "\007LINT0\008LINT1",
      VAR_1->enable_ats ? "ATS enabled" : "");
  VAR_1++;
 }
}
