
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int vol_state; int osb_mount_event; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct ocfs2_super *VAR_4, int VAR_5)
{



 FUNC_2(VAR_4->osb_mount_event,
    (!VAR_5 && FUNC_0(&VAR_4->vol_state) == VAR_2) ||
     FUNC_0(&VAR_4->vol_state) == VAR_3 ||
     FUNC_0(&VAR_4->vol_state) == VAR_1);




 if (FUNC_0(&VAR_4->vol_state) == VAR_1) {
  FUNC_1(0, "mount error, exiting!\n");
  return -VAR_0;
 }

 return 0;
}
