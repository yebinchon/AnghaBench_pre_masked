
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct TYPE_2__ {scalar_t__ va_type; int va_gid; scalar_t__ va_uid; } ;
struct puffs_node {TYPE_1__ pn_va; int * pn_mnt; } ;
struct puffs_cn {int pcn_namelen; int pcn_name; int pcn_cred; } ;
struct dtfs_mount {int dtm_nextfileid; } ;
struct dtfs_file {struct puffs_node* df_dotdot; } ;
struct dtfs_dirent {struct puffs_node* dfd_parent; int dfd_name; int dfd_namelen; struct puffs_node* dfd_node; } ;
typedef enum vtype { ____Placeholder_vtype } vtype ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct puffs_node*,struct dtfs_dirent*) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 struct dtfs_file* FUNC_3 () ;
 struct dtfs_file* FUNC_4 () ;
 struct dtfs_dirent* FUNC_5 (int) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,scalar_t__*) ;
 struct dtfs_mount* FUNC_9 (struct puffs_node*) ;
 struct puffs_node* FUNC_10 (int *,struct dtfs_file*) ;
 int FUNC_11 (int ) ;

struct puffs_node *
FUNC_12(struct puffs_node *VAR_1, const struct puffs_cn *VAR_2,
 enum vtype VAR_3)
{
 struct dtfs_file *VAR_4;
 struct dtfs_dirent *VAR_5;
 struct dtfs_mount *VAR_6;
 struct puffs_node *VAR_7;
 uid_t VAR_8;
 int VAR_9;

 FUNC_0(VAR_1->pn_va.va_type == VAR_0);
 FUNC_0(VAR_1->pn_mnt != ((void*)0));

 VAR_8 = 0;
 VAR_9 = FUNC_8(VAR_2->pcn_cred, &VAR_8);
 FUNC_0(VAR_9 == 0);

 if (VAR_3 == VAR_0) {
  VAR_4 = FUNC_3();
  VAR_4->df_dotdot = VAR_1;
 } else
  VAR_4 = FUNC_4();

 VAR_6 = FUNC_9(VAR_1);
 VAR_7 = FUNC_10(VAR_1->pn_mnt, VAR_4);
 if (VAR_7 == ((void*)0))
  FUNC_6(1, "getnewpnode");
 FUNC_2(&VAR_7->pn_va, VAR_3, VAR_6->dtm_nextfileid++);

 VAR_5 = FUNC_5(sizeof(struct dtfs_dirent));
 VAR_5->dfd_node = VAR_7;
 VAR_5->dfd_name = FUNC_7(VAR_2->pcn_name, VAR_2->pcn_namelen);
 VAR_5->dfd_namelen = FUNC_11(VAR_5->dfd_name);
 VAR_5->dfd_parent = VAR_1;
 FUNC_1(VAR_1, VAR_5);

 VAR_7->pn_va.va_uid = VAR_8;
 VAR_7->pn_va.va_gid = VAR_1->pn_va.va_gid;

 return VAR_7;
}
