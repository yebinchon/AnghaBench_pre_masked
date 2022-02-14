
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct ucred {int cr_uid; } ;
struct acl_entry {int ae_tag; int ae_perm; int ae_id; } ;
struct acl {int acl_cnt; struct acl_entry* acl_entry; } ;
typedef int gid_t ;
typedef enum vtype { ____Placeholder_vtype } vtype ;
typedef int accmode_t ;


 int VAR_0 ;




 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
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
 int FUNC_1 (struct acl*) ;
 int FUNC_2 (int ,struct ucred*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct ucred*,int ) ;

int
FUNC_5(enum vtype VAR_19, uid_t VAR_20, gid_t VAR_21,
    struct acl *VAR_22, accmode_t VAR_23, struct ucred *VAR_24, int *VAR_25)
{
 struct acl_entry *VAR_26, *VAR_27;
 accmode_t VAR_28;
 accmode_t VAR_29;
 accmode_t VAR_30;
 int VAR_31, VAR_32;

 FUNC_0((VAR_23 & ~(VAR_16 | VAR_18 | VAR_17 | VAR_13 | VAR_14)) == 0,
     ("invalid bit in accmode"));
 FUNC_0((VAR_23 & VAR_14) == 0 || (VAR_23 & VAR_18),
      ("VAPPEND without VWRITE"));
 if (VAR_25 != ((void*)0))
  *VAR_25 = 0;
 VAR_29 = 0;

 if (VAR_19 == VAR_15) {
  if ((VAR_23 & VAR_16) && !FUNC_4(VAR_24, VAR_7))
   VAR_29 |= VAR_16;
 } else {





  if ((VAR_23 & VAR_16) && (FUNC_1(VAR_22) &
      (VAR_12 | VAR_10 | VAR_11)) != 0 &&
      !FUNC_4(VAR_24, VAR_6))
   VAR_29 |= VAR_16;
 }

 if ((VAR_23 & VAR_17) && !FUNC_4(VAR_24, VAR_8))
  VAR_29 |= VAR_17;

 if (((VAR_23 & VAR_18) || (VAR_23 & VAR_14)) &&
     !FUNC_4(VAR_24, VAR_9))
  VAR_29 |= (VAR_18 | VAR_14);

 if ((VAR_23 & VAR_13) && !FUNC_4(VAR_24, VAR_5))
  VAR_29 |= VAR_13;







 VAR_27 = VAR_26 = ((void*)0);
 for (VAR_32 = 0; VAR_32 < VAR_22->acl_cnt; VAR_32++) {
  switch (VAR_22->acl_entry[VAR_32].ae_tag) {
  case 128:
   if (VAR_20 != VAR_24->cr_uid)
    break;
   VAR_28 = 0;
   VAR_28 |= VAR_13;
   if (VAR_22->acl_entry[VAR_32].ae_perm & VAR_0)
    VAR_28 |= VAR_16;
   if (VAR_22->acl_entry[VAR_32].ae_perm & VAR_1)
    VAR_28 |= VAR_17;
   if (VAR_22->acl_entry[VAR_32].ae_perm & VAR_2)
    VAR_28 |= (VAR_18 | VAR_14);
   if ((VAR_23 & VAR_28) == VAR_23)
    return (0);




   if ((VAR_23 & (VAR_28 | VAR_29)) ==
       VAR_23) {
    if (VAR_25 != ((void*)0))
     *VAR_25 = 1;
    return (0);
   }
   goto error;

  case 131:
   VAR_27 = &VAR_22->acl_entry[VAR_32];
   break;

  case 130:
   VAR_26 = &VAR_22->acl_entry[VAR_32];
   break;

  default:
   break;
  }
 }







 if (VAR_26 == ((void*)0)) {



  FUNC_3("vaccess_acl_posix1e: ACL_OTHER missing\n");
  return (VAR_4);
 }
 if (VAR_27 != ((void*)0)) {
  VAR_30 = 0;
  if (VAR_27->ae_perm & VAR_0)
   VAR_30 |= VAR_16;
  if (VAR_27->ae_perm & VAR_1)
   VAR_30 |= VAR_17;
  if (VAR_27->ae_perm & VAR_2)
   VAR_30 |= (VAR_18 | VAR_14);
 } else
  VAR_30 = VAR_16 | VAR_17 | VAR_18 | VAR_14;






