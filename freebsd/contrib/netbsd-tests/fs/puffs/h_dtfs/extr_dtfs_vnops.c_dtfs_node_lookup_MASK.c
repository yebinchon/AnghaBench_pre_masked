
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct puffs_usermount {int dummy; } ;
struct TYPE_6__ {int va_gid; int va_uid; int va_mode; } ;
struct puffs_node {TYPE_2__ pn_va; } ;
struct puffs_newinfo {int dummy; } ;
struct puffs_cn {int pcn_flags; scalar_t__ pcn_nameiop; int pcn_cred; int pcn_namelen; int pcn_name; } ;
struct dtfs_file {TYPE_3__* df_dotdot; } ;
struct dtfs_dirent {TYPE_3__* dfd_node; } ;
struct TYPE_5__ {scalar_t__ va_type; int va_rdev; int va_size; } ;
struct TYPE_7__ {TYPE_1__ pn_va; } ;


 struct dtfs_file* FUNC_0 (void*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct puffs_cn const*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 struct dtfs_dirent* FUNC_3 (struct dtfs_file*,int ,int ) ;
 int FUNC_4 (scalar_t__,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct puffs_usermount*,TYPE_3__*) ;
 int FUNC_6 (struct puffs_newinfo*,TYPE_3__*) ;
 int FUNC_7 (struct puffs_newinfo*,int ) ;
 int FUNC_8 (struct puffs_newinfo*,int ) ;
 int FUNC_9 (struct puffs_newinfo*,scalar_t__) ;

int
FUNC_10(struct puffs_usermount *VAR_7, void *VAR_8,
 struct puffs_newinfo *VAR_9, const struct puffs_cn *VAR_10)
{
 struct puffs_node *VAR_11 = VAR_8;
 struct dtfs_file *VAR_12 = FUNC_0(VAR_8);
 struct dtfs_dirent *VAR_13;
 extern int VAR_14;
 int VAR_15;


 if (FUNC_1(VAR_10)) {
  if (VAR_12->df_dotdot == ((void*)0))
   return VAR_0;

  FUNC_2(VAR_12->df_dotdot->pn_va.va_type == VAR_6);
  FUNC_6(VAR_9, VAR_12->df_dotdot);
  FUNC_9(VAR_9, VAR_12->df_dotdot->pn_va.va_type);

  return 0;
 }

 VAR_13 = FUNC_3(VAR_12, VAR_10->pcn_name, VAR_10->pcn_namelen);
 if (VAR_13) {
  if ((VAR_10->pcn_flags & VAR_3) &&
      (VAR_10->pcn_nameiop == VAR_2)) {
   VAR_15 = FUNC_4(VAR_6, VAR_11->pn_va.va_mode,
       VAR_11->pn_va.va_uid, VAR_11->pn_va.va_gid,
       VAR_5, VAR_10->pcn_cred);
   if (VAR_15)
    return VAR_15;
  }
  FUNC_6(VAR_9, VAR_13->dfd_node);
  FUNC_9(VAR_9, VAR_13->dfd_node->pn_va.va_type);
  FUNC_8(VAR_9, VAR_13->dfd_node->pn_va.va_size);
  FUNC_7(VAR_9, VAR_13->dfd_node->pn_va.va_rdev);

  if (VAR_14)
   FUNC_5(VAR_7, VAR_13->dfd_node);

  return 0;
 }

 if ((VAR_10->pcn_flags & VAR_3)
     && (VAR_10->pcn_nameiop == VAR_1 ||
         VAR_10->pcn_nameiop == VAR_4)) {
  VAR_15 = FUNC_4(VAR_6, VAR_11->pn_va.va_mode,
      VAR_11->pn_va.va_uid, VAR_11->pn_va.va_gid,
      VAR_5, VAR_10->pcn_cred);
  if (VAR_15)
   return VAR_15;
 }

 return VAR_0;
}
