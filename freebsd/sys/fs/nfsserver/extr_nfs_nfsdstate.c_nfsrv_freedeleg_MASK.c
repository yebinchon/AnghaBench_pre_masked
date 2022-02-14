
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsstate {int ls_flags; struct nfslockfile* ls_lfp; } ;
struct nfslockfile {scalar_t__ lf_usecount; int lf_locallock_lck; int lf_rollback; int lf_locallock; int lf_deleg; int lf_lock; int lf_open; } ;
struct TYPE_2__ {int srvdelegates; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct nfsstate*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct nfsstate*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct nfslockfile*) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct nfsstate *VAR_9)
{
 struct nfslockfile *VAR_10;

 FUNC_1(VAR_9, VAR_3);
 FUNC_1(VAR_9, VAR_4);
 FUNC_1(VAR_9, VAR_2);
 if ((VAR_9->ls_flags & VAR_1) != 0)
  VAR_7--;
 VAR_10 = VAR_9->ls_lfp;
 if (FUNC_0(&VAR_10->lf_open) &&
     FUNC_0(&VAR_10->lf_lock) && FUNC_0(&VAR_10->lf_deleg) &&
     FUNC_0(&VAR_10->lf_locallock) && FUNC_0(&VAR_10->lf_rollback) &&
     VAR_10->lf_usecount == 0 &&
     FUNC_4(&VAR_10->lf_locallock_lck) == 0)
  FUNC_3(VAR_10);
 FUNC_2(VAR_9, VAR_0);
 VAR_8--;
 VAR_6--;
 VAR_5--;
}
