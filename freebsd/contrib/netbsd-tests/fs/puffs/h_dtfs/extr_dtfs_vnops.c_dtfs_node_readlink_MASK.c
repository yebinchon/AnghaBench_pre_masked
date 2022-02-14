
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct puffs_usermount {int dummy; } ;
struct TYPE_2__ {scalar_t__ va_type; } ;
struct puffs_node {TYPE_1__ pn_va; } ;
struct puffs_cred {int dummy; } ;
struct dtfs_file {int df_linktarget; } ;


 struct dtfs_file* FUNC_0 (void*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,size_t) ;
 size_t FUNC_3 (char*) ;

int
FUNC_4(struct puffs_usermount *VAR_1, void *VAR_2,
 const struct puffs_cred *VAR_3, char *VAR_4, size_t *VAR_5)
{
 struct dtfs_file *VAR_6 = FUNC_0(VAR_2);
 struct puffs_node *VAR_7 = VAR_2;

 FUNC_1(VAR_7->pn_va.va_type == VAR_0);
 FUNC_2(VAR_4, VAR_6->df_linktarget, *VAR_5);
 *VAR_5 = FUNC_3(VAR_4);

 return 0;
}
