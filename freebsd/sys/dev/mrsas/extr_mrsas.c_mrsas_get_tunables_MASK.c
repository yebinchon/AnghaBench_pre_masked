
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpstr ;
struct mrsas_softc {int mrsas_debug; int mrsas_fw_fault_check_delay; int drv_stream_detection; int lb_pending_cmds; int mrsas_dev; scalar_t__ block_sync_cache; scalar_t__ reset_in_progress; scalar_t__ reset_count; int mrsas_io_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct mrsas_softc *VAR_6)
{
 char VAR_7[80];


 VAR_6->mrsas_debug =
  (VAR_1 | VAR_4 | VAR_2 | VAR_5 | VAR_0);
 VAR_6->mrsas_io_timeout = VAR_3;
 VAR_6->mrsas_fw_fault_check_delay = 1;
 VAR_6->reset_count = 0;
 VAR_6->reset_in_progress = 0;
 VAR_6->block_sync_cache = 0;
 VAR_6->drv_stream_detection = 1;




 FUNC_0("hw.mrsas.debug_level", &VAR_6->mrsas_debug);




 FUNC_0("hw.mrsas.lb_pending_cmds", &VAR_6->lb_pending_cmds);


 FUNC_2(VAR_7, sizeof(VAR_7), "dev.mrsas.%d.debug_level",
     FUNC_1(VAR_6->mrsas_dev));
 FUNC_0(VAR_7, &VAR_6->mrsas_debug);
}
