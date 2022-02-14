
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
typedef int acl_tag_t ;
typedef int acl_entry_t ;





 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int const,int*) ;
 int FUNC_2 (char*,size_t,char*,unsigned int) ;

__attribute__((used)) static int
FUNC_3(char *VAR_0, size_t VAR_1, const acl_entry_t VAR_2)
{
 int VAR_3;
 acl_tag_t VAR_4;
 uid_t *VAR_5;

 VAR_3 = FUNC_1(VAR_2, &VAR_4);
 if (VAR_3)
  return (VAR_3);

 switch (VAR_4) {
 case 128:
 case 129:
 case 130:
  VAR_0[0] = '\0';
  break;

 default:
  VAR_5 = (uid_t *)FUNC_0(VAR_2);
  if (VAR_5 == ((void*)0))
   return (-1);
  FUNC_2(VAR_0, VAR_1, ":%d", (unsigned int)*VAR_5);
 }

 return (0);
}
