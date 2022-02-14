
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int z_pflags; scalar_t__ z_uid; scalar_t__ z_gid; int z_mode; int z_zfsvfs; int z_acl_lock; } ;
typedef TYPE_1__ znode_t ;
typedef scalar_t__ uid_t ;
typedef int cred_t ;
typedef int boolean_t ;
struct TYPE_7__ {scalar_t__ v_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_4__* FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_11 ;
 int FUNC_10 (TYPE_1__*,int ,int ,int,int *) ;

int
FUNC_11(znode_t *VAR_12, cred_t *VAR_13)
{
 boolean_t VAR_14 = VAR_1;
 boolean_t VAR_15 = VAR_1;
 boolean_t VAR_16;
 uid_t VAR_17 = FUNC_6(VAR_13);
 int VAR_18;

 if (VAR_12->z_pflags & VAR_8)
  return (FUNC_2(VAR_3));

 VAR_16 = ((VAR_12->z_pflags & VAR_10) &&
     (FUNC_5(VAR_12)->v_type == VAR_7));
 if (VAR_16)
  goto slow;


 FUNC_8(&VAR_12->z_acl_lock);

 if (VAR_12->z_pflags & VAR_9) {
  FUNC_9(&VAR_12->z_acl_lock);
  return (0);
 }

 if (FUNC_1(VAR_12->z_uid) != 0 || FUNC_1(VAR_12->z_gid) != 0) {
  FUNC_9(&VAR_12->z_acl_lock);
  goto slow;
 }

 if (VAR_17 == VAR_12->z_uid) {
  VAR_14 = VAR_2;
  if (VAR_12->z_mode & VAR_6) {
   FUNC_9(&VAR_12->z_acl_lock);
   return (0);
  } else {
   FUNC_9(&VAR_12->z_acl_lock);
   goto slow;
  }
 }
 if (FUNC_7(VAR_12->z_gid, VAR_13)) {
  VAR_15 = VAR_2;
  if (VAR_12->z_mode & VAR_4) {
   FUNC_9(&VAR_12->z_acl_lock);
   return (0);
  } else {
   FUNC_9(&VAR_12->z_acl_lock);
   goto slow;
  }
 }
 if (!VAR_14 && !VAR_15) {
  if (VAR_12->z_mode & VAR_5) {
   FUNC_9(&VAR_12->z_acl_lock);
   return (0);
  }
 }

 FUNC_9(&VAR_12->z_acl_lock);

slow:
 FUNC_0(VAR_11);
 FUNC_3(VAR_12->z_zfsvfs);
 VAR_18 = FUNC_10(VAR_12, VAR_0, 0, VAR_1, VAR_13);
 FUNC_4(VAR_12->z_zfsvfs);
 return (VAR_18);
}
