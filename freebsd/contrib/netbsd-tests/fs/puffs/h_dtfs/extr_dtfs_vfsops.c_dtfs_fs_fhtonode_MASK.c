
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct puffs_usermount {int dummy; } ;
struct TYPE_2__ {scalar_t__ va_fileid; scalar_t__ va_gen; int va_rdev; int va_size; int va_type; } ;
struct puffs_node {TYPE_1__ pn_va; } ;
struct puffs_newinfo {int dummy; } ;
struct dtfs_fid {scalar_t__ dfid_fileid; scalar_t__ dfid_gen; int dfid_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct puffs_newinfo*,struct puffs_node*) ;
 int FUNC_2 (struct puffs_newinfo*,int ) ;
 int FUNC_3 (struct puffs_newinfo*,int ) ;
 int FUNC_4 (struct puffs_newinfo*,int ) ;
 struct puffs_node* FUNC_5 (struct puffs_usermount*,int ,int ) ;

int
FUNC_6(struct puffs_usermount *VAR_2, void *VAR_3, size_t VAR_4,
 struct puffs_newinfo *VAR_5)
{
 struct dtfs_fid *VAR_6;
 struct puffs_node *VAR_7;

 FUNC_0(VAR_4 == sizeof(struct dtfs_fid));
 VAR_6 = VAR_3;

 VAR_7 = FUNC_5(VAR_2, VAR_1, VAR_6->dfid_addr);
 if (VAR_7 == ((void*)0))
  return VAR_0;

 if (VAR_7->pn_va.va_fileid != VAR_6->dfid_fileid
     || VAR_7->pn_va.va_gen != VAR_6->dfid_gen)
  return VAR_0;

 FUNC_1(VAR_5, VAR_7);
 FUNC_4(VAR_5, VAR_7->pn_va.va_type);
 FUNC_3(VAR_5, VAR_7->pn_va.va_size);
 FUNC_2(VAR_5, VAR_7->pn_va.va_rdev);

 return 0;
}
