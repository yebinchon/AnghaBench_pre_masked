
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acl_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_5, acl_entry_t VAR_6, int *VAR_7)
{

 FUNC_1(VAR_7 != ((void*)0));
 *VAR_7 = 0;

 if (FUNC_2(VAR_5, "owner@") == 0)
  return (FUNC_0(VAR_6, VAR_4));
 if (FUNC_2(VAR_5, "group@") == 0)
  return (FUNC_0(VAR_6, VAR_2));
 if (FUNC_2(VAR_5, "everyone@") == 0)
  return (FUNC_0(VAR_6, VAR_0));

 *VAR_7 = 1;

 if (FUNC_2(VAR_5, "user") == 0 || FUNC_2(VAR_5, "u") == 0)
  return (FUNC_0(VAR_6, VAR_3));
 if (FUNC_2(VAR_5, "group") == 0 || FUNC_2(VAR_5, "g") == 0)
  return (FUNC_0(VAR_6, VAR_1));

 FUNC_3("malformed ACL: invalid \"tag\" field");

 return (-1);
}
