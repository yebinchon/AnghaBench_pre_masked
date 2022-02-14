
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* fspec; int flags; } ;
typedef TYPE_1__ xfs_args_t ;
typedef int xfs_args ;
typedef int voidp ;
struct TYPE_7__ {char* mnt_dir; char* mnt_fsname; char* mnt_opts; int mnt_type; } ;
typedef TYPE_2__ mntent_t ;
typedef int mnt ;
typedef int caddr_t ;
typedef int MTYPE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,int,int ,int ,int ,int ,int *,int ,int) ;

__attribute__((used)) static int
FUNC_4(char *VAR_3, char *VAR_4, char *VAR_5, int VAR_6)
{
  xfs_args_t VAR_7;
  mntent_t VAR_8;
  int VAR_9;




  MTYPE_TYPE VAR_10 = VAR_1;

  FUNC_2((voidp) &VAR_7, 0, sizeof(VAR_7));




  FUNC_2((voidp) &VAR_8, 0, sizeof(VAR_8));
  VAR_8.mnt_dir = VAR_3;
  VAR_8.mnt_fsname = VAR_4;
  VAR_8.mnt_type = VAR_0;
  VAR_8.mnt_opts = VAR_5;

  VAR_9 = FUNC_1(&VAR_8);
  return FUNC_3(&VAR_8, VAR_9, (caddr_t) &VAR_7, 0, VAR_10, 0, ((void*)0), VAR_2, VAR_6);
}
