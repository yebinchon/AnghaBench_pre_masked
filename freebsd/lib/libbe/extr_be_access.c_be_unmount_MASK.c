
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct be_mount_info {char* be; scalar_t__ depth; int mntflags; int * mountpoint; TYPE_1__* lbh; } ;
struct TYPE_5__ {int lzh; } ;
typedef TYPE_1__ libbe_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,char*,char*) ;
 int FUNC_1 (int *,struct be_mount_info*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,char*,int ) ;

int
FUNC_5(libbe_handle_t *VAR_6, char *VAR_7, int VAR_8)
{
 int VAR_9;
 char VAR_10[VAR_2];
 zfs_handle_t *VAR_11;
 struct be_mount_info VAR_12;

 if ((VAR_9 = FUNC_0(VAR_6, VAR_7, VAR_10)) != 0)
  return (FUNC_2(VAR_6, VAR_9));

 if ((VAR_11 = FUNC_4(VAR_6->lzh, VAR_10, VAR_5)) == ((void*)0))
  return (FUNC_2(VAR_6, VAR_1));

 VAR_12.lbh = VAR_6;
 VAR_12.be = VAR_10;
 VAR_12.mountpoint = ((void*)0);
 VAR_12.mntflags = (VAR_8 & VAR_3) ? VAR_4 : 0;
 VAR_12.depth = 0;

 if ((VAR_9 = FUNC_1(VAR_11, &VAR_12)) != 0) {
  FUNC_3(VAR_11);
  return (VAR_9);
 }

 FUNC_3(VAR_11);
 return (VAR_0);
}
