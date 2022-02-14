
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
typedef int gid_t ;
typedef int boolean_t ;
typedef int aclent_t ;
struct TYPE_3__ {scalar_t__ acl_type; int acl_cnt; int acl_entry_size; void* acl_aclp; } ;
typedef TYPE_1__ acl_t ;
typedef int ace_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (void*,int,int ,int ,int ,int **,int*) ;
 int FUNC_2 (void*,int,int ,int **,int*) ;
 int VAR_6 ;

int
FUNC_3(acl_t *VAR_7, int VAR_8, boolean_t VAR_9, uid_t VAR_10,
    gid_t VAR_11)
{
 int VAR_12;
 void *VAR_13;
 int VAR_14;




 if ((VAR_8 == VAR_4 && VAR_7->acl_type == VAR_0) ||
     (VAR_8 == VAR_5 &&
     VAR_7->acl_type == VAR_1))
  return (0);

 if (VAR_8 == -1) {
  VAR_14 = VAR_2;
  goto out;
 }

 if (VAR_8 == VAR_4 &&
     VAR_7->acl_type == VAR_1) {
  VAR_14 = FUNC_2(VAR_7->acl_aclp,
      VAR_7->acl_cnt, VAR_9, (ace_t **)&VAR_13, &VAR_12);
  if (VAR_14)
   goto out;

 } else if (VAR_8 == VAR_5 &&
     VAR_7->acl_type == VAR_0) {
  VAR_14 = FUNC_1(VAR_7->acl_aclp, VAR_7->acl_cnt,
      VAR_9, VAR_10, VAR_11, (aclent_t **)&VAR_13, &VAR_12);
  if (VAR_14)
   goto out;
 } else {
  VAR_14 = VAR_3;
  goto out;
 }




 FUNC_0(VAR_7->acl_aclp, VAR_7->acl_cnt * VAR_7->acl_entry_size);
 VAR_7->acl_aclp = VAR_13;
 VAR_7->acl_cnt = VAR_12;
 if (VAR_8 == VAR_4) {
  VAR_7->acl_type = VAR_0;
  VAR_7->acl_entry_size = sizeof (ace_t);
 } else {
  VAR_7->acl_type = VAR_1;
  VAR_7->acl_entry_size = sizeof (aclent_t);
 }
 return (0);

out:


 VAR_6 = VAR_14;
 return (-1);



}
