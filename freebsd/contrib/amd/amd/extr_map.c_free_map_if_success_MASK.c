
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wchan_t ;
typedef scalar_t__ opaque_t ;
struct TYPE_11__ {int mf_flags; int mf_mount; int * mf_ops; } ;
typedef TYPE_2__ mntfs ;
struct TYPE_12__ {int am_flags; int am_path; TYPE_1__* am_al; } ;
typedef TYPE_3__ am_node ;
struct TYPE_13__ {int d_uerr; } ;
struct TYPE_10__ {TYPE_2__* al_mnt; } ;


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
 int FUNC_0 (TYPE_3__*) ;
 TYPE_8__ VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,int ,int,int) ;
 int FUNC_5 (int ,char*,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(int VAR_13, int VAR_14, opaque_t VAR_15)
{
  am_node *VAR_16 = (am_node *) VAR_15;
  mntfs *VAR_17 = VAR_16->am_al->al_mnt;
  wchan_t VAR_18 = FUNC_3(VAR_17);




  VAR_17->mf_flags &= ~VAR_6;





  if (VAR_17->mf_flags & VAR_7) {
    VAR_17->mf_flags &= ~VAR_7;
    FUNC_6();
  }
  if (VAR_14) {
    FUNC_4(VAR_16, VAR_2, 0, VAR_14);
    FUNC_5(VAR_9, "unmount for %s got signal %d", VAR_16->am_path, VAR_14);
    VAR_11.d_uerr++;
  } else if (VAR_13) {
    FUNC_4(VAR_16, VAR_1, VAR_13, 0);
    if (VAR_17->mf_ops == &VAR_12 || VAR_13 == VAR_3)
      FUNC_5(VAR_10, "\"%s\" on %s still active", VAR_16->am_path, VAR_17->mf_mount);
    else
      FUNC_5(VAR_9, "%s: unmount: %s", VAR_16->am_path, FUNC_7(VAR_13));
    VAR_11.d_uerr++;
  } else {



    FUNC_0(VAR_16);
  }




  FUNC_8(VAR_18);
}
