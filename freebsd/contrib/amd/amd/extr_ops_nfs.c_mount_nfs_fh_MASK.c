
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int voidp ;
typedef scalar_t__ u_long ;
typedef int transp_timeo_opts ;
typedef int transp_retrans_opts ;
typedef int nfs_args_t ;
typedef int nfs4_args_t ;
struct TYPE_15__ {int mf_flags; scalar_t__* mf_mopts; scalar_t__* mf_remopts; TYPE_4__* mf_server; } ;
typedef TYPE_2__ mntfs ;
struct TYPE_16__ {char* mnt_dir; char* mnt_fsname; char* mnt_opts; void* mnt_type; } ;
typedef TYPE_3__ mntent_t ;
typedef int mnt ;
typedef int host ;
struct TYPE_17__ {scalar_t__ fs_version; char* fs_proto; TYPE_10__* fs_ip; } ;
typedef TYPE_4__ fserver ;
typedef int am_nfs_handle_t ;
struct TYPE_18__ {scalar_t__* amfs_auto_timeo; scalar_t__* amfs_auto_retrans; } ;
struct TYPE_14__ {int s_addr; } ;
struct TYPE_13__ {TYPE_1__ sin_addr; } ;
typedef int MTYPE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (void*,TYPE_3__*,int,int *,TYPE_10__*,scalar_t__,char*,int *,char*,char*) ;
 int FUNC_6 (void*,scalar_t__) ;
 TYPE_8__ VAR_22 ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int) ;
 int VAR_23 ;
 int FUNC_10 (TYPE_3__*,int,void*,int,int ,scalar_t__,char*,int ,int) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (void*,scalar_t__) ;
 char* FUNC_13 (char*,char*,char*,scalar_t__*) ;
 char* FUNC_14 (char*,char) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,int,char*,int ,scalar_t__) ;
 int FUNC_17 (char*,char*,int) ;

int
FUNC_18(am_nfs_handle_t *VAR_24, char *VAR_25, char *VAR_26, mntfs *VAR_27)
{
  MTYPE_TYPE VAR_28;
  char *VAR_29;
  char *VAR_30=((void*)0), VAR_31[40], VAR_32[40];
  char VAR_33[VAR_6 + VAR_7 + 2];
  fserver *VAR_34 = VAR_27->mf_server;
  u_long VAR_35 = VAR_34->fs_version;
  char *VAR_36 = VAR_34->fs_proto;
  int VAR_37 = VAR_27->mf_flags & VAR_8;
  int VAR_38;
  int VAR_39;
  int VAR_40;
  int VAR_41 = VAR_0;
  mntent_t VAR_42;
  void *VAR_43;
  nfs_args_t VAR_44;
  if (!(VAR_29 = FUNC_14(VAR_26, ':')))
    return VAR_4;



  FUNC_17(VAR_33, VAR_26, sizeof(VAR_33));
  VAR_31[0] = VAR_32[0] = '\0';
  if (FUNC_0(VAR_36, "udp"))
    VAR_41 = VAR_2;
  else if (FUNC_0(VAR_36, "tcp"))
    VAR_41 = VAR_1;
  if (VAR_41 != VAR_0) {
    if (VAR_22.amfs_auto_timeo[VAR_41] > 0)
      FUNC_16(VAR_31, sizeof(VAR_31), "%s=%d,",
  VAR_11, VAR_22.amfs_auto_timeo[VAR_41]);
    if (VAR_22.amfs_auto_retrans[VAR_41] > 0)
      FUNC_16(VAR_32, sizeof(VAR_32), "%s=%d,",
  VAR_9, VAR_22.amfs_auto_retrans[VAR_41]);
  }

  if (VAR_27->mf_remopts && *VAR_27->mf_remopts &&
      !FUNC_8(VAR_34->fs_ip->sin_addr.s_addr)) {
    FUNC_11(VAR_21, "Using remopts=\"%s\"", VAR_27->mf_remopts);

    VAR_30 = FUNC_13(VAR_30, VAR_31, VAR_32, VAR_27->mf_remopts);
  } else {

    VAR_30 = FUNC_13(VAR_30, VAR_31, VAR_32, VAR_27->mf_mopts);
  }

  FUNC_9((voidp) &VAR_42, 0, sizeof(VAR_42));
  VAR_42.mnt_dir = VAR_25;
  VAR_42.mnt_fsname = VAR_26;
  VAR_42.mnt_opts = VAR_30;
  {
    VAR_43 = &VAR_44;
    VAR_28 = VAR_15;
    VAR_42.mnt_type = VAR_12;
  }
  FUNC_11(VAR_21, "mount_nfs_fh: NFS version %d", (int) VAR_35);
  FUNC_11(VAR_21, "mount_nfs_fh: using NFS transport %s", VAR_36);

  VAR_40 = FUNC_7(&VAR_42, VAR_10);
  if (VAR_40 <= 0)
    VAR_40 = 1;

  VAR_39 = FUNC_4(&VAR_42);






   FUNC_5(VAR_43,
      &VAR_42,
      VAR_39,
      ((void*)0),
      VAR_34->fs_ip,
      VAR_35,
      VAR_36,
      VAR_24,
      VAR_33,
      VAR_26);


  if (FUNC_2(VAR_3)) {
    FUNC_12(VAR_43, VAR_35);
    FUNC_11(VAR_20, "Generic mount flags 0x%x used for NFS mount", VAR_39);
  }
  VAR_38 = FUNC_10(&VAR_42, VAR_39, VAR_43, VAR_40, VAR_28,
     VAR_35, VAR_36, VAR_23, VAR_37);
  FUNC_1(VAR_42.mnt_opts);
  FUNC_6(VAR_43, VAR_35);
  return VAR_38;
}
