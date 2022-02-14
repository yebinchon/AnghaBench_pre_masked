
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zfs_handle_t ;
struct be_mount_info {char* be; char* mountpoint; int mntflags; int deepmount; scalar_t__ depth; TYPE_1__* lbh; } ;
typedef int mnt_temp ;
struct TYPE_6__ {int lzh; } ;
typedef TYPE_1__ libbe_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (int *,struct be_mount_info*) ;
 int FUNC_2 (TYPE_1__*,char*,char*) ;
 scalar_t__ FUNC_3 (int ,char*,int *) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ,char*,int ) ;

int
FUNC_9(libbe_handle_t *VAR_9, char *VAR_10, char *VAR_11, int VAR_12,
    char *VAR_13)
{
 char VAR_14[VAR_4];
 char VAR_15[VAR_4];
 int VAR_16, VAR_17;
 int VAR_18;
 struct be_mount_info VAR_19;
 zfs_handle_t *VAR_20;

 if ((VAR_18 = FUNC_2(VAR_9, VAR_10, VAR_14)) != 0)
  return (FUNC_5(VAR_9, VAR_18));

 if ((VAR_18 = FUNC_0(VAR_9, VAR_10)) != 0)
  return (FUNC_5(VAR_9, VAR_18));

 if (FUNC_3(VAR_9->lzh, VAR_14, ((void*)0)))
  return (FUNC_5(VAR_9, VAR_1));

 VAR_17 = (VAR_12 & VAR_5) ? 1 : 0;
 VAR_16 = (VAR_12 & VAR_6) ? VAR_7 : 0;


 if (VAR_11 == ((void*)0)) {
  FUNC_6(VAR_15, "/tmp/be_mount.XXXX", sizeof(VAR_15));
  if (FUNC_4(VAR_15) == ((void*)0))
   return (FUNC_5(VAR_9, VAR_0));
 }

 if ((VAR_20 = FUNC_8(VAR_9->lzh, VAR_14, VAR_8)) == ((void*)0))
  return (FUNC_5(VAR_9, VAR_3));

 VAR_19.lbh = VAR_9;
 VAR_19.be = VAR_14;
 VAR_19.mountpoint = (VAR_11 == ((void*)0)) ? VAR_15 : VAR_11;
 VAR_19.mntflags = VAR_16;
 VAR_19.deepmount = VAR_17;
 VAR_19.depth = 0;

 if((VAR_18 = FUNC_1(VAR_20, &VAR_19) != 0)) {
  FUNC_7(VAR_20);
  return (VAR_18);
 }
 FUNC_7(VAR_20);

 if (VAR_13 != ((void*)0))
  FUNC_6(VAR_13, VAR_11 == ((void*)0) ? VAR_15 : VAR_11,
      VAR_4);

 return (VAR_2);
}
