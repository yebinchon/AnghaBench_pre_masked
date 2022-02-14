
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char* voidp ;
struct TYPE_8__ {char* mnt_dir; char* mnt_fsname; char* mnt_opts; int mnt_type; } ;
typedef TYPE_2__ mntent_t ;
typedef int mnt ;
typedef int caddr_t ;
struct TYPE_7__ {int opt_flags; int opt_fgsize; int opt_popsize; } ;
struct TYPE_9__ {char* cfs_fsid; char* cfs_cacheid; char* cfs_cachedir; char* cfs_backfs; scalar_t__ cfs_acdirmax; scalar_t__ cfs_acdirmin; scalar_t__ cfs_acregmax; scalar_t__ cfs_acregmin; TYPE_1__ cfs_options; } ;
typedef TYPE_3__ cachefs_args_t ;
typedef int ca ;
typedef int MTYPE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int ,int) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_2__*,int,int ,int ,int ,int ,int *,int ,int) ;
 char* FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_6(char *VAR_7, char *VAR_8, char *VAR_9,
       char *VAR_10, int VAR_11)
{
  cachefs_args_t VAR_12;
  mntent_t VAR_13;
  int VAR_14;
  char *VAR_15;
  MTYPE_TYPE VAR_16 = VAR_5;

  FUNC_2((voidp) &VAR_12, 0, sizeof(VAR_12));




  FUNC_2((voidp) &VAR_13, 0, sizeof(VAR_13));
  VAR_13.mnt_dir = VAR_7;
  VAR_13.mnt_fsname = VAR_8;
  VAR_13.mnt_type = VAR_4;
  VAR_13.mnt_opts = VAR_10;

  VAR_14 = FUNC_1(&VAR_13);
  VAR_12.cfs_options.opt_flags = VAR_1 | VAR_0;

  VAR_12.cfs_options.opt_popsize = VAR_3;

  VAR_12.cfs_options.opt_fgsize = VAR_2;


  VAR_12.cfs_fsid = VAR_9;


  FUNC_2(VAR_12.cfs_cacheid, 0, sizeof(VAR_12.cfs_cacheid));





  FUNC_5(VAR_12.cfs_cacheid, sizeof(VAR_12.cfs_cacheid),
     "%s:%s", VAR_12.cfs_fsid, VAR_7);

  VAR_15 = VAR_12.cfs_cacheid;
  while ((VAR_15 = FUNC_4(VAR_15, "/")) != ((void*)0))
    *VAR_15 = '_';


  VAR_12.cfs_cachedir = VAR_9;


  VAR_12.cfs_backfs = VAR_8;


  VAR_12.cfs_acregmin = 0;
  VAR_12.cfs_acregmax = 0;
  VAR_12.cfs_acdirmin = 0;
  VAR_12.cfs_acdirmax = 0;




  return FUNC_3(&VAR_13, VAR_14, (caddr_t) &VAR_12, 0, VAR_16, 0, ((void*)0), VAR_6, VAR_11);
}
