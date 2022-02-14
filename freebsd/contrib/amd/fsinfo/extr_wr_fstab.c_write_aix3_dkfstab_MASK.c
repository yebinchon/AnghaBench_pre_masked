
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* d_fstype; char* d_dev; char* d_log; char* d_mountpt; char* d_opts; } ;
typedef TYPE_1__ disk_fs ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,char*,char*,char*,char*,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_0, disk_fs *VAR_1)
{
  if (FUNC_1(VAR_1->d_fstype, "jfs") &&
      FUNC_0(VAR_1->d_dev, "/dev/", 5) &&
      !VAR_1->d_log)
    FUNC_2("aix 3 needs a log device for journalled filesystem (jfs) mounts");

  FUNC_3(VAR_0, "\n%s:\n\tdev = %s\n\tvfs = %s\n\ttype = %s\n\tlog = %s\n\tvol = %s\n\topts = %s\n\tmount = true\n\tcheck = true\n\tfree = false\n",
   VAR_1->d_mountpt,
   VAR_1->d_dev,
   VAR_1->d_fstype,
   VAR_1->d_fstype,
   VAR_1->d_log,
   VAR_1->d_mountpt,
   VAR_1->d_opts);
}
