
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ z_acl_inherit; } ;
typedef TYPE_2__ zfsvfs_t ;
struct TYPE_13__ {size_t (* ace_size ) (void*) ;size_t (* ace_data ) (void*,void**) ;scalar_t__ (* ace_flags_get ) (void*) ;int (* ace_flags_set ) (void*,scalar_t__) ;} ;
struct TYPE_15__ {TYPE_1__ z_ops; int z_hints; int z_acl_bytes; int z_acl_count; int z_acl; int z_version; } ;
typedef TYPE_3__ zfs_acl_t ;
struct TYPE_16__ {scalar_t__ z_size; int z_ace_count; void* z_acldata; } ;
typedef TYPE_4__ zfs_acl_node_t ;
typedef scalar_t__ vtype_t ;
typedef scalar_t__ uint_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (void*,void*,size_t) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 size_t FUNC_3 (void*) ;
 size_t FUNC_4 (void*,void**) ;
 size_t FUNC_5 (void*,void**) ;
 scalar_t__ FUNC_6 (void*) ;
 int FUNC_7 (void*,scalar_t__) ;
 int FUNC_8 (void*,scalar_t__) ;
 int FUNC_9 (void*,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 TYPE_3__* FUNC_11 (int ) ;
 void* FUNC_12 (TYPE_3__*,void*,int*,int *,scalar_t__*,scalar_t__*) ;
 TYPE_4__* FUNC_13 (size_t) ;
 int FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (TYPE_3__*,void*,int ,scalar_t__,int,scalar_t__) ;

__attribute__((used)) static zfs_acl_t *
FUNC_16(zfsvfs_t *VAR_26, vtype_t VAR_27, zfs_acl_t *VAR_28,
    uint64_t VAR_29, boolean_t *VAR_30)
{
 void *VAR_31 = ((void*)0);
 void *VAR_32;
 zfs_acl_node_t *VAR_33;
 zfs_acl_t *VAR_34 = ((void*)0);
 uint64_t VAR_35;
 uint32_t VAR_36;
 uint16_t VAR_37, VAR_38, VAR_39;
 size_t VAR_40;
 void *VAR_41, *VAR_42;
 size_t VAR_43, VAR_44;
 uint_t VAR_45;
 boolean_t VAR_46 = (VAR_27 == VAR_17);
 boolean_t VAR_47 = (VAR_27 == VAR_19);

 *VAR_30 = VAR_11;

 VAR_34 = FUNC_11(VAR_28->z_version);
 VAR_45 = VAR_26->z_acl_inherit;
 if (VAR_45 == VAR_20 || VAR_27 == VAR_18)
  return (VAR_34);

 while ((VAR_31 = FUNC_12(VAR_28, VAR_31, &VAR_35,
     &VAR_36, &VAR_37, &VAR_39))) {




  if (!FUNC_14(VAR_39, VAR_37))
   continue;




  if ((VAR_45 == VAR_21 && VAR_39 == VAR_8) ||
      !FUNC_10(VAR_27, VAR_37))
   continue;





  if ((VAR_45 == VAR_22 ||
      VAR_45 == VAR_23) &&
      ((VAR_37 & (VAR_7|VAR_1)) ||
      ((VAR_37 & VAR_12) == VAR_12)) &&
      (VAR_47 || (VAR_46 && (VAR_37 & VAR_0))))
   *VAR_30 = VAR_10;





  if (VAR_45 == VAR_23 && VAR_39 == VAR_8 &&
      !VAR_46 && ((VAR_29 & (VAR_16|VAR_14|VAR_15)) == 0)) {
   VAR_36 &= ~VAR_2;
  }





  if (VAR_45 == VAR_24 && VAR_39 == VAR_8) {
   VAR_36 &= ~VAR_13;
  }

  VAR_40 = VAR_34->z_ops.ace_size(VAR_31);
  VAR_33 = FUNC_13(VAR_40);
  FUNC_2(&VAR_34->z_acl, VAR_33);
  VAR_32 = VAR_33->z_acldata;

  FUNC_15(VAR_34, VAR_32, VAR_36, VAR_39,
      VAR_35, VAR_37|VAR_4);




  if ((VAR_43 = VAR_28->z_ops.ace_data(VAR_31, &VAR_41)) != 0) {
   FUNC_0((VAR_44 = VAR_34->z_ops.ace_data(VAR_32,
       &VAR_42)) == VAR_43);
   FUNC_1(VAR_41, VAR_42, VAR_44);
  }

  VAR_34->z_acl_count++;
  VAR_33->z_ace_count++;
  VAR_34->z_acl_bytes += VAR_33->z_size;
  VAR_38 = VAR_34->z_ops.ace_flags_get(VAR_32);





  if (!VAR_46 || (VAR_37 & VAR_6)) {
   VAR_38 &= ~VAR_9;
   VAR_34->z_ops.ace_flags_set(VAR_32,
       VAR_38|VAR_4);
   continue;
  }




  VAR_34->z_hints |= VAR_25;





  if ((VAR_37 & (VAR_3 |
      VAR_0)) == VAR_3) {
   VAR_38 |= VAR_5;
   VAR_34->z_ops.ace_flags_set(VAR_32,
       VAR_38|VAR_4);
  } else {
   VAR_38 &= ~VAR_5;
   VAR_34->z_ops.ace_flags_set(VAR_32,
       VAR_38|VAR_4);
  }
 }

 return (VAR_34);
}
