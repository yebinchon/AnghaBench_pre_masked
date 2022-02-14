
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct puffs_usermount {int dummy; } ;
struct TYPE_2__ {int va_gen; int va_fileid; } ;
struct puffs_node {TYPE_1__ pn_va; } ;
struct dtfs_fid {int dfid_gen; int dfid_fileid; struct puffs_node* dfid_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

int
FUNC_1(struct puffs_usermount *VAR_1, void *VAR_2,
 void *VAR_3, size_t *VAR_4)
{
 struct puffs_node *VAR_5 = VAR_2;
 struct dtfs_fid *VAR_6;
 extern int VAR_7;

 if (VAR_7 == 0) {
  FUNC_0(*VAR_4 >= sizeof(struct dtfs_fid));
 } else {
  if (*VAR_4 < sizeof(struct dtfs_fid)) {
   *VAR_4 = sizeof(struct dtfs_fid);
   return VAR_0;
  }
  *VAR_4 = sizeof(struct dtfs_fid);
 }

 VAR_6 = VAR_3;

 VAR_6->dfid_addr = VAR_5;
 VAR_6->dfid_fileid = VAR_5->pn_va.va_fileid;
 VAR_6->dfid_gen = VAR_5->pn_va.va_gen;

 return 0;
}
