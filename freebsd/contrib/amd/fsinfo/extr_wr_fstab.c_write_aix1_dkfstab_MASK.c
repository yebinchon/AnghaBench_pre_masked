
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* d_mountpt; char* d_dev; char* d_fstype; char* d_log; char* d_opts; TYPE_1__* d_host; } ;
typedef TYPE_2__ disk_fs ;
struct TYPE_4__ {int h_hostname; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,char*,char*,char*,char*,char*,char*,char*) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_0, disk_fs *VAR_1)
{
  char *VAR_2 = FUNC_3(VAR_1->d_host->h_hostname);
  char *VAR_3 = FUNC_2(VAR_2, '.');

  if (VAR_3)
    *VAR_3 = '\0';

  FUNC_1(VAR_0, "\n%s:\n\tdev = %s\n\tvfs = %s\n\ttype = %s\n\tlog = %s\n\tvol = %s\n\topts = %s\n\tmount = true\n\tcheck = true\n\tfree = false\n",
   VAR_1->d_mountpt,
   VAR_1->d_dev,
   VAR_1->d_fstype,
   VAR_1->d_fstype,
   VAR_1->d_log,
   VAR_1->d_mountpt,
   VAR_1->d_opts);
  FUNC_0(VAR_2);
}
