
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct nfsvattr {int na_vattr; } ;
struct nfsexstuff {int dummy; } ;
struct nameidata {scalar_t__ ni_vp; scalar_t__ ni_startdir; scalar_t__ ni_dvp; int ni_cnd; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__*,int *,int *,char*) ;
 int FUNC_2 (struct nameidata*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

int
FUNC_5(struct nameidata *VAR_1, struct nfsvattr *VAR_2, char *VAR_3,
    int VAR_4, int VAR_5, uid_t VAR_6, struct ucred *VAR_7, struct thread *VAR_8,
    struct nfsexstuff *VAR_9)
{
 int VAR_10 = 0;

 if (VAR_1->ni_vp) {
  FUNC_4(VAR_1->ni_startdir);
  FUNC_2(VAR_1);
  if (VAR_1->ni_dvp == VAR_1->ni_vp)
   FUNC_4(VAR_1->ni_dvp);
  else
   FUNC_3(VAR_1->ni_dvp);
  FUNC_4(VAR_1->ni_vp);
  VAR_10 = VAR_0;
  goto out;
 }

 VAR_10 = FUNC_1(VAR_1->ni_dvp, &VAR_1->ni_vp, &VAR_1->ni_cnd,
     &VAR_2->na_vattr, VAR_3);
 FUNC_3(VAR_1->ni_dvp);
 FUNC_4(VAR_1->ni_startdir);
 FUNC_2(VAR_1);






 if (!VAR_5 && !VAR_10)
  FUNC_3(VAR_1->ni_vp);

out:
 FUNC_0(VAR_10);
 return (VAR_10);
}
