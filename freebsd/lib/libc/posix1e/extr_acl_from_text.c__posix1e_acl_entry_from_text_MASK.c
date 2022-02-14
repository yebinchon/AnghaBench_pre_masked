
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int acl_tag_t ;
typedef int acl_t ;
typedef int acl_perm_t ;


 scalar_t__ VAR_0 ;






 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int *) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char**,char*) ;

__attribute__((used)) static int
FUNC_9(acl_t VAR_3, char *VAR_4)
{
 acl_tag_t VAR_5;
 acl_perm_t VAR_6;
 char *VAR_7, *VAR_8, *VAR_9;
 uid_t VAR_10;
 int VAR_11;

 FUNC_5(FUNC_0(VAR_3) == VAR_0);


 VAR_7 = FUNC_8(&VAR_4, ":");
 if (VAR_7 == ((void*)0)) {
  VAR_2 = VAR_1;
  return (-1);
 }
 VAR_7 = FUNC_6(VAR_7);
 if ((*VAR_7 == '\0') && (!VAR_4)) {




  return (0);
 }
 FUNC_7(VAR_7);

 VAR_8 = FUNC_8(&VAR_4, ":");
 if (VAR_8 == ((void*)0)) {
  VAR_2 = VAR_1;
  return (-1);
 }
 VAR_8 = FUNC_6(VAR_8);
 FUNC_7(VAR_8);

 VAR_9 = FUNC_8(&VAR_4, ":");
 if (VAR_9 == ((void*)0) || VAR_4) {
  VAR_2 = VAR_1;
  return (-1);
 }
 VAR_9 = FUNC_6(VAR_9);
 FUNC_7(VAR_9);

 VAR_5 = FUNC_4(VAR_7, VAR_8);
 if (VAR_5 == -1) {
  VAR_2 = VAR_1;
  return (-1);
 }

 VAR_11 = FUNC_3(VAR_9, &VAR_6);
 if (VAR_11 == -1) {
  VAR_2 = VAR_1;
  return (-1);
 }

 switch(VAR_5) {
  case 128:
  case 132:
  case 131:
  case 130:
   if (*VAR_8 != '\0') {
    VAR_2 = VAR_1;
    return (-1);
   }
   VAR_10 = 0;
   break;

  case 129:
  case 133:
   VAR_11 = FUNC_1(VAR_5, VAR_8, &VAR_10);
   if (VAR_11 == -1)
    return (-1);
   break;

  default:
   VAR_2 = VAR_1;
   return (-1);
 }

 VAR_11 = FUNC_2(VAR_3, VAR_5, VAR_10, VAR_6);
 if (VAR_11 == -1)
  return (-1);

 return (0);
}
