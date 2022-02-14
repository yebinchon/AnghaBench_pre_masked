
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acl_entry {scalar_t__ ae_entry_type; int ae_flags; scalar_t__ ae_tag; int ae_perm; int ae_id; } ;
struct acl {int acl_cnt; struct acl_entry* acl_entry; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int,char*) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 struct acl_entry* FUNC_1 (struct acl*,scalar_t__,int,scalar_t__) ;
 struct acl_entry* FUNC_2 (struct acl*,int) ;
 int FUNC_3 (struct acl_entry*,scalar_t__,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct acl *VAR_33, mode_t VAR_34,
    int VAR_35)
{
 int VAR_36, VAR_37, VAR_38;
 struct acl_entry *VAR_39, *VAR_40, *VAR_41,
     *VAR_42, *VAR_43, *VAR_44, *VAR_45, *VAR_46, *VAR_47;
 mode_t VAR_48;
 const int VAR_49 = 04;
 const int VAR_50 = 02;
 const int VAR_51 = 01;

 FUNC_0(VAR_33->acl_cnt <= VAR_11,
     ("aclp->acl_cnt <= ACL_MAX_ENTRIES"));
 for (VAR_36 = 0; VAR_36 < VAR_33->acl_cnt; VAR_36++) {
  VAR_39 = &(VAR_33->acl_entry[VAR_36]);




  if (VAR_39->ae_entry_type != VAR_5 &&
      VAR_39->ae_entry_type != VAR_6)
   continue;




  if (VAR_39->ae_flags & VAR_3)
   continue;





  if (VAR_39->ae_flags &
      (VAR_2 | VAR_1)) {





   VAR_40 = FUNC_2(VAR_33, VAR_36);





   VAR_39->ae_flags |= VAR_3;
   VAR_40->ae_flags &= ~(VAR_2 |
       VAR_1 |
       VAR_4);




   VAR_36++;
   VAR_39 = VAR_40;
  }






  if (VAR_39->ae_tag == VAR_18 ||
      VAR_39->ae_tag == VAR_10 ||
      VAR_39->ae_tag == VAR_7) {
   VAR_39->ae_perm &= ~(VAR_14 | VAR_21 |
       VAR_0 | VAR_8);
   continue;
  }
  if (VAR_39->ae_entry_type != VAR_5)
   continue;

  VAR_37 = 0;
  if (VAR_36 > 0) {
   VAR_37 = 1;
   VAR_41 = &(VAR_33->acl_entry[VAR_36 - 1]);




   if (VAR_41->ae_entry_type != VAR_6)
    VAR_37 = 0;
   if (VAR_41->ae_id != VAR_39->ae_id ||
       VAR_41->ae_tag != VAR_39->ae_tag)
    VAR_37 = 0;

   if (VAR_41->ae_flags)
    VAR_37 = 0;







   if (VAR_41->ae_perm & ~(VAR_39->ae_perm))
    VAR_37 = 0;

   if (VAR_41->ae_perm & ~(VAR_14 |
       VAR_21 | VAR_0 | VAR_8))
    VAR_37 = 0;
  }

  if (!VAR_37) {






   VAR_41 = VAR_39;
   VAR_39 = FUNC_2(VAR_33, VAR_36);


   VAR_36++;

   VAR_41->ae_tag = VAR_39->ae_tag;
   VAR_41->ae_id = VAR_39->ae_id;
   VAR_41->ae_flags = VAR_39->ae_flags;
   VAR_41->ae_perm = 0;
   VAR_41->ae_entry_type = VAR_6;
  }
  VAR_48 = VAR_34 >> 3;







  if (VAR_39->ae_tag == VAR_17 && VAR_39->ae_id == VAR_35)
   VAR_48 = VAR_48 >> 3;

  if (VAR_39->ae_perm & VAR_14) {
   if (VAR_48 & VAR_49)
    VAR_41->ae_perm &= ~VAR_14;
   else
    VAR_41->ae_perm |= VAR_14;
  }

  if (VAR_39->ae_perm & VAR_21) {
   if (VAR_48 & VAR_50)
    VAR_41->ae_perm &= ~VAR_21;
   else
    VAR_41->ae_perm |= VAR_21;
  }

  if (VAR_39->ae_perm & VAR_0) {
   if (VAR_48 & VAR_50)
    VAR_41->ae_perm &= ~VAR_0;
   else
    VAR_41->ae_perm |= VAR_0;
  }

  if (VAR_39->ae_perm & VAR_8) {
   if (VAR_48 & VAR_51)
    VAR_41->ae_perm &= ~VAR_8;
   else
    VAR_41->ae_perm |= VAR_8;
  }







  if (VAR_39->ae_tag == VAR_9 &&
      VAR_39->ae_entry_type == VAR_5) {
   mode_t VAR_52, VAR_53;
   VAR_52 = (VAR_34 >> 3) & 07;
   VAR_53 = VAR_34 >> 6;
   VAR_52 &= ~VAR_53;

   if (VAR_52) {
    if (VAR_52 & VAR_49) {
     VAR_39->ae_perm &= ~VAR_14;
     VAR_41->ae_perm &= ~VAR_14;
    }

    if (VAR_52 & VAR_50) {
     VAR_39->ae_perm &=
         ~(VAR_21 | VAR_0);
     VAR_41->ae_perm &=
         ~(VAR_21 | VAR_0);
    }

    if (VAR_52 & VAR_51) {
     VAR_39->ae_perm &= ~VAR_8;
     VAR_41->ae_perm &= ~VAR_8;
    }
   }
  }
 }





 VAR_38 = 0;
 if (VAR_33->acl_cnt < 6) {
  VAR_38 = 1;
 } else {
  VAR_47 = &(VAR_33->acl_entry[VAR_33->acl_cnt - 1]);
  VAR_46 = &(VAR_33->acl_entry[VAR_33->acl_cnt - 2]);
  VAR_45 = &(VAR_33->acl_entry[VAR_33->acl_cnt - 3]);
  VAR_44 = &(VAR_33->acl_entry[VAR_33->acl_cnt - 4]);
  VAR_43 = &(VAR_33->acl_entry[VAR_33->acl_cnt - 5]);
  VAR_42 = &(VAR_33->acl_entry[VAR_33->acl_cnt - 6]);

  if (!FUNC_3(VAR_42, VAR_18, 0,
      VAR_6))
   VAR_38 = 1;
  if (!FUNC_3(VAR_43, VAR_18, VAR_19 |
      VAR_23 | VAR_20 |
      VAR_22, VAR_5))
   VAR_38 = 1;
  if (!FUNC_3(VAR_44, VAR_10, 0,
      VAR_6))
   VAR_38 = 1;
  if (!FUNC_3(VAR_45, VAR_10, 0,
      VAR_5))
   VAR_38 = 1;
  if (!FUNC_3(VAR_46, VAR_7, VAR_19 |
      VAR_23 | VAR_20 |
      VAR_22, VAR_6))
   VAR_38 = 1;
  if (!FUNC_3(VAR_47, VAR_7, VAR_12 |
      VAR_13 | VAR_15 |
      VAR_16, VAR_5))
   VAR_38 = 1;
 }

 if (VAR_38) {
  FUNC_0(VAR_33->acl_cnt + 6 <= VAR_11,
      ("aclp->acl_cnt <= ACL_MAX_ENTRIES"));

  VAR_42 = FUNC_1(VAR_33, VAR_18, 0, VAR_6);
  VAR_43 = FUNC_1(VAR_33, VAR_18, VAR_19 |
      VAR_23 | VAR_20 |
      VAR_22, VAR_5);
  VAR_44 = FUNC_1(VAR_33, VAR_10, 0, VAR_6);
  VAR_45 = FUNC_1(VAR_33, VAR_10, 0, VAR_5);
  VAR_46 = FUNC_1(VAR_33, VAR_7, VAR_19 |
      VAR_23 | VAR_20 |
      VAR_22, VAR_6);
  VAR_47 = FUNC_1(VAR_33, VAR_7, VAR_12 |
      VAR_13 | VAR_15 |
      VAR_16, VAR_5);

  FUNC_0(VAR_42 != ((void*)0) && VAR_43 != ((void*)0) && VAR_44 != ((void*)0) && VAR_45 != ((void*)0) &&
      VAR_46 != ((void*)0) && VAR_47 != ((void*)0), ("couldn't append to ACL."));
 }




 if (VAR_34 & VAR_26)
  VAR_43->ae_perm |= VAR_14;
 else
  VAR_42->ae_perm |= VAR_14;
 if (VAR_34 & VAR_29)
  VAR_43->ae_perm |= (VAR_21 | VAR_0);
 else
  VAR_42->ae_perm |= (VAR_21 | VAR_0);
 if (VAR_34 & VAR_32)
  VAR_43->ae_perm |= VAR_8;
 else
  VAR_42->ae_perm |= VAR_8;

 if (VAR_34 & VAR_24)
  VAR_45->ae_perm |= VAR_14;
 else
  VAR_44->ae_perm |= VAR_14;
 if (VAR_34 & VAR_27)
  VAR_45->ae_perm |= (VAR_21 | VAR_0);
 else
  VAR_44->ae_perm |= (VAR_21 | VAR_0);
 if (VAR_34 & VAR_30)
  VAR_45->ae_perm |= VAR_8;
 else
  VAR_44->ae_perm |= VAR_8;

 if (VAR_34 & VAR_25)
  VAR_47->ae_perm |= VAR_14;
 else
  VAR_46->ae_perm |= VAR_14;
 if (VAR_34 & VAR_28)
  VAR_47->ae_perm |= (VAR_21 | VAR_0);
 else
  VAR_46->ae_perm |= (VAR_21 | VAR_0);
 if (VAR_34 & VAR_31)
  VAR_47->ae_perm |= VAR_8;
 else
  VAR_46->ae_perm |= VAR_8;
}
