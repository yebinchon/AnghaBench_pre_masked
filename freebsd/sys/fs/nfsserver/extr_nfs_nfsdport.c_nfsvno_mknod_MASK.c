
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct nfsvattr {int na_type; int na_vattr; } ;
struct nameidata {scalar_t__ ni_startdir; int ni_dvp; int ni_cnd; scalar_t__ ni_vp; } ;
typedef enum vtype { ____Placeholder_vtype } vtype ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,scalar_t__*,int *,int *) ;
 int FUNC_2 (int ,scalar_t__*,int *,int *) ;
 int VAR_6 ;
 int FUNC_3 (struct nameidata*) ;
 int FUNC_4 (struct ucred*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;

int
FUNC_7(struct nameidata *VAR_7, struct nfsvattr *VAR_8, struct ucred *VAR_9,
    struct thread *VAR_10)
{
 int VAR_11 = 0;
 enum vtype VAR_12;

 VAR_12 = VAR_8->na_type;



 if (VAR_7->ni_vp) {
  FUNC_6(VAR_7->ni_startdir);
  FUNC_3(VAR_7);
  FUNC_5(VAR_7->ni_dvp);
  FUNC_6(VAR_7->ni_vp);
  VAR_11 = VAR_0;
  goto out;
 }
 if (VAR_12 != VAR_4 && VAR_12 != VAR_3 && VAR_12 != VAR_6 && VAR_12 != VAR_5) {
  FUNC_6(VAR_7->ni_startdir);
  FUNC_3(VAR_7);
  FUNC_5(VAR_7->ni_dvp);
  VAR_11 = VAR_1;
  goto out;
 }
 if (VAR_12 == VAR_6) {
  FUNC_6(VAR_7->ni_startdir);
  VAR_11 = FUNC_1(VAR_7->ni_dvp, &VAR_7->ni_vp,
      &VAR_7->ni_cnd, &VAR_8->na_vattr);
  FUNC_5(VAR_7->ni_dvp);
  FUNC_3(VAR_7);
 } else {
  if (VAR_8->na_type != VAR_5 &&
      (VAR_11 = FUNC_4(VAR_9, VAR_2))) {
   FUNC_6(VAR_7->ni_startdir);
   FUNC_3(VAR_7);
   FUNC_5(VAR_7->ni_dvp);
   goto out;
  }
  VAR_11 = FUNC_2(VAR_7->ni_dvp, &VAR_7->ni_vp,
      &VAR_7->ni_cnd, &VAR_8->na_vattr);
  FUNC_5(VAR_7->ni_dvp);
  FUNC_3(VAR_7);
  FUNC_6(VAR_7->ni_startdir);




 }

out:
 FUNC_0(VAR_11);
 return (VAR_11);
}
