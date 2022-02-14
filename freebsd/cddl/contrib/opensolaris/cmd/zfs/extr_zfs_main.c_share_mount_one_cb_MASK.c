
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct TYPE_2__ {int sm_status; int sm_lock; int sm_total; int sm_done; scalar_t__ sm_verbose; int sm_options; int sm_proto; int sm_flags; int sm_op; } ;
typedef TYPE_1__ share_mount_state_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(zfs_handle_t *VAR_1, void *VAR_2)
{
 share_mount_state_t *VAR_3 = VAR_2;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_3->sm_op, VAR_3->sm_flags, VAR_3->sm_proto,
     VAR_0, VAR_3->sm_options);

 FUNC_0(&VAR_3->sm_lock);
 if (VAR_4 != 0)
  VAR_3->sm_status = VAR_4;
 VAR_3->sm_done++;
 if (VAR_3->sm_verbose)
  FUNC_2(VAR_3->sm_done, VAR_3->sm_total);
 FUNC_1(&VAR_3->sm_lock);
 return (VAR_4);
}
