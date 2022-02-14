
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int voidp ;
struct TYPE_7__ {int flags; int ufs_flags; char* fspec; int ufs_pgthresh; } ;
typedef TYPE_1__ ufs_args_t ;
typedef int ufs_args ;
struct TYPE_8__ {char* mnt_dir; char* mnt_fsname; char* mnt_opts; int mnt_type; } ;
typedef TYPE_2__ mntent_t ;
typedef int mnt ;
typedef int caddr_t ;
typedef int MTYPE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*,int,int ,int ,int ,int ,int *,int ,int) ;

__attribute__((used)) static int
FUNC_5(char *VAR_4, char *VAR_5, char *VAR_6, int VAR_7)
{
  ufs_args_t VAR_8;
  mntent_t VAR_9;
  int VAR_10;




  MTYPE_TYPE VAR_11 = VAR_2;

  FUNC_3((voidp) &VAR_8, 0, sizeof(VAR_8));




  FUNC_3((voidp) &VAR_9, 0, sizeof(VAR_9));
  VAR_9.mnt_dir = VAR_4;
  VAR_9.mnt_fsname = VAR_5;
  VAR_9.mnt_type = VAR_1;
  VAR_9.mnt_opts = VAR_6;

  VAR_10 = FUNC_1(&VAR_9);
  return FUNC_4(&VAR_9, VAR_10, (caddr_t) &VAR_8, 0, VAR_11, 0, ((void*)0), VAR_3, VAR_7);
}
