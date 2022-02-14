
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct nfsmount {int nm_state; int nm_mtx; TYPE_2__* nm_mountp; } ;
struct TYPE_3__ {int f_fsid; int f_mntfromname; } ;
struct TYPE_4__ {TYPE_1__ mnt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct thread*,int ,char const*,int ) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct nfsmount *VAR_4, struct thread *VAR_5, const char *VAR_6,
    int VAR_7, int VAR_8)
{
 if (VAR_4 == ((void*)0))
  return;
 if (VAR_8) {
  FUNC_2(VAR_5, VAR_4->nm_mountp->mnt_stat.f_mntfromname, VAR_6, 0);
 }

 FUNC_0(&VAR_4->nm_mtx);
 if ((VAR_7 & VAR_1) && (VAR_4->nm_state & VAR_1)) {
  VAR_4->nm_state &= ~VAR_1;
  FUNC_1(&VAR_4->nm_mtx);
  FUNC_3(&VAR_4->nm_mountp->mnt_stat.f_fsid,
      VAR_2, 1);
 } else
  FUNC_1(&VAR_4->nm_mtx);

 FUNC_0(&VAR_4->nm_mtx);
 if ((VAR_7 & VAR_0) && (VAR_4->nm_state & VAR_0)) {
  VAR_4->nm_state &= ~VAR_0;
  FUNC_1(&VAR_4->nm_mtx);
  FUNC_3(&VAR_4->nm_mountp->mnt_stat.f_fsid,
      VAR_3, 1);
 } else
  FUNC_1(&VAR_4->nm_mtx);
}
