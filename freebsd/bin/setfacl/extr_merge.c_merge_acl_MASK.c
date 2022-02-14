
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acl_tag_t ;
typedef int * acl_t ;
typedef int acl_permset_t ;
typedef int acl_flagset_t ;
typedef scalar_t__ acl_entry_type_t ;
typedef int acl_entry_t ;


 int VAR_0 ;

 int VAR_1 ;



 int VAR_2 ;



 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int **,int *) ;
 int FUNC_2 (int **,int *,int) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,int,int *) ;
 scalar_t__ FUNC_7 (int ,scalar_t__*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int*) ;
 int FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int,int) ;
 int FUNC_16 (int,char*,char const*) ;
 int FUNC_17 (int,char*,char const*,int) ;
 int VAR_3 ;
 int FUNC_18 (int *,int *,int) ;
 int FUNC_19 (char*,char const*) ;
 int FUNC_20 (char*,char const*,int ,int ) ;

int
FUNC_21(acl_t VAR_4, acl_t *VAR_5, const char *VAR_6)
{
 acl_entry_t VAR_7, VAR_8;
 acl_permset_t VAR_9;
 acl_t VAR_10;
 acl_tag_t VAR_11, VAR_12;
 acl_entry_type_t VAR_13, VAR_14;
 acl_flagset_t VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20 = 0;
 int VAR_21, VAR_22;

 FUNC_5(VAR_4, &VAR_21);
 FUNC_5(*VAR_5, &VAR_22);

 if (FUNC_15(VAR_21, VAR_22)) {
  FUNC_20("%s: branding mismatch; existing ACL is %s, "
      "entry to be merged is %s", VAR_6,
      FUNC_14(VAR_22), FUNC_14(VAR_21));
  return (-1);
 }

 VAR_10 = FUNC_3(*VAR_5);
 if (VAR_10 == ((void*)0))
  FUNC_16(1, "%s: acl_dup() failed", VAR_6);

 VAR_16 = VAR_1;

 while (FUNC_6(VAR_4, VAR_16, &VAR_7) == 1) {
  VAR_16 = VAR_2;
  VAR_18 = 0;
  VAR_19 = 0;


  if (FUNC_10(VAR_7, &VAR_11) == -1)
   FUNC_16(1, "%s: acl_get_tag_type() failed - "
       "invalid ACL entry", VAR_6);
  if (VAR_11 == 131)
   VAR_3 = 1;


  VAR_17 = VAR_1;
  while (FUNC_6(VAR_10, VAR_17, &VAR_8) == 1) {
   VAR_17 = VAR_2;

   if (FUNC_10(VAR_7, &VAR_11) == -1)
    FUNC_16(1, "%s: acl_get_tag_type() failed",
        VAR_6);
   if (FUNC_10(VAR_8, &VAR_12) == -1)
    FUNC_16(1, "%s: acl_get_tag_type() failed",
        VAR_6);
   if (VAR_11 != VAR_12)
    continue;





   if (VAR_21 == VAR_0) {
    if (FUNC_7(VAR_7, &VAR_13))
     FUNC_16(1, "%s: acl_get_entry_type_np() "
         "failed", VAR_6);
    if (FUNC_7(VAR_8, &VAR_14))
     FUNC_16(1, "%s: acl_get_entry_type_np() "
         "failed", VAR_6);
    if (VAR_13 != VAR_14)
     continue;
   }

   switch(VAR_11) {
   case 129:
   case 133:
    VAR_18 = FUNC_18(&VAR_7,
        &VAR_8, VAR_21);
    if (VAR_18 == 0)
     break;

   case 128:
   case 132:
   case 130:
   case 131:
   case 134:
    if (FUNC_9(VAR_7, &VAR_9) == -1)
     FUNC_16(1, "%s: acl_get_permset() failed",
         VAR_6);
    if (FUNC_13(VAR_8, VAR_9) == -1)
     FUNC_16(1, "%s: acl_set_permset() failed",
         VAR_6);

    if (VAR_21 == VAR_0) {
     if (FUNC_7(VAR_7, &VAR_13))
      FUNC_16(1, "%s: acl_get_entry_type_np() failed",
          VAR_6);
     if (FUNC_11(VAR_8, VAR_13))
      FUNC_16(1, "%s: acl_set_entry_type_np() failed",
          VAR_6);
     if (FUNC_8(VAR_7, &VAR_15))
      FUNC_16(1, "%s: acl_get_flagset_np() failed",
          VAR_6);
     if (FUNC_12(VAR_8, VAR_15))
      FUNC_16(1, "%s: acl_set_flagset_np() failed",
          VAR_6);
    }
    VAR_19 = VAR_18 = 1;
    break;
   default:

    FUNC_17(1, "%s: invalid tag type: %i", VAR_6, VAR_11);
    break;
   }
  }


  if (VAR_19 == 0) {






   if (VAR_21 == VAR_0) {
    if (FUNC_2(&VAR_10, &VAR_8, VAR_20) == -1) {
     FUNC_19("%s: acl_create_entry_np() failed", VAR_6);
     FUNC_4(VAR_10);
     return (-1);
    }






    VAR_20++;
   } else {
    if (FUNC_1(&VAR_10, &VAR_8) == -1) {
     FUNC_19("%s: acl_create_entry() failed", VAR_6);
     FUNC_4(VAR_10);
     return (-1);
    }
   }
   if (FUNC_0(VAR_8, VAR_7) == -1)
    FUNC_16(1, "%s: acl_copy_entry() failed", VAR_6);
  }
 }

 FUNC_4(*VAR_5);
 *VAR_5 = VAR_10;

 return (0);
}
