
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acl_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_4, acl_entry_t VAR_5)
{

 if (FUNC_1(VAR_4, "allow") == 0)
  return (FUNC_0(VAR_5, VAR_1));
 if (FUNC_1(VAR_4, "deny") == 0)
  return (FUNC_0(VAR_5, VAR_3));
 if (FUNC_1(VAR_4, "audit") == 0)
  return (FUNC_0(VAR_5, VAR_2));
 if (FUNC_1(VAR_4, "alarm") == 0)
  return (FUNC_0(VAR_5, VAR_0));

 FUNC_2("malformed ACL: invalid \"type\" field");

 return (-1);
}
