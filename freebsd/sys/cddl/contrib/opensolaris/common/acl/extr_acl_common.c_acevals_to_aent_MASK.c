
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uid_t ;
typedef scalar_t__ gid_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_7__ {int a_type; scalar_t__ a_id; int a_perm; } ;
typedef TYPE_1__ aclent_t ;
struct TYPE_8__ {int allowed; int denied; scalar_t__ mask; int aent_type; scalar_t__ key; } ;
typedef TYPE_2__ acevals_t ;
struct TYPE_9__ {scalar_t__ acl_mask; scalar_t__ hasmask; } ;
typedef TYPE_3__ ace_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(acevals_t *VAR_9, aclent_t *VAR_10, ace_list_t *VAR_11,
    uid_t VAR_12, gid_t VAR_13, boolean_t VAR_14)
{
 int VAR_15;
 uint32_t VAR_16 = VAR_1;

 if (VAR_14)
  VAR_16 |= VAR_0;
 if (VAR_9->allowed != (VAR_9->denied ^ VAR_16)) {
  VAR_15 = VAR_3;
  goto out;
 }
 if ((VAR_11->hasmask) && (VAR_11->acl_mask != VAR_9->mask) &&
     (VAR_9->aent_type & (VAR_7 | VAR_4 | VAR_5))) {
  VAR_15 = VAR_3;
  goto out;
 }
 VAR_15 = FUNC_0(VAR_9->allowed, &VAR_10->a_perm, VAR_14);
 if (VAR_15 != 0)
  goto out;
 VAR_10->a_type = VAR_9->aent_type;
 if (VAR_10->a_type & (VAR_7 | VAR_4)) {
  VAR_10->a_id = VAR_9->key;
 } else if (VAR_10->a_type & VAR_8) {
  VAR_10->a_id = VAR_12;
 } else if (VAR_10->a_type & VAR_5) {
  VAR_10->a_id = VAR_13;
 } else if (VAR_10->a_type & VAR_6) {
  VAR_10->a_id = 0;
 } else {
  VAR_15 = VAR_2;
  goto out;
 }

out:
 return (VAR_15);
}
