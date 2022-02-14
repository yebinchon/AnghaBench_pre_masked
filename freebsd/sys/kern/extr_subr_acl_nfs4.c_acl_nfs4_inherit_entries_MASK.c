
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acl_entry {int ae_flags; int ae_tag; scalar_t__ ae_entry_type; int ae_perm; } ;
struct acl {int acl_cnt; struct acl_entry* acl_entry; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int,char*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static void
FUNC_1(const struct acl *VAR_22,
    struct acl *VAR_23, mode_t VAR_24, int VAR_25,
    int VAR_26)
{
 int VAR_27, VAR_28, VAR_29;
 const struct acl_entry *VAR_30;
 struct acl_entry *VAR_31;

 FUNC_0(VAR_22->acl_cnt <= VAR_11,
     ("parent_aclp->acl_cnt <= ACL_MAX_ENTRIES"));

 for (VAR_27 = 0; VAR_27 < VAR_22->acl_cnt; VAR_27++) {
  VAR_30 = &(VAR_22->acl_entry[VAR_27]);
  VAR_28 = VAR_30->ae_flags;
  VAR_29 = VAR_30->ae_tag;




  if (VAR_29 == VAR_13 || VAR_29 == VAR_10 ||
      VAR_29 == VAR_8)
   continue;




  if ((VAR_28 & (VAR_1 |
      VAR_2)) == 0)
   continue;





  if (!VAR_26 && (VAR_28 & VAR_2) == 0)
   continue;






  if (VAR_26 &&
      (VAR_28 & VAR_1) == 0 &&
      (VAR_28 & VAR_5))
   continue;




  FUNC_0(VAR_23->acl_cnt + 1 <= VAR_11,
      ("child_aclp->acl_cnt + 1 <= ACL_MAX_ENTRIES"));
  VAR_31 = &(VAR_23->acl_entry[VAR_23->acl_cnt]);
  *VAR_31 = *VAR_30;
  VAR_23->acl_cnt++;

  VAR_31->ae_flags &= ~VAR_4;
  VAR_31->ae_flags |= VAR_3;





  if (VAR_31->ae_entry_type != VAR_6 &&
      VAR_31->ae_entry_type != VAR_7)
   continue;
  if (VAR_31->ae_flags & VAR_5 ||
      !VAR_26) {
   VAR_31->ae_flags &= ~(VAR_5 |
   VAR_2 | VAR_1 |
   VAR_4);
  }






  if (VAR_26 &&
      (VAR_31->ae_flags & VAR_2) &&
      ((VAR_31->ae_flags & VAR_1) == 0)) {
   VAR_31->ae_flags |= VAR_4;
  }

  if (VAR_31->ae_entry_type == VAR_6 &&
      (VAR_31->ae_flags & VAR_4) == 0) {



   VAR_31->ae_perm &= ~(VAR_14 | VAR_18 |
       VAR_17 | VAR_15);




   if ((VAR_24 & VAR_19) == 0)
    VAR_31->ae_perm &= ~VAR_12;
   if ((VAR_24 & VAR_20) == 0)
    VAR_31->ae_perm &=
        ~(VAR_16 | VAR_0);
   if ((VAR_24 & VAR_21) == 0)
    VAR_31->ae_perm &= ~VAR_9;
  }
 }
}
