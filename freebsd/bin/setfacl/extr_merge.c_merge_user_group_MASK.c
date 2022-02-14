
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef int acl_permset_t ;
typedef int acl_flagset_t ;
typedef int acl_entry_type_t ;
typedef int acl_entry_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int,char*) ;

__attribute__((used)) static int
FUNC_9(acl_entry_t *VAR_1, acl_entry_t *VAR_2, int VAR_3)
{
 acl_permset_t VAR_4;
 acl_entry_type_t VAR_5;
 acl_flagset_t VAR_6;
 int VAR_7;
 uid_t *VAR_8, *VAR_9;

 VAR_7 = 0;

 VAR_8 = FUNC_4(*VAR_1);
 if (VAR_8 == ((void*)0))
  FUNC_8(1, "acl_get_qualifier() failed");
 VAR_9 = FUNC_4(*VAR_2);
 if (VAR_9 == ((void*)0))
  FUNC_8(1, "acl_get_qualifier() failed");
 if (*VAR_8 == *VAR_9) {

  if (FUNC_3(*VAR_1, &VAR_4) == -1)
   FUNC_8(1, "acl_get_permset() failed");
  if (FUNC_7(*VAR_2, VAR_4) == -1)
   FUNC_8(1, "acl_set_permset() failed");

  if (VAR_3 == VAR_0) {
   if (FUNC_1(*VAR_1, &VAR_5))
    FUNC_8(1, "acl_get_entry_type_np() failed");
   if (FUNC_5(*VAR_2, VAR_5))
    FUNC_8(1, "acl_set_entry_type_np() failed");
   if (FUNC_2(*VAR_1, &VAR_6))
    FUNC_8(1, "acl_get_flagset_np() failed");
   if (FUNC_6(*VAR_2, VAR_6))
    FUNC_8(1, "acl_set_flagset_np() failed");
  }

  VAR_7 = 1;
 }
 FUNC_0(VAR_8);
 FUNC_0(VAR_9);

 return (VAR_7);
}
