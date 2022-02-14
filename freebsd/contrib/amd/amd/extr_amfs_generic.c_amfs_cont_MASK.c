
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct continuation {TYPE_5__* mp; int al; } ;
typedef scalar_t__ opaque_t ;
struct TYPE_16__ {int mf_flags; int mf_error; TYPE_2__* mf_ops; TYPE_1__* mf_server; } ;
typedef TYPE_4__ mntfs ;
struct TYPE_17__ {scalar_t__ am_error; int am_path; TYPE_3__* am_al; } ;
typedef TYPE_5__ am_node ;
struct TYPE_15__ {TYPE_4__* al_mnt; } ;
struct TYPE_14__ {int fs_type; } ;
struct TYPE_13__ {int fs_version; int fs_proto; } ;
struct TYPE_12__ {int d_merr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int VAR_7 ;
 int FUNC_1 (TYPE_5__*) ;
 TYPE_10__ VAR_8 ;
 int FUNC_2 (struct continuation*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (char*,int ) ;
 int VAR_9 ;
 int FUNC_6 (struct continuation*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (int ,char*,int ,...) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(int VAR_10, int VAR_11, opaque_t VAR_12)
{
  struct continuation *VAR_13 = (struct continuation *) VAR_12;
  am_node *VAR_14 = VAR_13->mp;
  mntfs *VAR_15 = VAR_14->am_al->al_mnt;

  FUNC_5("amfs_cont: '%s'", VAR_14->am_path);




  VAR_15->mf_flags &= ~VAR_5;




  FUNC_8(VAR_14);




  FUNC_11(FUNC_7(VAR_15));




  if (VAR_10 || VAR_11) {






    if (VAR_11) {



      VAR_15->mf_error = VAR_1;
      VAR_15->mf_flags |= VAR_2;
      FUNC_9(VAR_7, "mount for %s got signal %d", VAR_14->am_path, VAR_11);
    } else {
      if (VAR_10 == VAR_0 &&
   VAR_15->mf_server &&
   (VAR_15->mf_server->fs_version != 2 ||
    !FUNC_0(VAR_15->mf_server->fs_proto, "udp")))
 VAR_15->mf_flags |= VAR_6;
      else

      {
 VAR_15->mf_error = VAR_10;
 VAR_15->mf_flags |= VAR_2;
 VAR_9 = VAR_10;
 if (!FUNC_0(VAR_14->am_al->al_mnt->mf_ops->fs_type, "linkx"))
   FUNC_9(VAR_7, "%s: mount (amfs_cont): %m", VAR_14->am_path);
      }
    }

    if (!(VAR_15->mf_flags & VAR_6)) {





      VAR_8.d_merr++;
      VAR_13->al++;
    }
    FUNC_2(VAR_13);
    if (VAR_14->am_error > 0)
      FUNC_3(VAR_14);
  } else {



    FUNC_5("Mounting %s returned success", VAR_13->mp->am_path);
    FUNC_1(VAR_13->mp);
    FUNC_6(VAR_13);
  }

  FUNC_10();
}
