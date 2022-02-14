
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int id_t ;
typedef int acl_entry_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char**) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(char *VAR_0, acl_entry_t VAR_1)
{
 int VAR_2;
 char *VAR_3;
 id_t VAR_4;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 == 0) {
  FUNC_3("malformed ACL: \"appended id\" field present, "
            "but empty");
  return (-1);
 }

 VAR_4 = FUNC_2(VAR_0, &VAR_3);
 if (VAR_3 - VAR_0 != VAR_2) {
  FUNC_3("malformed ACL: appended id is not a number");
  return (-1);
 }

 return (FUNC_0(VAR_1, &VAR_4));
}
