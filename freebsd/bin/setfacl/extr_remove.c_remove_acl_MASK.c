
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ acl_tag_t ;
typedef int * acl_t ;
typedef int acl_entry_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int ,scalar_t__*) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (int,char*,char const*) ;
 int VAR_4 ;
 int FUNC_9 (char*,char const*,...) ;

int
FUNC_10(acl_t VAR_5, acl_t *VAR_6, const char *VAR_7)
{
 acl_entry_t VAR_8;
 acl_t VAR_9;
 acl_tag_t VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_11 = 0;

 FUNC_3(VAR_5, &VAR_13);
 FUNC_3(*VAR_6, &VAR_14);

 if (FUNC_7(VAR_13, VAR_14)) {
  FUNC_9("%s: branding mismatch; existing ACL is %s, "
      "entry to be removed is %s", VAR_7,
      FUNC_6(VAR_14), FUNC_6(VAR_13));
  return (-1);
 }

 VAR_11 = 0;

 VAR_9 = FUNC_1(*VAR_6);
 if (VAR_9 == ((void*)0))
  FUNC_8(1, "%s: acl_dup() failed", VAR_7);

 VAR_10 = VAR_3;


 VAR_12 = VAR_0;
 while (FUNC_4(VAR_5, VAR_12, &VAR_8) == 1) {
  VAR_12 = VAR_2;
  if (FUNC_5(VAR_8, &VAR_10) == -1)
   FUNC_8(1, "%s: acl_get_tag_type() failed", VAR_7);
  if (VAR_10 == VAR_1)
   VAR_4 = 1;
  if (FUNC_0(VAR_9, VAR_8) == -1) {
   VAR_11++;
   FUNC_9("%s: cannot remove non-existent ACL entry",
       VAR_7);
  }
 }

 FUNC_2(*VAR_6);
 *VAR_6 = VAR_9;

 if (VAR_11)
  return (-1);

 return (0);
}
