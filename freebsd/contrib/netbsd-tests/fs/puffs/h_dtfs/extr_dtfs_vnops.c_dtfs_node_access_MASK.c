
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct puffs_usermount {int dummy; } ;
struct TYPE_2__ {int va_gid; int va_uid; int va_mode; int va_type; } ;
struct puffs_node {TYPE_1__ pn_va; } ;
struct puffs_cred {int dummy; } ;


 int FUNC_0 (int ,int ,int ,int ,int,struct puffs_cred const*) ;

int
FUNC_1(struct puffs_usermount *VAR_0, void *VAR_1, int VAR_2,
 const struct puffs_cred *VAR_3)
{
 struct puffs_node *VAR_4 = VAR_1;

 return FUNC_0(VAR_4->pn_va.va_type, VAR_4->pn_va.va_mode,
     VAR_4->pn_va.va_uid, VAR_4->pn_va.va_gid, VAR_2, VAR_3);
}
