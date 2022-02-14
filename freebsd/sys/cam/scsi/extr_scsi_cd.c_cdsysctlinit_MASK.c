
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpstr2 ;
typedef int tmpstr ;
struct cd_softc {int minimum_command_size; int * sysctl_tree; int sysctl_ctx; int flags; } ;
struct cam_periph {int unit_number; scalar_t__ softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *,int ,int ,char*,int ,int ,char*,char*) ;
 int FUNC_1 (int *,int ,int ,char*,int,int *,int ,int ,char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (struct cam_periph*) ;
 int FUNC_5 (struct cam_periph*) ;
 int VAR_6 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(void *VAR_7, int VAR_8)
{
 struct cam_periph *VAR_9;
 struct cd_softc *VAR_10;
 char VAR_11[32], VAR_12[16];

 VAR_9 = (struct cam_periph *)VAR_7;
 if (FUNC_4(VAR_9) != 0)
  return;

 VAR_10 = (struct cd_softc *)VAR_9->softc;
 FUNC_7(VAR_11, sizeof(VAR_11), "CAM CD unit %d", VAR_9->unit_number);
 FUNC_7(VAR_12, sizeof(VAR_12), "%d", VAR_9->unit_number);

 FUNC_8(&VAR_10->sysctl_ctx);
 VAR_10->flags |= VAR_0;
 VAR_10->sysctl_tree = FUNC_0(&VAR_10->sysctl_ctx,
  FUNC_3(VAR_5), VAR_4,
  VAR_12, VAR_1, 0, VAR_11, "device_index");

 if (VAR_10->sysctl_tree == ((void*)0)) {
  FUNC_6("cdsysctlinit: unable to allocate sysctl tree\n");
  FUNC_5(VAR_9);
  return;
 }





 FUNC_1(&VAR_10->sysctl_ctx,FUNC_2(VAR_10->sysctl_tree),
  VAR_4, "minimum_cmd_size", VAR_3 | VAR_2,
  &VAR_10->minimum_command_size, 0, VAR_6, "I",
  "Minimum CDB size");

 FUNC_5(VAR_9);
}
