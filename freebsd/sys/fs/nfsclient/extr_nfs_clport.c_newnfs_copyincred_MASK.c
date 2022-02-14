
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {scalar_t__ cr_ngroups; int * cr_groups; int cr_uid; } ;
struct nfscred {int nfsc_ngroups; int * nfsc_groups; int nfsc_uid; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;

void
FUNC_2(struct ucred *VAR_1, struct nfscred *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1->cr_ngroups >= 0,
     ("newnfs_copyincred: negative cr_ngroups"));
 VAR_2->nfsc_uid = VAR_1->cr_uid;
 VAR_2->nfsc_ngroups = FUNC_1(VAR_1->cr_ngroups, VAR_0 + 1);
 for (VAR_3 = 0; VAR_3 < VAR_2->nfsc_ngroups; VAR_3++)
  VAR_2->nfsc_groups[VAR_3] = VAR_1->cr_groups[VAR_3];
}
