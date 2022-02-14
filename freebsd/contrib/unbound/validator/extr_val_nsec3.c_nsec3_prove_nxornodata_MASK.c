
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
 int FUNC_3 (struct module_env*,struct nsec3_filter*,int *,struct query_info*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (struct val_env*,struct nsec3_filter*,struct key_entry_key*) ;
 int FUNC_5 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

enum sec_status
FUNC_6(struct module_env* VAR_4, struct val_env* VAR_5,
 struct ub_packed_rrset_key** VAR_6, size_t VAR_7,
 struct query_info* VAR_8, struct key_entry_key* VAR_9, int* VAR_10)
{
 enum sec_status VAR_11, VAR_12;
 rbtree_type VAR_13;
 struct nsec3_filter VAR_14;
 *VAR_10 = 0;

 if(!VAR_6 || VAR_7 == 0 || !VAR_9 || !FUNC_1(VAR_9))
  return VAR_1;
 FUNC_5(&VAR_13, &VAR_0);
 FUNC_0(&VAR_14, VAR_6, VAR_7, VAR_8);
 if(!VAR_14.zone)
  return VAR_1;
 if(FUNC_4(VAR_5, &VAR_14, VAR_9))
  return VAR_2;




 VAR_12 = FUNC_2(VAR_4, &VAR_14, &VAR_13, VAR_8);
 if(VAR_12==VAR_3)
  return VAR_3;
 VAR_11 = FUNC_3(VAR_4, &VAR_14, &VAR_13, VAR_8);
 if(VAR_11==VAR_3) {
  *VAR_10 = 1;
 } else if(VAR_11 == VAR_2) {
  *VAR_10 = 1;
 } else if(VAR_12 == VAR_2) {
  VAR_11 = VAR_2;
 }
 return VAR_11;
}