 for (VAR_32 = 0; VAR_32 < VAR_22->acl_cnt; VAR_32++) {
  switch (VAR_22->acl_entry[VAR_32].ae_tag) {
  case 129:
   if (VAR_22->acl_entry[VAR_32].ae_id != VAR_24->cr_uid)
    break;
   VAR_28 = 0;
   if (VAR_22->acl_entry[VAR_32].ae_perm & VAR_0)
    VAR_28 |= VAR_16;
   if (VAR_22->acl_entry[VAR_32].ae_perm & VAR_1)
    VAR_28 |= VAR_17;
   if (VAR_22->acl_entry[VAR_32].ae_perm & VAR_2)
    VAR_28 |= (VAR_18 | VAR_14);
   VAR_28 &= VAR_30;
   if ((VAR_23 & VAR_28) == VAR_23)
    return (0);



   if ((VAR_23 & (VAR_28 | VAR_29)) !=
       VAR_23)
    goto error;

   if (VAR_25 != ((void*)0))
    *VAR_25 = 1;
   return (0);
  }
 }
 VAR_31 = 0;
 for (VAR_32 = 0; VAR_32 < VAR_22->acl_cnt; VAR_32++) {
  switch (VAR_22->acl_entry[VAR_32].ae_tag) {
  case 132:
   if (!FUNC_2(VAR_21, VAR_24))
    break;
   VAR_28 = 0;
   if (VAR_22->acl_entry[VAR_32].ae_perm & VAR_0)
    VAR_28 |= VAR_16;
   if (VAR_22->acl_entry[VAR_32].ae_perm & VAR_1)
    VAR_28 |= VAR_17;
   if (VAR_22->acl_entry[VAR_32].ae_perm & VAR_2)
    VAR_28 |= (VAR_18 | VAR_14);
   VAR_28 &= VAR_30;

   if ((VAR_23 & VAR_28) == VAR_23)
    return (0);

   VAR_31 = 1;
   break;

  case 133:
   if (!FUNC_2(VAR_22->acl_entry[VAR_32].ae_id, VAR_24))
    break;
   VAR_28 = 0;
   if (VAR_22->acl_entry[VAR_32].ae_perm & VAR_0)
    VAR_28 |= VAR_16;
   if (VAR_22->acl_entry[VAR_32].ae_perm & VAR_1)
    VAR_28 |= VAR_17;
   if (VAR_22->acl_entry[VAR_32].ae_perm & VAR_2)
    VAR_28 |= (VAR_18 | VAR_14);
   VAR_28 &= VAR_30;

   if ((VAR_23 & VAR_28) == VAR_23)
    return (0);

   VAR_31 = 1;
   break;

  default:
   break;
  }
 }

 if (VAR_31 == 1) {




  for (VAR_32 = 0; VAR_32 < VAR_22->acl_cnt; VAR_32++) {
   switch (VAR_22->acl_entry[VAR_32].ae_tag) {
   case 132:
    if (!FUNC_2(VAR_21, VAR_24))
     break;
    VAR_28 = 0;
    if (VAR_22->acl_entry[VAR_32].ae_perm & VAR_0)
     VAR_28 |= VAR_16;
    if (VAR_22->acl_entry[VAR_32].ae_perm & VAR_1)
     VAR_28 |= VAR_17;
    if (VAR_22->acl_entry[VAR_32].ae_perm & VAR_2)
     VAR_28 |= (VAR_18 | VAR_14);
    VAR_28 &= VAR_30;




    if ((VAR_23 & (VAR_28 | VAR_29))
        != VAR_23)
     break;

    if (VAR_25 != ((void*)0))
     *VAR_25 = 1;
    return (0);

   case 133:
    if (!FUNC_2(VAR_22->acl_entry[VAR_32].ae_id,
        VAR_24))
     break;
    VAR_28 = 0;
    if (VAR_22->acl_entry[VAR_32].ae_perm & VAR_0)
    VAR_28 |= VAR_16;
    if (VAR_22->acl_entry[VAR_32].ae_perm & VAR_1)
     VAR_28 |= VAR_17;
    if (VAR_22->acl_entry[VAR_32].ae_perm & VAR_2)
     VAR_28 |= (VAR_18 | VAR_14);
    VAR_28 &= VAR_30;




    if ((VAR_23 & (VAR_28 | VAR_29))
        != VAR_23)
     break;

    if (VAR_25 != ((void*)0))
     *VAR_25 = 1;
    return (0);

   default:
    break;
   }
  }




  goto error;
 }




 VAR_28 = 0;
 if (VAR_26->ae_perm & VAR_0)
  VAR_28 |= VAR_16;
 if (VAR_26->ae_perm & VAR_1)
  VAR_28 |= VAR_17;
 if (VAR_26->ae_perm & VAR_2)
  VAR_28 |= (VAR_18 | VAR_14);

 if ((VAR_23 & VAR_28) == VAR_23)
  return (0);



 if ((VAR_23 & (VAR_28 | VAR_29)) == VAR_23) {
  if (VAR_25 != ((void*)0))
   *VAR_25 = 1;
  return (0);
 }

error:
 return ((VAR_23 & VAR_13) ? VAR_4 : VAR_3);
}
