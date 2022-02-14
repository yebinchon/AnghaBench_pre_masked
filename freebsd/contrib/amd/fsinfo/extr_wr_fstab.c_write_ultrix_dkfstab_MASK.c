
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* d_dev; char* d_mountpt; char* d_fstype; char* d_opts; int d_freq; int d_passno; } ;
typedef TYPE_1__ disk_fs ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*,char*,char*,char*,int,int) ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_0, disk_fs *VAR_1)
{
  FUNC_0(VAR_0, "%s:%s:%s:%s:%d:%d\n",
   VAR_1->d_dev,
   VAR_1->d_mountpt,
   VAR_1->d_fstype,
   VAR_1->d_opts,
   VAR_1->d_freq,
   VAR_1->d_passno);
}
