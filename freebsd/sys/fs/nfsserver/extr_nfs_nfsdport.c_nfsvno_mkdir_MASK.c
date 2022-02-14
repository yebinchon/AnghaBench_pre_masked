
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct nfsvattr {int na_vattr; } ;
struct nfsexstuff {int dummy; } ;
struct nameidata {scalar_t__ ni_dvp; scalar_t__ ni_vp; int ni_cnd; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__*,int *,int *) ;
 int FUNC_2 (struct nameidata*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

int
FUNC_5(struct nameidata *VAR_1, struct nfsvattr *VAR_2, uid_t VAR_3,
    struct ucred *VAR_4, struct thread *VAR_5, struct nfsexstuff *VAR_6)
{
 int VAR_7 = 0;

 if (VAR_1->ni_vp != ((void*)0)) {
  if (VAR_1->ni_dvp == VAR_1->ni_vp)
   FUNC_4(VAR_1->ni_dvp);
  else
   FUNC_3(VAR_1->ni_dvp);
  FUNC_4(VAR_1->ni_vp);
  FUNC_2(VAR_1);
  VAR_7 = VAR_0;
  goto out;
 }
 VAR_7 = FUNC_1(VAR_1->ni_dvp, &VAR_1->ni_vp, &VAR_1->ni_cnd,
     &VAR_2->na_vattr);
 FUNC_3(VAR_1->ni_dvp);
 FUNC_2(VAR_1);

out:
 FUNC_0(VAR_7);
 return (VAR_7);
}
