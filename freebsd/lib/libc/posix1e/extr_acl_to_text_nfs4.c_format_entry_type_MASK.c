
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acl_entry_type_t ;
typedef int acl_entry_t ;






 int FUNC_0 (int const,int*) ;
 int FUNC_1 (char*,size_t,char*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0, size_t VAR_1, const acl_entry_t VAR_2)
{
 int VAR_3;
 acl_entry_type_t VAR_4;

 VAR_3 = FUNC_0(VAR_2, &VAR_4);
 if (VAR_3)
  return (VAR_3);

 switch (VAR_4) {
 case 130:
  FUNC_1(VAR_0, VAR_1, "allow");
  break;
 case 128:
  FUNC_1(VAR_0, VAR_1, "deny");
  break;
 case 129:
  FUNC_1(VAR_0, VAR_1, "audit");
  break;
 case 131:
  FUNC_1(VAR_0, VAR_1, "alarm");
  break;
 default:
  return (-1);
 }

 return (0);
}
