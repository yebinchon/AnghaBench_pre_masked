
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int voidp ;
typedef int u_int ;
struct passwd {void* pw_uid; } ;
struct group {void* gr_gid; } ;
struct TYPE_8__ {char* fspec; int mask; int dirmask; scalar_t__ dsttime; scalar_t__ secondswest; void* gid; void* uid; } ;
typedef TYPE_1__ pcfs_args_t ;
typedef int pcfs_args ;
struct TYPE_9__ {char* mnt_dir; char* mnt_fsname; char* mnt_opts; int mnt_type; } ;
typedef TYPE_2__ mntent_t ;
typedef int mnt ;
typedef int caddr_t ;
typedef int MTYPE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 struct group* FUNC_5 (char*) ;
 struct passwd* FUNC_6 (char*) ;
 char* FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (int ,int ,int) ;
 int VAR_8 ;
 int FUNC_10 (TYPE_2__*,int,int ,int ,int ,int ,int *,int ,int) ;
 int FUNC_11 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_12(char *VAR_9, char *VAR_10, char *VAR_11, int VAR_12)
{
  pcfs_args_t VAR_13;
  mntent_t VAR_14;
  int VAR_15;
  MTYPE_TYPE VAR_16 = VAR_6;

  FUNC_9((voidp) &VAR_13, 0, sizeof(VAR_13));




  FUNC_9((voidp) &VAR_14, 0, sizeof(VAR_14));
  VAR_14.mnt_dir = VAR_9;
  VAR_14.mnt_fsname = VAR_10;
  VAR_14.mnt_type = VAR_5;
  VAR_14.mnt_opts = VAR_11;

  VAR_15 = FUNC_4(&VAR_14);




  if (FUNC_1(VAR_0))
    FUNC_11(VAR_7, "mount_pcfs: flags=0x%x", (u_int) VAR_15);
  return FUNC_10(&VAR_14, VAR_15, (caddr_t) & VAR_13, 0, VAR_16, 0, ((void*)0), VAR_8, VAR_12);
}
