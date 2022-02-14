
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct ifnet {int dummy; } ;
struct cdev {scalar_t__ si_drv1; } ;
struct TYPE_22__ {int * buffer; int cmd; int * size; } ;
typedef TYPE_2__ qlnx_trace_t ;
typedef int qlnx_storm_stats_dump_t ;
typedef int qlnx_reg_rd_wr_t ;
typedef int qlnx_perm_mac_addr_t ;
typedef int qlnx_pcicfg_rd_wr_t ;
typedef int qlnx_nvram_t ;
typedef int qlnx_lldp_sys_tlvs_t ;
typedef int qlnx_idle_chk_t ;
struct TYPE_21__ {int num_hwfns; } ;
struct TYPE_23__ {TYPE_1__ cdev; struct ifnet* ifp; } ;
typedef TYPE_3__ qlnx_host_t ;
typedef int qlnx_grcdump_t ;
typedef int qlnx_get_regs_t ;
typedef int qlnx_drvinfo_t ;
typedef int qlnx_dev_setting_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_3__*,int,TYPE_2__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,int *) ;
 int FUNC_10 (TYPE_3__*,int *) ;
 int FUNC_11 (TYPE_3__*,int *) ;
 int FUNC_12 (TYPE_3__*,int *) ;
 int FUNC_13 (TYPE_3__*,int *) ;
 int FUNC_14 (TYPE_3__*,int *) ;

__attribute__((used)) static int
FUNC_15(struct cdev *VAR_2, u_long VAR_3, caddr_t VAR_4, int VAR_5,
 struct thread *VAR_6)
{
 qlnx_host_t *VAR_7;
 int VAR_8 = 0;
 struct ifnet *VAR_9;
 qlnx_trace_t *VAR_10;
 int VAR_11;

 if ((VAR_7 = (qlnx_host_t *)VAR_2->si_drv1) == ((void*)0))
  return VAR_1;

 VAR_9 = VAR_7->ifp;

 switch (VAR_3) {

 case 138:
  FUNC_3(VAR_7, (qlnx_grcdump_t *)VAR_4);
  break;

 case 139:
  VAR_8 = FUNC_2(VAR_7, (qlnx_grcdump_t *)VAR_4);
  break;

 case 136:
  FUNC_5(VAR_7, (qlnx_idle_chk_t *)VAR_4);
  break;

 case 137:
  VAR_8 = FUNC_4(VAR_7, (qlnx_idle_chk_t *)VAR_4);
  break;

 case 141:
  VAR_8 = FUNC_1(VAR_7, (qlnx_drvinfo_t *)VAR_4);
  break;

 case 142:
  VAR_8 = FUNC_0(VAR_7, (qlnx_dev_setting_t *)VAR_4);
  break;

 case 140:
  VAR_8 = FUNC_6(VAR_7, (qlnx_get_regs_t *)VAR_4);
  break;

 case 134:
  VAR_8 = FUNC_10(VAR_7, (qlnx_nvram_t *)VAR_4);
  break;

 case 132:
  VAR_8 = FUNC_12(VAR_7, (qlnx_reg_rd_wr_t *)VAR_4);
  break;

 case 133:
  VAR_8 = FUNC_11(VAR_7, (qlnx_pcicfg_rd_wr_t *)VAR_4);
  break;

 case 135:
  FUNC_9(VAR_7, (qlnx_perm_mac_addr_t *)VAR_4);
  break;

 case 130:
  FUNC_14(VAR_7, (qlnx_storm_stats_dump_t *)VAR_4);
  break;

 case 128:
  FUNC_8(VAR_7, (qlnx_trace_t *)VAR_4);
  break;

 case 129:
  VAR_10 = (qlnx_trace_t *)VAR_4;

  for (VAR_11 = 0; VAR_11 < VAR_7->cdev.num_hwfns; VAR_11++) {

   if (VAR_10->size[VAR_11] && VAR_10->cmd && VAR_10->buffer[VAR_11])
    VAR_8 = FUNC_7(VAR_7, VAR_11, VAR_10);

   if (VAR_8)
    break;
  }
  break;







 default:
  VAR_8 = VAR_0;
  break;
 }

 return (VAR_8);
}
