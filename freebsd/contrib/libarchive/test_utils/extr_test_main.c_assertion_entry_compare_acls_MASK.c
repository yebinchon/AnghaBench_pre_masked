
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_test_acl_t {int type; int permset; int tag; int qual; char const* name; } ;
struct archive_entry {int dummy; } ;
typedef int mode_t ;
typedef int marker ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct archive_entry*,int,int*,int*,int*,int*,char const**) ;
 int FUNC_1 (struct archive_entry*) ;
 scalar_t__ FUNC_2 (struct archive_test_acl_t*,int,int,int,int,char const*) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int,char*,...) ;
 int FUNC_6 (int*) ;
 int* FUNC_7 (int) ;

int
FUNC_8(const char *VAR_5, int VAR_6,
    struct archive_entry *VAR_7, struct archive_test_acl_t *VAR_8, int VAR_9,
    int VAR_10, int VAR_11)
{
 int *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21;
 const char *VAR_22;

 FUNC_3(VAR_5, VAR_6);

 VAR_16 = 0;
 VAR_15 = 0;
 VAR_12 = FUNC_7(sizeof(VAR_12[0]) * VAR_9);

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  if ((VAR_8[VAR_13].type & VAR_10) != 0) {
   VAR_12[VAR_15] = VAR_13;
   VAR_15++;
  }
 }

 if (VAR_15 == 0) {
  FUNC_5(VAR_5, VAR_6, "No ACL's to compare, type mask: %d",
      VAR_10);
  return (1);
 }

 while (0 == (VAR_14 = FUNC_0(VAR_7, VAR_10,
    &VAR_17, &VAR_18, &VAR_19, &VAR_20, &VAR_22))) {
  for (VAR_13 = 0, VAR_21 = 0; VAR_13 < VAR_15 && !VAR_21; VAR_13++) {
   if (FUNC_2(&VAR_8[VAR_12[VAR_13]], VAR_17,
       VAR_18, VAR_19, VAR_20, VAR_22)) {

    VAR_12[VAR_13] = VAR_12[VAR_15 - 1];
    VAR_15--;
    VAR_21 = 1;
   }
  }
  if (VAR_17 == VAR_2
      && VAR_19 == VAR_3) {
   if (!VAR_21) {
    FUNC_5(VAR_5, VAR_6, "No match for "
        "user_obj perm");
    FUNC_4(((void*)0));
    VAR_16 = 1;
   }
   if ((VAR_18 << 6) != (VAR_11 & 0700)) {
    FUNC_5(VAR_5, VAR_6, "USER_OBJ permset "
        "(%02o) != user mode (%02o)", VAR_18,
        07 & (VAR_11 >> 6));
    FUNC_4(((void*)0));
    VAR_16 = 1;
   }
  } else if (VAR_17 == VAR_2
      && VAR_19 == VAR_0) {
   if (!VAR_21) {
    FUNC_5(VAR_5, VAR_6, "No match for "
        "group_obj perm");
    FUNC_4(((void*)0));
    VAR_16 = 1;
   }
   if ((VAR_18 << 3) != (VAR_11 & 0070)) {
    FUNC_5(VAR_5, VAR_6, "GROUP_OBJ permset "
        "(%02o) != group mode (%02o)", VAR_18,
        07 & (VAR_11 >> 3));
    FUNC_4(((void*)0));
    VAR_16 = 1;
   }
  } else if (VAR_17 == VAR_2
      && VAR_19 == VAR_1) {
   if (!VAR_21) {
    FUNC_5(VAR_5, VAR_6, "No match for "
        "other perm");
    FUNC_4(((void*)0));
    VAR_16 = 1;
   }
   if ((VAR_18 << 0) != (VAR_11 & 0007)) {
    FUNC_5(VAR_5, VAR_6, "OTHER permset "
        "(%02o) != other mode (%02o)", VAR_18,
        VAR_11 & 07);
    FUNC_4(((void*)0));
    VAR_16 = 1;
   }
  } else if (VAR_21 != 1) {
   FUNC_5(VAR_5, VAR_6, "Could not find match for "
       "ACL (type=%#010x,permset=%#010x,tag=%d,qual=%d,"
       "name=``%s'')", VAR_17, VAR_18, VAR_19, VAR_20, VAR_22);
   FUNC_4(((void*)0));
   VAR_16 = 1;
  }
 }
 if (VAR_14 != VAR_4) {
  FUNC_5(VAR_5, VAR_6, "Should not exit before EOF");
  FUNC_4(((void*)0));
  VAR_16 = 1;
 }
 if ((VAR_10 & VAR_2) != 0 &&
     (mode_t)(VAR_11 & 0777) != (FUNC_1(VAR_7) & 0777)) {
  FUNC_5(VAR_5, VAR_6, "Mode (%02o) and entry mode (%02o) "
      "mismatch", VAR_11, FUNC_1(VAR_7));
  FUNC_4(((void*)0));
  VAR_16 = 1;
 }
 if (VAR_15 != 0) {
  FUNC_5(VAR_5, VAR_6, "Could not find match for ACL "
      "(type=%#010x,permset=%#010x,tag=%d,qual=%d,name=``%s'')",
      VAR_8[VAR_12[0]].type, VAR_8[VAR_12[0]].permset,
      VAR_8[VAR_12[0]].tag, VAR_8[VAR_12[0]].qual,
      VAR_8[VAR_12[0]].name);
  FUNC_4(((void*)0));
  VAR_16 = 1;

 }
 FUNC_6(VAR_12);
 return (VAR_16);
}
