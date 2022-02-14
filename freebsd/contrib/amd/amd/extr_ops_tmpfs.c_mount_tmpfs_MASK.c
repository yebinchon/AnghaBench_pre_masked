
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int voidp ;
struct TYPE_7__ {int ta_root_mode; void* ta_root_gid; void* ta_root_uid; void* ta_size_max; void* ta_nodes_max; int ta_version; } ;
typedef TYPE_1__ tmpfs_args_t ;
typedef int tmpfs_args ;
struct TYPE_8__ {char* mnt_dir; char* mnt_fsname; char* mnt_opts; int mnt_type; } ;
typedef TYPE_2__ mntent_t ;
typedef int mnt ;
typedef int caddr_t ;
typedef int MTYPE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (TYPE_2__*,char*) ;
 void* FUNC_1 (char const*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_2__*,int,int ,int ,int ,int ,int *,int ,int) ;
 int FUNC_6 (char const*,int *,int) ;

__attribute__((used)) static int
FUNC_7(char *VAR_4, char *VAR_5, char *VAR_6, int VAR_7)
{
  tmpfs_args_t VAR_8;
  mntent_t VAR_9;
  int VAR_10;
  const char *VAR_11;




  MTYPE_TYPE VAR_12 = VAR_1;

  VAR_11 = ((void*)0);
  FUNC_4((voidp) &VAR_8, 0, sizeof(VAR_8));




  FUNC_4((voidp) &VAR_9, 0, sizeof(VAR_9));
  VAR_9.mnt_dir = VAR_4;
  VAR_9.mnt_fsname = VAR_5;
  VAR_9.mnt_type = VAR_0;
  VAR_9.mnt_opts = VAR_6;

  VAR_10 = FUNC_3(&VAR_9);
  return FUNC_5(&VAR_9, VAR_10, (caddr_t) &VAR_8, 0, VAR_12, 0, ((void*)0), VAR_3, VAR_7);
}
