
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ z_gid; scalar_t__ z_uid; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_7__ {scalar_t__ z_groupquota_obj; scalar_t__ z_userquota_obj; scalar_t__ z_replay; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__,scalar_t__) ;

boolean_t
FUNC_1(zfsvfs_t *VAR_1, znode_t *VAR_2, boolean_t VAR_3)
{
 uint64_t VAR_4;
 uint64_t VAR_5;

 VAR_5 = VAR_3 ? VAR_1->z_groupquota_obj : VAR_1->z_userquota_obj;

 VAR_4 = VAR_3 ? VAR_2->z_gid : VAR_2->z_uid;

 if (VAR_5 == 0 || VAR_1->z_replay)
  return (VAR_0);

 return (FUNC_0(VAR_1, VAR_3, VAR_4));
}
