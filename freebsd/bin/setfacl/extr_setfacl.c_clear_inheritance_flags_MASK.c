
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * acl_t ;
typedef int acl_flagset_t ;
typedef int acl_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static acl_t
FUNC_8(acl_t VAR_7)
{
 acl_t VAR_8;
 acl_entry_t VAR_9;
 acl_flagset_t VAR_10;
 int VAR_11, VAR_12;

 (void)FUNC_3(VAR_7, &VAR_11);
 if (VAR_11 != VAR_0)
  return (VAR_7);

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8 == ((void*)0)) {
  FUNC_7("acl_dup() failed");
  return (VAR_7);
 }

 VAR_12 = VAR_5;
 while (FUNC_4(VAR_8, VAR_12, &VAR_9) == 1) {
  VAR_12 = VAR_6;
  if (FUNC_6(VAR_9, &VAR_10) != 0) {
   FUNC_7("acl_get_flagset_np() failed");
   continue;
  }
  if (FUNC_5(VAR_10, VAR_3) == 1) {
   if (FUNC_0(VAR_8, VAR_9) != 0)
    FUNC_7("acl_delete_entry() failed");
   continue;
  }
  if (FUNC_1(VAR_10,
      VAR_2 |
      VAR_1 |
      VAR_4) != 0)
   FUNC_7("acl_delete_flag_np() failed");
 }

 return (VAR_8);
}
