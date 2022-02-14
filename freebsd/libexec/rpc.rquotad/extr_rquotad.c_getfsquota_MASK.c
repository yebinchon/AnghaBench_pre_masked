
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quotafile {int dummy; } ;
struct fstab {char* fs_file; char* fs_mntops; char* fs_vfstype; } ;
struct dqblk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct quotafile*) ;
 struct quotafile* FUNC_1 (struct fstab*,int,int ) ;
 scalar_t__ FUNC_2 (struct quotafile*,struct dqblk*,long) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int
FUNC_4(int VAR_4, long VAR_5, char *VAR_6, struct dqblk *VAR_7)
{
 struct quotafile *VAR_8;
 int VAR_9;
 static char VAR_10[] = "";
 struct fstab VAR_11;

 VAR_11.fs_file = VAR_6;
 VAR_11.fs_mntops = VAR_10;
 VAR_11.fs_vfstype = VAR_10;

 if (VAR_4 != VAR_2 && VAR_4 != VAR_0)
  return (0);

 VAR_8 = FUNC_1(&VAR_11, VAR_4, VAR_1);
 if (VAR_3)
  FUNC_3("quota_open(<%s, %s>, %d) returned %p",
        VAR_11.fs_file, VAR_11.fs_mntops, VAR_4,
        VAR_8);
 if (VAR_8 == ((void*)0))
  return (0);

 VAR_9 = FUNC_2(VAR_8, VAR_7, VAR_5) == 0;
 FUNC_0(VAR_8);
 if (VAR_3)
  FUNC_3("getfsquota(%d, %ld, %s, %p) -> %d",
        VAR_4, VAR_5, VAR_6, VAR_7, VAR_9);
 return (VAR_9);
}
