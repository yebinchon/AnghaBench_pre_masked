
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acl_t ;
typedef int acl_entry_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,int ,int*) ;
 int FUNC_10 (char*,int ,int*) ;
 char* FUNC_11 (char*) ;
 char* FUNC_12 (char**,char*) ;
 int FUNC_13 (char*,char*) ;

int
FUNC_14(acl_t VAR_3, char *VAR_4)
{
 int VAR_5, VAR_6;
 acl_entry_t VAR_7;
 char *VAR_8, *VAR_9;

 VAR_5 = FUNC_1(&VAR_3, &VAR_7);
 if (VAR_5)
  return (VAR_5);

 FUNC_3(FUNC_0(VAR_7) == VAR_0);

 if (VAR_4 == ((void*)0))
  goto truncated_entry;
 VAR_8 = FUNC_12(&VAR_4, ":");

 VAR_8 = FUNC_11(VAR_8);
 if ((*VAR_8 == '\0') && (!VAR_4)) {




  return (0);
 }

 VAR_5 = FUNC_10(VAR_8, VAR_7, &VAR_6);
 if (VAR_5)
  goto malformed_field;

 if (VAR_6) {
  if (VAR_4 == ((void*)0))
   goto truncated_entry;
  VAR_9 = VAR_8 = FUNC_12(&VAR_4, ":");
  VAR_5 = FUNC_9(VAR_8, VAR_7, &VAR_6);
  if (VAR_5)
   goto malformed_field;
 }

 if (VAR_4 == ((void*)0))
  goto truncated_entry;
 VAR_8 = FUNC_12(&VAR_4, ":");
 VAR_5 = FUNC_5(VAR_8, VAR_7);
 if (VAR_5)
  goto malformed_field;

 if (VAR_4 == ((void*)0))
  goto truncated_entry;

 if (FUNC_4(VAR_4) > 0) {
  VAR_8 = FUNC_12(&VAR_4, ":");
  VAR_5 = FUNC_8(VAR_8, VAR_7);
  if (VAR_5)
   goto malformed_field;
 }

 if (VAR_4 == ((void*)0))
  goto truncated_entry;
 VAR_8 = FUNC_12(&VAR_4, ":");
 VAR_5 = FUNC_7(VAR_8, VAR_7);
 if (VAR_5)
  goto malformed_field;

 if (VAR_6) {
  if (VAR_4 == ((void*)0)) {
   FUNC_13("malformed ACL: unknown user or group name "
       "\"%s\"", VAR_9);
   goto truncated_entry;
  }

  VAR_5 = FUNC_6(VAR_4, VAR_7);
  if (VAR_5)
   goto malformed_field;
 }

 return (0);

truncated_entry:
malformed_field:
 FUNC_2(VAR_3, VAR_7);
 VAR_2 = VAR_1;
 return (-1);
}
