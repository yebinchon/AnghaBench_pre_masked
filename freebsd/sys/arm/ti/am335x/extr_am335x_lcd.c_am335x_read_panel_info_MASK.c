
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_info {int sync_ctrl; int sync_edge; int fdd; int bpp; int dma_burst_sz; int ac_bias_intrpt; int ac_bias; } ;
typedef scalar_t__ phandle_t ;
typedef int device_t ;


 int FUNC_0 (int ,scalar_t__,char*,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,char*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, phandle_t VAR_1, struct panel_info *VAR_2)
{
 phandle_t VAR_3;

 VAR_3 = FUNC_1(VAR_1, "panel-info");
 if (VAR_3 == 0)
  return (-1);

 FUNC_0(VAR_0, VAR_3,
     "ac-bias", &VAR_2->ac_bias);

 FUNC_0(VAR_0, VAR_3,
     "ac-bias-intrpt", &VAR_2->ac_bias_intrpt);

 FUNC_0(VAR_0, VAR_3,
     "dma-burst-sz", &VAR_2->dma_burst_sz);

 FUNC_0(VAR_0, VAR_3,
     "bpp", &VAR_2->bpp);

 FUNC_0(VAR_0, VAR_3,
     "fdd", &VAR_2->fdd);

 FUNC_0(VAR_0, VAR_3,
     "sync-edge", &VAR_2->sync_edge);

 FUNC_0(VAR_0, VAR_3,
     "sync-ctrl", &VAR_2->sync_ctrl);

 return (0);
}
