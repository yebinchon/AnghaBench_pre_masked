
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct puffs_usermount {int dummy; } ;
struct puffs_node {int dummy; } ;
struct puffs_cn {int pcn_namelen; int pcn_name; } ;
struct dtfs_dirent {int dfd_name; int dfd_namelen; void* dfd_node; } ;


 int FUNC_0 (struct puffs_node*,struct dtfs_dirent*) ;
 int FUNC_1 (void*,int ,int,int ) ;
 struct dtfs_dirent* FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct puffs_usermount *VAR_0, void *VAR_1, void *VAR_2,
 const struct puffs_cn *VAR_3)
{
 struct puffs_node *VAR_4 = VAR_1;
 struct dtfs_dirent *VAR_5;

 VAR_5 = FUNC_2(sizeof(struct dtfs_dirent));
 VAR_5->dfd_node = VAR_2;
 VAR_5->dfd_name = FUNC_3(VAR_3->pcn_name, VAR_3->pcn_namelen);
 VAR_5->dfd_namelen = FUNC_4(VAR_5->dfd_name);
 FUNC_0(VAR_4, VAR_5);

 FUNC_1(VAR_2, 0, 1, 0);

 return 0;
}
