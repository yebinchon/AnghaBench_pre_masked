
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int acl_tag_t ;
typedef int acl_entry_t ;


 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(char *VAR_0, acl_entry_t VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4;
 uid_t VAR_5;
 acl_tag_t VAR_6;

 FUNC_3(VAR_2 != ((void*)0));
 *VAR_2 = 0;

 VAR_3 = FUNC_4(VAR_0);

 if (VAR_3 == 0) {
  FUNC_5("malformed ACL: empty \"qualifier\" field");
  return (-1);
 }

 VAR_4 = FUNC_1(VAR_1, &VAR_6);
 if (VAR_4)
  return (VAR_4);

 VAR_4 = FUNC_0(VAR_6, VAR_0, &VAR_5);
 if (VAR_4) {
  *VAR_2 = 1;
  return (0);
 }

 return (FUNC_2(VAR_1, &VAR_5));
}
