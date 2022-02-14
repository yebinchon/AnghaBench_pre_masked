
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_short ;
typedef int u_long ;
struct sockaddr_in {char* mnt_dir; char* mnt_opts; char* mnt_type; int sin_port; int sin_addr; int sin_family; int mnt_fsname; } ;
typedef int sin ;
struct TYPE_11__ {int knconf; int * addr; } ;
typedef TYPE_1__ nfs_args_t ;
struct TYPE_12__ {int mf_flags; char* mf_mount; } ;
typedef TYPE_2__ mntfs ;
typedef struct sockaddr_in mntent_t ;
typedef int mnt ;
typedef int fs_hostname ;
typedef int caddr_t ;
struct TYPE_13__ {int am_path; scalar_t__ am_autofs_fh; } ;
typedef TYPE_3__ am_node ;
typedef int am_nfs_handle_t ;
struct TYPE_15__ {int flags; } ;
struct TYPE_14__ {int xp_ltaddr; } ;
typedef int MTYPE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int,int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sockaddr_in*) ;
 int FUNC_4 (struct sockaddr_in*) ;
 int FUNC_5 (TYPE_1__*,struct sockaddr_in*) ;
 int FUNC_6 (struct sockaddr_in*) ;
 int FUNC_7 (TYPE_1__*,struct sockaddr_in*,int,int *,struct sockaddr_in*,int ,char*,int *,char*,int ) ;
 int VAR_20 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (char*,int *) ;
 int FUNC_11 () ;
 TYPE_6__ VAR_21 ;
 int FUNC_12 (struct sockaddr_in*,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct sockaddr_in*,int ,int) ;
 int VAR_22 ;
 int FUNC_15 (struct sockaddr_in*,int,int ,int,int ,int ,int *,int ,int) ;
 int VAR_23 ;
 int VAR_24 ;
 int * VAR_25 ;
 TYPE_5__* VAR_26 ;
 int VAR_27 ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 (TYPE_1__*,int ) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*,int,char*,int ,int ,char*) ;
 int FUNC_20 (char*,char*,int) ;

int
FUNC_21(am_node *VAR_28, mntfs *VAR_29, char *VAR_30)
{
  char VAR_31[VAR_8 + VAR_9 + 1];
  int VAR_32, VAR_33 = 0, VAR_34;
  int VAR_35 = VAR_29->mf_flags & VAR_11;
  char *VAR_36 = VAR_29->mf_mount;
  mntent_t VAR_37;
  MTYPE_TYPE VAR_38;
  int VAR_39 = 0;
  u_long VAR_40 = FUNC_9(VAR_24);

  FUNC_14(&VAR_37, 0, sizeof(VAR_37));
  VAR_37.mnt_dir = VAR_36;
  VAR_37.mnt_fsname = VAR_27;
  VAR_37.mnt_opts = VAR_30;
  {
    VAR_38 = VAR_15;






    VAR_37.mnt_type = VAR_6;
  }

  VAR_32 = FUNC_12(&VAR_37, VAR_13);
  if (VAR_32 <= 0)
    VAR_32 = 2;
  FUNC_19(VAR_31, sizeof(VAR_31), "pid%ld@%s:%s",
     FUNC_11(), FUNC_1(), VAR_36);



  if (FUNC_18(VAR_31) >= VAR_8)
    FUNC_20(VAR_31 + VAR_8 - 3, "..",
      sizeof(VAR_31) - VAR_8 + 3);
  VAR_34 = FUNC_6(&VAR_37);




  VAR_34 |= FUNC_4(&VAR_37);

again:
  if (!(VAR_29->mf_flags & VAR_10)) {
    nfs_args_t VAR_41;
    am_nfs_handle_t *VAR_42, VAR_43;

    u_short VAR_44;
    struct sockaddr_in VAR_45;





    VAR_42 = FUNC_10(VAR_36, &VAR_43);
    if (!VAR_42) {
      FUNC_16(VAR_18, "Can't find root file handle for %s", VAR_36);
      return VAR_5;
    }





    FUNC_14(&VAR_45, 0, sizeof(VAR_45));

    VAR_45.sin_family = VAR_0;
    VAR_45.sin_addr = VAR_23;
    VAR_44 = FUNC_12(&VAR_37, VAR_12);
    if (VAR_44) {
      VAR_45.sin_port = FUNC_13(VAR_44);
    } else {
      FUNC_16(VAR_17, "no port number specified for %s", VAR_36);
      return VAR_5;
    }
    FUNC_7(&VAR_41,
       &VAR_37,
       VAR_34,
       ((void*)0),
       &VAR_45,
       VAR_40,
       "udp",
       VAR_42,
       VAR_31,
       VAR_27);







    FUNC_5(&VAR_41, &VAR_37);

    if (FUNC_2(VAR_4)) {
      FUNC_17(&VAR_41, 0);
      FUNC_16(VAR_16, "Generic mount flags 0x%x", VAR_34);
    }


    VAR_33 = FUNC_15(&VAR_37, VAR_34, (caddr_t) &VAR_41,
       VAR_32, VAR_38, 0, ((void*)0), VAR_22, VAR_35);
  }
  if (VAR_33 == 0 || VAR_39)
     return VAR_33;





  if (VAR_21.flags & VAR_3) {
    switch (VAR_20) {
    case 128:
    case 129:
      VAR_39 = VAR_20;
      FUNC_16(VAR_19, "Mount %s failed (%m); force unmount.", VAR_28->am_path);
      if ((VAR_33 = FUNC_0(VAR_28->am_path, VAR_22,
        VAR_2 | VAR_1)) < 0) {
 FUNC_16(VAR_19, "Forced umount %s failed: %m.", VAR_28->am_path);
 VAR_20 = VAR_39;
      } else
 goto again;
    default:
      break;
    }
  }

  return VAR_33;
}
