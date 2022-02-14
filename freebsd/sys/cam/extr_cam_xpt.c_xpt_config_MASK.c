
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int boot_delay; int boot_callout; int xpt_taskq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int ,int ,int *,int ) ;
 scalar_t__ VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ,int *,int *,int *,int ,int ,char*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int *,int,int ,char*) ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (int **,int *,int,int,int) ;
 int FUNC_7 () ;
 int VAR_11 ;
 TYPE_1__ VAR_12 ;

__attribute__((used)) static void
FUNC_8(void *VAR_13)
{



 if (FUNC_5(&VAR_12.xpt_taskq, 1, VAR_5, "CAM taskq"))
  FUNC_4("xpt_config: failed to create taskqueue thread.\n");


 if (VAR_7 != VAR_2) {
  if (FUNC_6(&VAR_8, ((void*)0),
        VAR_0, VAR_3,
        VAR_1) != VAR_4) {
   FUNC_4("xpt_config: xpt_create_path() failed for debug"
          " target %d:%d:%d, debugging disabled\n",
          VAR_0, VAR_3, VAR_1);
   VAR_7 = VAR_2;
  }
 } else
  VAR_8 = ((void*)0);

 FUNC_3(1);
 FUNC_7();
 FUNC_0(&VAR_12.boot_callout, 1);
 FUNC_1(&VAR_12.boot_callout, VAR_6 * VAR_12.boot_delay, 0,
     VAR_10, ((void*)0), 0);

 if (FUNC_2(VAR_11, ((void*)0), &VAR_9, ((void*)0), 0, 0,
     "cam", "scanner")) {
  FUNC_4("xpt_config: failed to create rescan thread.\n");
 }
}
