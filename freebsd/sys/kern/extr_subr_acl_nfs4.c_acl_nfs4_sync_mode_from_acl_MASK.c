
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acl_entry {scalar_t__ ae_entry_type; int ae_flags; scalar_t__ ae_tag; int ae_perm; } ;
struct acl {int acl_cnt; struct acl_entry* acl_entry; } ;
typedef int mode_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

void
FUNC_1(mode_t *VAR_20, const struct acl *VAR_21)
{
 int VAR_22;
 mode_t VAR_23 = *VAR_20, VAR_24 = 0, VAR_25 = 0;
 const struct acl_entry *VAR_26;

 FUNC_0(VAR_21->acl_cnt <= VAR_6,
     ("aclp->acl_cnt <= ACL_MAX_ENTRIES"));







 for (VAR_22 = 0; VAR_22 < VAR_21->acl_cnt; VAR_22++) {
  VAR_26 = &(VAR_21->acl_entry[VAR_22]);

  if (VAR_26->ae_entry_type != VAR_1 &&
      VAR_26->ae_entry_type != VAR_2)
   continue;

  if (VAR_26->ae_flags & VAR_0)
   continue;

  if (VAR_26->ae_tag == VAR_9) {
   if ((VAR_26->ae_perm & VAR_8) &&
       ((VAR_25 & VAR_13) == 0)) {
    VAR_25 |= VAR_13;
    if (VAR_26->ae_entry_type == VAR_1)
     VAR_24 |= VAR_13;
   }
   if ((VAR_26->ae_perm & VAR_10) &&
        ((VAR_25 & VAR_16) == 0)) {
    VAR_25 |= VAR_16;
    if (VAR_26->ae_entry_type == VAR_1)
     VAR_24 |= VAR_16;
   }
   if ((VAR_26->ae_perm & VAR_4) &&
       ((VAR_25 & VAR_19) == 0)) {
    VAR_25 |= VAR_19;
    if (VAR_26->ae_entry_type == VAR_1)
     VAR_24 |= VAR_19;
   }
  } else if (VAR_26->ae_tag == VAR_5) {
   if ((VAR_26->ae_perm & VAR_8) &&
       ((VAR_25 & VAR_11) == 0)) {
    VAR_25 |= VAR_11;
    if (VAR_26->ae_entry_type == VAR_1)
     VAR_24 |= VAR_11;
   }
   if ((VAR_26->ae_perm & VAR_10) &&
       ((VAR_25 & VAR_14) == 0)) {
    VAR_25 |= VAR_14;
    if (VAR_26->ae_entry_type == VAR_1)
     VAR_24 |= VAR_14;
   }
   if ((VAR_26->ae_perm & VAR_4) &&
       ((VAR_25 & VAR_17) == 0)) {
    VAR_25 |= VAR_17;
    if (VAR_26->ae_entry_type == VAR_1)
     VAR_24 |= VAR_17;
   }
  } else if (VAR_26->ae_tag == VAR_3) {
   if (VAR_26->ae_perm & VAR_8) {
    if ((VAR_25 & VAR_13) == 0) {
     VAR_25 |= VAR_13;
     if (VAR_26->ae_entry_type == VAR_1)
      VAR_24 |= VAR_13;
    }
    if ((VAR_25 & VAR_11) == 0) {
     VAR_25 |= VAR_11;
     if (VAR_26->ae_entry_type == VAR_1)
      VAR_24 |= VAR_11;
    }
    if ((VAR_25 & VAR_12) == 0) {
     VAR_25 |= VAR_12;
     if (VAR_26->ae_entry_type == VAR_1)
      VAR_24 |= VAR_12;
    }
   }
   if (VAR_26->ae_perm & VAR_10) {
    if ((VAR_25 & VAR_16) == 0) {
     VAR_25 |= VAR_16;
     if (VAR_26->ae_entry_type == VAR_1)
      VAR_24 |= VAR_16;
    }
    if ((VAR_25 & VAR_14) == 0) {
     VAR_25 |= VAR_14;
     if (VAR_26->ae_entry_type == VAR_1)
      VAR_24 |= VAR_14;
    }
    if ((VAR_25 & VAR_15) == 0) {
     VAR_25 |= VAR_15;
     if (VAR_26->ae_entry_type == VAR_1)
      VAR_24 |= VAR_15;
    }
   }
   if (VAR_26->ae_perm & VAR_4) {
    if ((VAR_25 & VAR_19) == 0) {
     VAR_25 |= VAR_19;
     if (VAR_26->ae_entry_type == VAR_1)
      VAR_24 |= VAR_19;
    }
    if ((VAR_25 & VAR_17) == 0) {
     VAR_25 |= VAR_17;
     if (VAR_26->ae_entry_type == VAR_1)
      VAR_24 |= VAR_17;
    }
    if ((VAR_25 & VAR_18) == 0) {
     VAR_25 |= VAR_18;
     if (VAR_26->ae_entry_type == VAR_1)
      VAR_24 |= VAR_18;
    }
   }
  }
 }

 *VAR_20 = VAR_24 | (VAR_23 & VAR_7);
}
