
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
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (int*) ;
 int* FUNC_7 (int) ;
 int FUNC_8 (char*) ;

void
FUNC_9(struct archive_entry *VAR_5,
    struct archive_test_acl_t *VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
 int *VAR_10;
 int VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18;
 const char *VAR_19;

 VAR_13 = 0;
 VAR_10 = FUNC_7(sizeof(VAR_10[0]) * VAR_7);

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  if ((VAR_6[VAR_11].type & VAR_8) != 0) {
   VAR_10[VAR_13] = VAR_11;
   VAR_13++;
  }
 }

 FUNC_5("No ACL's to compare, type mask: %d", VAR_8);
 FUNC_3(VAR_13 > 0);
 if (VAR_13 == 0)
  return;

 while (0 == (VAR_12 = FUNC_0(VAR_5, VAR_8,
    &VAR_14, &VAR_15, &VAR_16, &VAR_17, &VAR_19))) {
  for (VAR_11 = 0, VAR_18 = 0; VAR_11 < VAR_13 && !VAR_18; VAR_11++) {
   if (FUNC_2(&VAR_6[VAR_10[VAR_11]], VAR_14,
       VAR_15, VAR_16, VAR_17, VAR_19)) {

    VAR_10[VAR_11] = VAR_10[VAR_13 - 1];
    VAR_13--;
    VAR_18 = 1;
   }
  }
  if (VAR_14 == VAR_2
      && VAR_16 == VAR_3) {
   if (!VAR_18) FUNC_8("No match for user_obj perm\n");
   FUNC_5("USER_OBJ permset (%02o) != user mode (%02o)",
       VAR_15, 07 & (VAR_9 >> 6));
   FUNC_3((VAR_15 << 6) == (VAR_9 & 0700));
  } else if (VAR_14 == VAR_2
      && VAR_16 == VAR_0) {
   if (!VAR_18) FUNC_8("No match for group_obj perm\n");
   FUNC_5("GROUP_OBJ permset %02o != group mode %02o",
       VAR_15, 07 & (VAR_9 >> 3));
   FUNC_3((VAR_15 << 3) == (VAR_9 & 0070));
  } else if (VAR_14 == VAR_2
      && VAR_16 == VAR_1) {
   if (!VAR_18) FUNC_8("No match for other perm\n");
   FUNC_5("OTHER permset (%02o) != other mode (%02o)",
       VAR_15, VAR_9 & 07);
   FUNC_3((VAR_15 << 0) == (VAR_9 & 0007));
  } else {
   FUNC_5("Could not find match for ACL "
       "(type=%#010x,permset=%#010x,tag=%d,qual=%d,"
       "name=``%s'')", VAR_14, VAR_15, VAR_16, VAR_17, VAR_19);
   FUNC_3(VAR_18 == 1);
  }
 }
 FUNC_4(VAR_4, VAR_12);
 if ((VAR_8 & VAR_2) != 0)
  FUNC_3((mode_t)(VAR_9 & 0777) == (FUNC_1(VAR_5)
      & 0777));
 FUNC_5("Could not find match for ACL "
     "(type=%#010x,permset=%#010x,tag=%d,qual=%d,name=``%s'')",
     VAR_6[VAR_10[0]].type, VAR_6[VAR_10[0]].permset,
     VAR_6[VAR_10[0]].tag, VAR_6[VAR_10[0]].qual, VAR_6[VAR_10[0]].name);
 FUNC_3(VAR_13 == 0);
 FUNC_6(VAR_10);
}
