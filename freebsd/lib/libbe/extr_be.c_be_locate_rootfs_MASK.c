
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct statfs {int dummy; } ;
struct extmnttab {int mnt_fstype; } ;
struct TYPE_3__ {int rootfs; int lzh; } ;
typedef TYPE_1__ libbe_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,struct statfs*) ;
 int FUNC_1 (struct statfs*,struct extmnttab*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_7(libbe_handle_t *VAR_2)
{
 struct statfs VAR_3;
 struct extmnttab VAR_4;
 zfs_handle_t *VAR_5;







 if (FUNC_0("/", &VAR_3) == 0) {
  FUNC_1(&VAR_3, &VAR_4);
  if (FUNC_2(VAR_4.mnt_fstype, VAR_0) != 0)
   return (1);
 } else
  return (1);
 VAR_5 = FUNC_6(VAR_2->lzh, "/", VAR_1);
 if (VAR_5 == ((void*)0))
  return (1);

 FUNC_3(VAR_2->rootfs, FUNC_5(VAR_5), sizeof(VAR_2->rootfs));
 FUNC_4(VAR_5);
 return (0);
}
