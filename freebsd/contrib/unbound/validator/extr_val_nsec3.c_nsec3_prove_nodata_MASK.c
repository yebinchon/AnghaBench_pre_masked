
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


 int FUNC_0 (struct nsec3_filter*,struct ub_packed_rrset_key**,size_t,struct query_info*) ;
 int FUNC_1 (struct key_entry_key*) ;
 int FUNC_2 (struct module_env*,struct nsec3_filter*,int *,struct query_info*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct val_env*,struct nsec3_filter*,struct key_entry_key*) ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;

enum sec_status
FUNC_5(struct module_env* VAR_3, struct val_env* VAR_4,
 struct ub_packed_rrset_key** VAR_5, size_t VAR_6,
 struct query_info* VAR_7, struct key_entry_key* VAR_8)
{
 rbtree_type VAR_9;
 struct nsec3_filter VAR_10;

 if(!VAR_5 || VAR_6 == 0 || !VAR_8 || !FUNC_1(VAR_8))
  return VAR_1;
 FUNC_4(&VAR_9, &VAR_0);
 FUNC_0(&VAR_10, VAR_5, VAR_6, VAR_7);
 if(!VAR_10.zone)
  return VAR_1;
 if(FUNC_3(VAR_4, &VAR_10, VAR_8))
  return VAR_2;
 return FUNC_2(VAR_3, &VAR_10, &VAR_9, VAR_7);
}
