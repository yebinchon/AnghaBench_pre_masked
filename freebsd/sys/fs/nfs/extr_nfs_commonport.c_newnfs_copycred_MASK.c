
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_uid; } ;
struct nfscred {scalar_t__ nfsc_ngroups; int nfsc_groups; int nfsc_uid; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ucred*,scalar_t__,int ) ;

void
FUNC_2(struct nfscred *VAR_0, struct ucred *VAR_1)
{

 FUNC_0(VAR_0->nfsc_ngroups >= 0,
     ("newnfs_copycred: negative nfsc_ngroups"));
 VAR_1->cr_uid = VAR_0->nfsc_uid;
 FUNC_1(VAR_1, VAR_0->nfsc_ngroups, VAR_0->nfsc_groups);
}
