
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_mount_args {int rwflag; int dir; int specialfile; int filesystemtype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,int,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int,char*,char*,char*,char*,char*,char*,int *) ;
 char* FUNC_3 (int,int ,int ) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;

int
FUNC_6(struct thread *VAR_12, struct linux_mount_args *VAR_13)
{
 char VAR_14[VAR_4];
 char *VAR_15, *VAR_16;
 int VAR_17, VAR_18;

 VAR_15 = FUNC_3(VAR_5, VAR_10, VAR_11);
 VAR_16 = FUNC_3(VAR_5, VAR_10, VAR_11);
 VAR_17 = FUNC_0(VAR_13->filesystemtype, VAR_14, VAR_4 - 1,
     ((void*)0));
 if (VAR_17 != 0)
  goto out;
 VAR_17 = FUNC_0(VAR_13->specialfile, VAR_16, VAR_5 - 1, ((void*)0));
 if (VAR_17 != 0)
  goto out;
 VAR_17 = FUNC_0(VAR_13->dir, VAR_15, VAR_5 - 1, ((void*)0));
 if (VAR_17 != 0)
  goto out;

 if (FUNC_4(VAR_14, "ext2") == 0) {
  FUNC_5(VAR_14, "ext2fs");
 } else if (FUNC_4(VAR_14, "proc") == 0) {
  FUNC_5(VAR_14, "linprocfs");
 } else if (FUNC_4(VAR_14, "vfat") == 0) {
  FUNC_5(VAR_14, "msdosfs");
 }

 VAR_18 = 0;

 if ((VAR_13->rwflag & 0xffff0000) == 0xc0ed0000) {




  if (VAR_13->rwflag & VAR_2)
   VAR_18 |= VAR_8;
  if (VAR_13->rwflag & VAR_1)
   VAR_18 |= VAR_7;
  if (VAR_13->rwflag & VAR_0)
   VAR_18 |= VAR_6;
  if (VAR_13->rwflag & VAR_3)
   VAR_18 |= VAR_9;
 }

 VAR_17 = FUNC_2(VAR_18,
     "fstype", VAR_14,
     "fspath", VAR_15,
     "from", VAR_16,
     ((void*)0));
out:
 FUNC_1(VAR_15, VAR_10);
 FUNC_1(VAR_16, VAR_10);
 return (VAR_17);
}
