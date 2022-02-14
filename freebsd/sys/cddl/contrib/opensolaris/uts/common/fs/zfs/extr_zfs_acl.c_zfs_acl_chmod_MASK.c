
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {size_t (* ace_abstract_size ) () ;int (* ace_size ) (void*) ;} ;
struct TYPE_13__ {size_t z_acl_bytes; int z_acl_count; int z_acl; TYPE_1__ z_ops; int z_hints; } ;
typedef TYPE_2__ zfs_acl_t ;
struct TYPE_14__ {int z_ace_count; int z_size; void* z_acldata; } ;
typedef TYPE_3__ zfs_acl_node_t ;
typedef scalar_t__ vtype_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_15__ {scalar_t__ everyone; scalar_t__ group; scalar_t__ owner; scalar_t__ deny2; scalar_t__ deny1; scalar_t__ allow0; } ;
typedef TYPE_4__ trivial_acl_t ;
typedef int mode_t ;
typedef int boolean_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int,TYPE_4__*) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 size_t FUNC_2 () ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (TYPE_2__*,void*,int*,scalar_t__*,int*,int*) ;
 TYPE_3__* FUNC_5 (size_t) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,void*,scalar_t__,int,int,int) ;

__attribute__((used)) static void
FUNC_8(vtype_t VAR_12, uint64_t VAR_13, boolean_t VAR_14, boolean_t VAR_15,
    zfs_acl_t *VAR_16)
{
 void *VAR_17 = ((void*)0);
 uint64_t VAR_18;
 int VAR_19, VAR_20;
 int VAR_21;
 int VAR_22;
 uint16_t VAR_23, VAR_24;
 uint32_t VAR_25;
 zfs_acl_node_t *VAR_26;
 size_t VAR_27 = VAR_16->z_ops.ace_abstract_size();
 void *VAR_28;
 boolean_t VAR_29;
 trivial_acl_t VAR_30;

 VAR_19 = VAR_20 = 0;

 VAR_29 = (VAR_12 == VAR_9);

 FUNC_0((mode_t)VAR_13, VAR_29, &VAR_30);

 VAR_26 = FUNC_5((VAR_27 * 6) + VAR_16->z_acl_bytes);

 VAR_28 = VAR_26->z_acldata;
 if (VAR_30.allow0) {
  FUNC_7(VAR_16, VAR_28, VAR_30.allow0, VAR_6, -1, VAR_4);
  VAR_28 = (void *)((uintptr_t)VAR_28 + VAR_27);
  VAR_19++;
  VAR_20 += VAR_27;
 }
 if (VAR_30.deny1) {
  FUNC_7(VAR_16, VAR_28, VAR_30.deny1, VAR_7, -1, VAR_4);
  VAR_28 = (void *)((uintptr_t)VAR_28 + VAR_27);
  VAR_19++;
  VAR_20 += VAR_27;
 }
 if (VAR_30.deny2) {
  FUNC_7(VAR_16, VAR_28, VAR_30.deny2, VAR_7, -1, VAR_8);
  VAR_28 = (void *)((uintptr_t)VAR_28 + VAR_27);
  VAR_19++;
  VAR_20 += VAR_27;
 }

 while ((VAR_17 = FUNC_4(VAR_16, VAR_17, &VAR_18, &VAR_25,
     &VAR_23, &VAR_24))) {
  VAR_22 = (VAR_23 & VAR_5);






  if (VAR_14 && (VAR_22 == VAR_4 ||
      VAR_22 == VAR_8 ||
      VAR_22 == VAR_1)) {
   if (!VAR_29 || !(VAR_23 &
       (VAR_2|VAR_0)))
    continue;







   VAR_23 |= VAR_3;
  }






  if (VAR_29 && (VAR_23 &
      (VAR_2|VAR_0)))
   VAR_16->z_hints |= VAR_11;

  if ((VAR_24 != VAR_6 && VAR_24 != VAR_7) ||
      (VAR_23 & VAR_3)) {
   switch (VAR_24) {
   case 131:
   case 130:
   case 128:
   case 129:
    VAR_16->z_hints |= VAR_10;
    break;
   }
  } else {






   if ((VAR_24 == VAR_6) && VAR_15)
    VAR_25 &= VAR_30.group;
  }
  FUNC_7(VAR_16, VAR_28, VAR_25, VAR_24, VAR_18, VAR_23);
  VAR_21 = VAR_16->z_ops.ace_size(VAR_17);
  VAR_28 = (void *)((uintptr_t)VAR_28 + VAR_21);
  VAR_19++;
  VAR_20 += VAR_21;
 }
 FUNC_7(VAR_16, VAR_28, VAR_30.owner, VAR_6, -1, VAR_4);
 VAR_28 = (void *)((uintptr_t)VAR_28 + VAR_27);
 FUNC_7(VAR_16, VAR_28, VAR_30.group, VAR_6, -1, VAR_8);
 VAR_28 = (void *)((uintptr_t)VAR_28 + VAR_27);
 FUNC_7(VAR_16, VAR_28, VAR_30.everyone, VAR_6, -1, VAR_1);

 VAR_19 += 3;
 VAR_20 += VAR_27 * 3;
 FUNC_6(VAR_16);
 VAR_16->z_acl_count = VAR_19;
 VAR_16->z_acl_bytes = VAR_20;
 VAR_26->z_ace_count = VAR_19;
 VAR_26->z_size = VAR_20;
 FUNC_1(&VAR_16->z_acl, VAR_26);
}
