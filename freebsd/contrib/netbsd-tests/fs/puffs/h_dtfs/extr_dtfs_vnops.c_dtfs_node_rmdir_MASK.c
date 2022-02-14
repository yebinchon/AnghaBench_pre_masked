
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct puffs_usermount {int dummy; } ;
struct puffs_node {int dummy; } ;
struct puffs_cn {int pcn_namelen; int pcn_name; } ;
struct dtfs_file {int df_dirents; } ;


 struct dtfs_file* FUNC_0 (void*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (void*,struct puffs_node*,int ,int ) ;
 int FUNC_3 (struct puffs_usermount*) ;
 int FUNC_4 (int ,int ) ;

int
FUNC_5(struct puffs_usermount *VAR_2, void *VAR_3, void *VAR_4,
 const struct puffs_cn *VAR_5)
{
 struct puffs_node *VAR_6 = VAR_3;
 struct dtfs_file *VAR_7 = FUNC_0(VAR_4);

 if (!FUNC_1(&VAR_7->df_dirents))
  return VAR_0;

 FUNC_2(VAR_4, VAR_6, VAR_5->pcn_name, VAR_5->pcn_namelen);
 FUNC_4(FUNC_3(VAR_2), VAR_1);

 return 0;
}
