
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct puffs_usermount {int dummy; } ;
struct TYPE_2__ {scalar_t__ va_type; int va_fileid; } ;
struct puffs_node {TYPE_1__ pn_va; int pn_data; } ;
struct puffs_cred {int dummy; } ;
struct dtfs_dirent {int dfd_name; struct puffs_node* dfd_node; } ;
struct dirent {int dummy; } ;
typedef int off_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,size_t*,int ) ;
 scalar_t__ VAR_3 ;
 struct dtfs_dirent* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct puffs_node*,int,int ,int ) ;
 int FUNC_4 (struct dirent**,int ,int ,size_t*) ;
 int FUNC_5 (struct dirent**,int ,int ,int ,size_t*) ;
 int FUNC_6 (scalar_t__) ;

int
FUNC_7(struct puffs_usermount *VAR_4, void *VAR_5,
 struct dirent *VAR_6, off_t *VAR_7, size_t *VAR_8,
 const struct puffs_cred *VAR_9,
 int *VAR_10, off_t *VAR_11, size_t *VAR_12)
{
 struct puffs_node *VAR_13 = VAR_5;
 struct puffs_node *VAR_14;
 struct dtfs_dirent *VAR_15;

 if (VAR_13->pn_va.va_type != VAR_3)
  return VAR_2;

 FUNC_3(VAR_13, 1, 0, 0);

 *VAR_12 = 0;
 again:
 if (*VAR_7 == VAR_0 || *VAR_7 == VAR_1) {
  FUNC_4(&VAR_6, VAR_13->pn_va.va_fileid, *VAR_7, VAR_8);
  (*VAR_7)++;
  FUNC_1(VAR_11, VAR_12, *VAR_7);
  goto again;
 }

 for (;;) {
  VAR_15 = FUNC_2(VAR_13->pn_data, FUNC_0(*VAR_7));
  if (!VAR_15) {
   *VAR_10 = 1;
   break;
  }
  VAR_14 = VAR_15->dfd_node;

  if (!FUNC_5(&VAR_6, VAR_15->dfd_name,
      VAR_14->pn_va.va_fileid,
      FUNC_6(VAR_14->pn_va.va_type),
      VAR_8))
   break;

  (*VAR_7)++;
  FUNC_1(VAR_11, VAR_12, *VAR_7);
 }

 return 0;
}
