
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct puffs_usermount {int dummy; } ;
struct TYPE_2__ {scalar_t__ va_type; } ;
struct puffs_node {TYPE_1__ pn_va; } ;
struct puffs_cn {int pcn_namelen; char* pcn_name; } ;
struct dtfs_file {int df_dirents; } ;
struct dtfs_dirent {int dfd_name; int dfd_namelen; } ;


 struct dtfs_file* FUNC_0 (struct puffs_node*) ;
 int FUNC_1 (struct puffs_node*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct puffs_cn const*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct puffs_node*,struct dtfs_dirent*) ;
 struct dtfs_dirent* FUNC_5 (int ,char*,int) ;
 scalar_t__ FUNC_6 (struct puffs_node*,struct puffs_node*) ;
 int FUNC_7 (struct puffs_node*,struct puffs_node*,char*,int) ;
 int FUNC_8 (struct puffs_node*,struct dtfs_dirent*) ;
 int FUNC_9 (void*,int ,int,int ) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

int
FUNC_13(struct puffs_usermount *VAR_4, void *VAR_5, void *VAR_6,
 const struct puffs_cn *VAR_7, void *VAR_8, void *VAR_9,
 const struct puffs_cn *VAR_10)
{
 struct dtfs_dirent *VAR_11;
 struct dtfs_file *VAR_12;
 struct puffs_node *VAR_13 = VAR_5;
 struct puffs_node *VAR_14 = VAR_6;
 struct puffs_node *VAR_15 = VAR_8;
 struct puffs_node *VAR_16 = VAR_9;


 if (VAR_14->pn_va.va_type == VAR_3) {
  if (FUNC_6(VAR_15, VAR_14))
   return VAR_0;

  if ((VAR_7->pcn_namelen == 1 && VAR_7->pcn_name[0]=='.') ||
      VAR_5 == VAR_6 ||
      FUNC_3(VAR_7) ||
      FUNC_3(VAR_10)) {
   return VAR_0;
  }
 }

 VAR_11 = FUNC_5(FUNC_1(VAR_13),
     VAR_7->pcn_name, VAR_7->pcn_namelen);


 if (VAR_11 == ((void*)0)) {
  return VAR_1;
 }


 if (VAR_16) {
  if (VAR_16->pn_va.va_type == VAR_3) {
   VAR_12 = FUNC_0(VAR_16);
   if (!FUNC_2(&VAR_12->df_dirents))
    return VAR_2;
  }
  FUNC_7(VAR_16, VAR_15,
      VAR_10->pcn_name, VAR_10->pcn_namelen);
 }


 FUNC_8(VAR_13, VAR_11);

 FUNC_4(VAR_15, VAR_11);


 FUNC_11(VAR_11->dfd_name);
 VAR_11->dfd_name = FUNC_10(VAR_10->pcn_name,VAR_10->pcn_namelen);
 VAR_11->dfd_namelen = FUNC_12(VAR_11->dfd_name);

 FUNC_9(VAR_6, 0, 1, 0);

 return 0;
}
