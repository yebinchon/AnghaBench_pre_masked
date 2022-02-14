
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
struct puffs_usermount {int dummy; } ;
struct puffs_cred {int dummy; } ;
struct dtfs_mount {int dtm_allowprot; } ;


 int VAR_0 ;
 struct dtfs_mount* FUNC_0 (struct puffs_usermount*) ;

int
FUNC_1(struct puffs_usermount *VAR_1, void *VAR_2, vm_prot_t VAR_3,
 const struct puffs_cred *VAR_4)
{
 struct dtfs_mount *VAR_5 = FUNC_0(VAR_1);

 if ((VAR_5->dtm_allowprot & VAR_3) != VAR_3)
  return VAR_0;

 return 0;
}
