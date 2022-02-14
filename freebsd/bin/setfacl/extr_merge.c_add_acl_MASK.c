
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int * acl_t ;
typedef int acl_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int **,int *,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int*) ;
 int FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (int,char*,char const*) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (char*,char const*,...) ;

int
FUNC_11(acl_t VAR_3, uint VAR_4, acl_t *VAR_5, const char *VAR_6)
{
 acl_entry_t VAR_7, VAR_8;
 acl_t VAR_9;
 int VAR_10, VAR_11, VAR_12;

 FUNC_4(VAR_3, &VAR_11);
 FUNC_4(*VAR_5, &VAR_12);

 if (VAR_12 != VAR_0) {
  FUNC_10("%s: the '-a' option is only applicable to NFSv4 ACLs",
      VAR_6);
  return (-1);
 }

 if (FUNC_7(VAR_11, VAR_0)) {
  FUNC_10("%s: branding mismatch; existing ACL is NFSv4, "
      "entry to be added is %s", VAR_6,
      FUNC_6(VAR_11));
  return (-1);
 }

 VAR_9 = FUNC_2(*VAR_5);
 if (VAR_9 == ((void*)0))
  FUNC_8(1, "%s: acl_dup() failed", VAR_6);

 VAR_10 = VAR_1;

 while (FUNC_5(VAR_3, VAR_10, &VAR_7) == 1) {
  VAR_10 = VAR_2;

  if (FUNC_1(&VAR_9, &VAR_8, VAR_4) == -1) {
   FUNC_9("%s: acl_create_entry_np() failed", VAR_6);
   FUNC_3(VAR_9);
   return (-1);
  }







  VAR_4++;

  if (FUNC_0(VAR_8, VAR_7) == -1)
   FUNC_8(1, "%s: acl_copy_entry() failed", VAR_6);
 }

 FUNC_3(*VAR_5);
 *VAR_5 = VAR_9;

 return (0);
}
