
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ va_type; } ;
struct puffs_node {TYPE_1__ pn_va; } ;
struct dtfs_mount {int dtm_nfiles; } ;
struct dtfs_dirent {int dummy; } ;


 int FUNC_0 (struct puffs_node*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 struct dtfs_dirent* FUNC_2 (int ,char const*,size_t) ;
 int FUNC_3 (struct puffs_node*,struct dtfs_dirent*) ;
 int FUNC_4 (struct dtfs_dirent*) ;
 struct dtfs_mount* FUNC_5 (struct puffs_node*) ;

void
FUNC_6(struct puffs_node *VAR_1, struct puffs_node *VAR_2,
 const char *VAR_3, size_t VAR_4)
{
 struct dtfs_dirent *VAR_5;
 struct dtfs_mount *VAR_6;

 FUNC_1(VAR_2->pn_va.va_type == VAR_0);

 VAR_5 = FUNC_2(FUNC_0(VAR_2), VAR_3, VAR_4);
 FUNC_1(VAR_5);

 VAR_6 = FUNC_5(VAR_1);
 VAR_6->dtm_nfiles--;
 FUNC_1(VAR_6->dtm_nfiles >= 1);

 FUNC_3(VAR_2, VAR_5);
 FUNC_4(VAR_5);
}
