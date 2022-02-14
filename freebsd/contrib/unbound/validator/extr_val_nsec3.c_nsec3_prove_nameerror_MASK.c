
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_env {int dummy; } ;
struct ub_packed_rrset_key {int dummy; } ;
struct query_info {int dummy; } ;
struct nsec3_filter {int zone; } ;
struct module_env {int dummy; } ;
struct key_entry_key {int dummy; } ;
typedef int rbtree_type ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 int VAR_0 ;
 int FUNC_0 (struct nsec3_filter*,struct ub_packed_rrset_key**,size_t,struct query_info*) ;
 int FUNC_1 (struct key_entry_key*) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int FUNC_3 (struct module_env*,struct nsec3_filter*,int *,struct query_info*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct val_env*,struct nsec3_filter*,struct key_entry_key*) ;
 int FUNC_5 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;

enum sec_status
FUNC_6(struct module_env* VAR_4, struct val_env* VAR_5,
 struct ub_packed_rrset_key** VAR_6, size_t VAR_7,
 struct query_info* VAR_8, struct key_entry_key* VAR_9)
{
 rbtree_type VAR_10;
 struct nsec3_filter VAR_11;

 if(!VAR_6 || VAR_7 == 0 || !VAR_9 || !FUNC_1(VAR_9))
  return VAR_2;
 FUNC_5(&VAR_10, &VAR_1);
 FUNC_0(&VAR_11, VAR_6, VAR_7, VAR_8);
 if(!VAR_11.zone)
  return VAR_2;
 if(FUNC_4(VAR_5, &VAR_11, VAR_9))
  return VAR_3;
 FUNC_2(VAR_0, "start nsec3 nameerror proof, zone",
  VAR_11.zone, 0, 0);
 return FUNC_3(VAR_4, &VAR_11, &VAR_10, VAR_8);
}
