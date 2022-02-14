
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int voidp ;
struct TYPE_5__ {char* mnt_dir; char* mnt_fsname; char const* mnt_type; char* mnt_opts; } ;
typedef TYPE_1__ mntent_t ;
typedef int mnt ;
typedef int ext_args_t ;
typedef int ext_args ;
typedef int caddr_t ;
typedef char* MTYPE_TYPE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int,int ,int ,char*,int ,int *,int ,int) ;

__attribute__((used)) static int
FUNC_4(char *VAR_1, char *VAR_2, char *VAR_3, int VAR_4, char *
    VAR_5, const char *VAR_6)
{
  ext_args_t VAR_7;
  mntent_t VAR_8;
  int VAR_9;




  MTYPE_TYPE VAR_10 = VAR_5;

  FUNC_2((voidp) &VAR_7, 0, sizeof(VAR_7));




  FUNC_2((voidp) &VAR_8, 0, sizeof(VAR_8));
  VAR_8.mnt_dir = VAR_1;
  VAR_8.mnt_fsname = VAR_2;
  VAR_8.mnt_type = VAR_6;
  VAR_8.mnt_opts = VAR_3;

  VAR_9 = FUNC_1(&VAR_8);
  return FUNC_3(&VAR_8, VAR_9, (caddr_t) &VAR_7, 0, VAR_10, 0, ((void*)0), VAR_0, VAR_4);
}
