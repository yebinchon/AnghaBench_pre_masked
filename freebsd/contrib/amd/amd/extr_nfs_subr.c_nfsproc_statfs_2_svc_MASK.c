
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct svc_req {int dummy; } ;
struct TYPE_22__ {int sfrok_tsize; int sfrok_bsize; scalar_t__ sfrok_bavail; scalar_t__ sfrok_bfree; scalar_t__ sfrok_blocks; } ;
struct TYPE_17__ {TYPE_6__ sfr_reply_u; } ;
struct TYPE_21__ {int sfr_status; TYPE_1__ sfr_u; } ;
typedef TYPE_5__ nfsstatfsres ;
typedef TYPE_6__ nfsstatfsokres ;
struct TYPE_23__ {scalar_t__ mnt_opts; } ;
typedef TYPE_7__ mntent_t ;
struct TYPE_20__ {int s_statfs; } ;
struct TYPE_24__ {TYPE_4__ am_stats; TYPE_3__* am_al; int am_path; } ;
typedef TYPE_8__ am_node ;
typedef int am_nfs_fh ;
struct TYPE_19__ {TYPE_2__* al_mnt; } ;
struct TYPE_18__ {scalar_t__ mf_mopts; } ;
struct TYPE_16__ {int d_drops; } ;
struct TYPE_15__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_14__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_7__*,char*) ;
 int FUNC_2 (TYPE_8__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 TYPE_8__* FUNC_3 (int *,int*,int ) ;
 TYPE_10__ VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,...) ;

nfsstatfsres *
FUNC_6(am_nfs_fh *VAR_7, struct svc_req *VAR_8)
{
  static nfsstatfsres VAR_9;
  am_node *VAR_10;
  int VAR_11;
  mntent_t VAR_12;

  if (FUNC_0(VAR_1))
    FUNC_5(VAR_4, "statfs:");

  VAR_10 = FUNC_3(VAR_7, &VAR_11, VAR_3);
  if (VAR_10 == ((void*)0)) {
    if (VAR_11 < 0) {
      VAR_5.d_drops++;
      return 0;
    }
    VAR_9.sfr_status = FUNC_4(VAR_11);
  } else {
    nfsstatfsokres *VAR_13;
    if (FUNC_0(VAR_1))
      FUNC_5(VAR_4, "\tstat_fs(%s)", VAR_10->am_path);




    VAR_13 = &VAR_9.sfr_u.sfr_reply_u;

    VAR_13->sfrok_tsize = 1024;
    VAR_13->sfrok_bsize = 1024;


    if ((VAR_6.flags & VAR_0) &&
 VAR_10->am_al->al_mnt && VAR_10->am_al->al_mnt->mf_mopts) {
      VAR_12.mnt_opts = VAR_10->am_al->al_mnt->mf_mopts;
      if (FUNC_1(&VAR_12, "browsable")) {
 FUNC_2(VAR_10,
     &VAR_13->sfrok_blocks,
     &VAR_13->sfrok_bfree,
     &VAR_13->sfrok_bavail);
      }
    } else {
      VAR_13->sfrok_blocks = 0;
      VAR_13->sfrok_bfree = 0;
      VAR_13->sfrok_bavail = 0;
    }

    VAR_9.sfr_status = VAR_2;
    VAR_10->am_stats.s_statfs++;
  }

  return &VAR_9;
}
