
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef void* uint32_t ;
struct ivhd_dev_cfg {int enable_ats; scalar_t__ data; void* end_id; void* start_id; } ;
struct amdvi_softc {int dev_cfg_cnt; struct ivhd_dev_cfg* dev_cfg; } ;



__attribute__((used)) static void
FUNC_0(struct amdvi_softc *VAR_0, uint32_t VAR_1,
    uint32_t VAR_2, uint8_t VAR_3, bool VAR_4)
{
 struct ivhd_dev_cfg *VAR_5;


 if (!VAR_3)
  return;

 VAR_5 = &VAR_0->dev_cfg[VAR_0->dev_cfg_cnt++];
 VAR_5->start_id = VAR_1;
 VAR_5->end_id = VAR_2;
 VAR_5->data = VAR_3;
 VAR_5->enable_ats = VAR_4;
}
