
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_acl_t ;
typedef int zfs_ace_hdr_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ mode_t ;
typedef scalar_t__ boolean_t ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int * FUNC_0 (int *,int *,scalar_t__*,int*,int*,int*) ;
 int FUNC_1 (int,int) ;

uint64_t
FUNC_2(uint64_t VAR_28, zfs_acl_t *VAR_29,
    uint64_t *VAR_30, uint64_t VAR_31, uint64_t VAR_32)
{
 int VAR_33;
 mode_t VAR_34;
 mode_t VAR_35 = 0;
 zfs_ace_hdr_t *VAR_36 = ((void*)0);
 uint64_t VAR_37;
 uint16_t VAR_38, VAR_39;
 uint32_t VAR_40;
 boolean_t VAR_41 = VAR_10;

 VAR_34 = (VAR_28 & (VAR_14 | VAR_19 | VAR_18 | VAR_20));

 while ((VAR_36 = FUNC_0(VAR_29, VAR_36, &VAR_37,
     &VAR_40, &VAR_38, &VAR_39))) {

  if (!FUNC_1(VAR_39, VAR_38))
   continue;

  VAR_33 = (VAR_38 & VAR_6);




  if (VAR_38 & VAR_3)
   continue;

  if (VAR_33 == VAR_4 || (VAR_33 == 0 &&
      VAR_37 == VAR_31)) {
   if ((VAR_40 & VAR_5) &&
       (!(VAR_35 & VAR_17))) {
    VAR_35 |= VAR_17;
    if (VAR_39 == VAR_8) {
     VAR_34 |= VAR_17;
    }
   }
   if ((VAR_40 & VAR_7) &&
       (!(VAR_35 & VAR_23))) {
    VAR_35 |= VAR_23;
    if (VAR_39 == VAR_8) {
     VAR_34 |= VAR_23;
    }
   }
   if ((VAR_40 & VAR_1) &&
       (!(VAR_35 & VAR_26))) {
    VAR_35 |= VAR_26;
    if (VAR_39 == VAR_8) {
     VAR_34 |= VAR_26;
    }
   }
  } else if (VAR_33 == VAR_13 ||
      (VAR_33 == VAR_2 && VAR_37 == VAR_32)) {
   if ((VAR_40 & VAR_5) &&
       (!(VAR_35 & VAR_15))) {
    VAR_35 |= VAR_15;
    if (VAR_39 == VAR_8) {
     VAR_34 |= VAR_15;
    }
   }
   if ((VAR_40 & VAR_7) &&
       (!(VAR_35 & VAR_21))) {
    VAR_35 |= VAR_21;
    if (VAR_39 == VAR_8) {
     VAR_34 |= VAR_21;
    }
   }
   if ((VAR_40 & VAR_1) &&
       (!(VAR_35 & VAR_24))) {
    VAR_35 |= VAR_24;
    if (VAR_39 == VAR_8) {
     VAR_34 |= VAR_24;
    }
   }
  } else if (VAR_33 == VAR_0) {
   if ((VAR_40 & VAR_5)) {
    if (!(VAR_35 & VAR_17)) {
     VAR_35 |= VAR_17;
     if (VAR_39 == VAR_8) {
      VAR_34 |= VAR_17;
     }
    }
    if (!(VAR_35 & VAR_15)) {
     VAR_35 |= VAR_15;
     if (VAR_39 == VAR_8) {
      VAR_34 |= VAR_15;
     }
    }
    if (!(VAR_35 & VAR_16)) {
     VAR_35 |= VAR_16;
     if (VAR_39 == VAR_8) {
      VAR_34 |= VAR_16;
     }
    }
   }
   if ((VAR_40 & VAR_7)) {
    if (!(VAR_35 & VAR_23)) {
     VAR_35 |= VAR_23;
     if (VAR_39 == VAR_8) {
      VAR_34 |= VAR_23;
     }
    }
    if (!(VAR_35 & VAR_21)) {
     VAR_35 |= VAR_21;
     if (VAR_39 == VAR_8) {
      VAR_34 |= VAR_21;
     }
    }
    if (!(VAR_35 & VAR_22)) {
     VAR_35 |= VAR_22;
     if (VAR_39 == VAR_8) {
      VAR_34 |= VAR_22;
     }
    }
   }
   if ((VAR_40 & VAR_1)) {
    if (!(VAR_35 & VAR_26)) {
     VAR_35 |= VAR_26;
     if (VAR_39 == VAR_8) {
      VAR_34 |= VAR_26;
     }
    }
    if (!(VAR_35 & VAR_24)) {
     VAR_35 |= VAR_24;
     if (VAR_39 == VAR_8) {
      VAR_34 |= VAR_24;
     }
    }
    if (!(VAR_35 & VAR_25)) {
     VAR_35 |= VAR_25;
     if (VAR_39 == VAR_8) {
      VAR_34 |= VAR_25;
     }
    }
   }
  } else {





   if ((VAR_40 & VAR_1) && VAR_39 == VAR_12)
    VAR_41 = VAR_11;
  }
 }






 if (!VAR_41 &&
     ((VAR_35 & VAR_9) != VAR_9 ||
     (VAR_34 & VAR_9) != VAR_9))
  VAR_41 = VAR_11;

 if (VAR_41)
  *VAR_30 &= ~VAR_27;
 else
  *VAR_30 |= VAR_27;

 return (VAR_34);
}
