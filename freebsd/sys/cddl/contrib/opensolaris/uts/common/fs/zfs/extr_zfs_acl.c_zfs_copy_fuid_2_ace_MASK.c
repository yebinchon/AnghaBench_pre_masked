
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zfsvfs_t ;
struct TYPE_4__ {int z_inherit_type; int z_object_type; } ;
typedef TYPE_1__ zfs_object_ace_t ;
typedef int zfs_acl_t ;
typedef int zfs_ace_hdr_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ uid_t ;
typedef scalar_t__ int64_t ;
typedef int cred_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_5__ {int a_flags; int a_type; int a_access_mask; scalar_t__ a_who; } ;
typedef TYPE_2__ ace_t ;
struct TYPE_6__ {int a_inherit_obj_type; int a_obj_type; } ;
typedef TYPE_3__ ace_object_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int) ;
 int * FUNC_1 (int *,int *,scalar_t__*,int *,int*,int*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int *,int ) ;

__attribute__((used)) static void
FUNC_3(zfsvfs_t *VAR_7, zfs_acl_t *VAR_8, cred_t *VAR_9,
    void *VAR_10, int VAR_11)
{
 uint64_t VAR_12;
 uint32_t VAR_13;
 uint16_t VAR_14, VAR_15;
 zfs_ace_hdr_t *VAR_16 = ((void*)0);
 ace_t *VAR_17 = VAR_10;
 ace_object_t *VAR_18;
 zfs_object_ace_t *VAR_19;
 size_t VAR_20;
 uint16_t VAR_21;

 while ((VAR_16 = FUNC_1(VAR_8, VAR_16,
     &VAR_12, &VAR_13, &VAR_14, &VAR_15))) {

  switch (VAR_15) {
  case 131:
  case 130:
  case 128:
  case 129:
   if (VAR_11) {
    continue;
   }
   VAR_19 = (zfs_object_ace_t *)VAR_16;
   VAR_18 = (ace_object_t *)VAR_17;
   FUNC_0(VAR_19->z_object_type,
       VAR_18->a_obj_type,
       sizeof (VAR_19->z_object_type));
   FUNC_0(VAR_19->z_inherit_type,
       VAR_18->a_inherit_obj_type,
       sizeof (VAR_19->z_inherit_type));
   VAR_20 = sizeof (ace_object_t);
   break;
  default:
   VAR_20 = sizeof (ace_t);
   break;
  }

  VAR_21 = (VAR_14 & VAR_3);
  if ((VAR_21 != VAR_2 &&
      VAR_21 != VAR_4 &&
      VAR_21 != VAR_0)) {
   VAR_17->a_who = FUNC_2(VAR_7, VAR_12,
       VAR_9, (VAR_21 & VAR_1) ?
       VAR_5 : VAR_6);
  } else {
   VAR_17->a_who = (uid_t)(int64_t)VAR_12;
  }
  VAR_17->a_access_mask = VAR_13;
  VAR_17->a_flags = VAR_14;
  VAR_17->a_type = VAR_15;
  VAR_17 = (ace_t *)((caddr_t)VAR_17 + VAR_20);
 }
}
