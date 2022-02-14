
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ucred {scalar_t__ cr_uid; int cr_groups; int cr_ngroups; int cr_gid; } ;
struct nfsrv_descript {int nd_flag; scalar_t__ nd_procnum; TYPE_1__* nd_cred; } ;
struct nfsexstuff {int nes_exflag; } ;
struct TYPE_4__ {scalar_t__ cr_uid; int cr_gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,struct nfsrv_descript*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (struct nfsexstuff*) ;
 scalar_t__ FUNC_2 (struct nfsexstuff*) ;
 scalar_t__ FUNC_3 (struct nfsexstuff*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (struct nfsrv_descript*,struct nfsexstuff*) ;

int
FUNC_7(struct nfsrv_descript *VAR_10, struct nfsexstuff *VAR_11,
    struct ucred *VAR_12)
{
 int VAR_13 = 0;




 if (VAR_10->nd_flag & VAR_3)
  VAR_11->nes_exflag &= ~VAR_1;







 if (FUNC_6(VAR_10, VAR_11) &&
     VAR_10->nd_procnum != VAR_9 &&
     VAR_10->nd_procnum != VAR_8) {
  if (VAR_10->nd_flag & VAR_4)
   VAR_13 = VAR_7;
  else
   VAR_13 = (VAR_5 | VAR_0);
  goto out;
 }




 if (FUNC_3(VAR_11) && !(VAR_10->nd_flag & VAR_4)) {
  VAR_13 = VAR_6;
  goto out;
 }







 if (FUNC_2(VAR_11)) {
  if (((VAR_10->nd_flag & VAR_3) == 0 && VAR_10->nd_cred->cr_uid == 0) ||
       FUNC_1(VAR_11) ||
       (VAR_10->nd_flag & VAR_2) != 0) {
   VAR_10->nd_cred->cr_uid = VAR_12->cr_uid;
   VAR_10->nd_cred->cr_gid = VAR_12->cr_gid;
   FUNC_4(VAR_10->nd_cred, VAR_12->cr_ngroups,
       VAR_12->cr_groups);
  } else if ((VAR_10->nd_flag & VAR_3) == 0) {







   VAR_10->nd_cred = FUNC_5(VAR_10->nd_cred);
  }
 }

out:
 FUNC_0(VAR_13, VAR_10);
 return (VAR_13);
}
