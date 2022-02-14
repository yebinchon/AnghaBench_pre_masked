
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int voidp ;
struct TYPE_5__ {char* mnt_dir; char* mnt_fsname; char* mnt_opts; int mnt_type; } ;
typedef TYPE_1__ mntent_t ;
typedef int mnt ;
typedef int MTYPE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int,int *,int ,int ,int ,int *,int ,int) ;

int
FUNC_4(char *VAR_3, char *VAR_4, char *VAR_5, int VAR_6)
{
  mntent_t VAR_7;
  int VAR_8;




  MTYPE_TYPE VAR_9 = VAR_1;




  FUNC_2((voidp) &VAR_7, 0, sizeof(VAR_7));
  VAR_7.mnt_dir = VAR_3;
  VAR_7.mnt_fsname = VAR_4;
  VAR_7.mnt_type = VAR_0;
  VAR_7.mnt_opts = VAR_5;

  VAR_8 = FUNC_1(&VAR_7);
  return FUNC_3(&VAR_7, VAR_8, ((void*)0), 0, VAR_9, 0, ((void*)0), VAR_2, VAR_6);
}
