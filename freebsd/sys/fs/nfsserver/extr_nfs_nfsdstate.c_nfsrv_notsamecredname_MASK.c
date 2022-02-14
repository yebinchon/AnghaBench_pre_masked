
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsrv_descript {int nd_flag; scalar_t__ nd_princlen; TYPE_1__* nd_cred; int nd_principal; } ;
struct nfsclient {int lc_flags; scalar_t__ lc_namelen; scalar_t__ lc_uid; int lc_name; } ;
struct TYPE_2__ {scalar_t__ cr_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct nfsrv_descript *VAR_3, struct nfsclient *VAR_4)
{

 if (VAR_3->nd_flag & VAR_2) {
  if (!(VAR_4->lc_flags & VAR_0))
   return (1);
  if (VAR_4->lc_flags & VAR_1) {
   if (VAR_3->nd_princlen != VAR_4->lc_namelen ||
       FUNC_0(VAR_3->nd_principal, VAR_4->lc_name,
    VAR_4->lc_namelen))
    return (1);
   else
    return (0);
  }
  if (VAR_3->nd_cred->cr_uid == VAR_4->lc_uid)
   return (0);
  else
   return (1);
 } else if (VAR_4->lc_flags & VAR_0)
  return (1);





 if (VAR_3->nd_cred->cr_uid == VAR_4->lc_uid || VAR_3->nd_cred->cr_uid == 0)
  return (0);
 else
  return (1);
}
