
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct passwd {char* pw_name; } ;
struct group {char* gr_name; } ;
typedef int acl_tag_t ;
typedef int acl_entry_t ;







 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int const,int*) ;
 struct group* FUNC_2 (scalar_t__) ;
 struct passwd* FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,size_t,char*,...) ;

__attribute__((used)) static int
FUNC_5(char *VAR_0, size_t VAR_1, const acl_entry_t VAR_2, int VAR_3)
{
 int VAR_4;
 acl_tag_t VAR_5;
 struct passwd *VAR_6;
 struct group *VAR_7;
 uid_t *VAR_8;

 VAR_4 = FUNC_1(VAR_2, &VAR_5);
 if (VAR_4)
  return (VAR_4);

 switch (VAR_5) {
 case 128:
  FUNC_4(VAR_0, VAR_1, "owner@");
  break;

 case 129:
  VAR_8 = (uid_t *)FUNC_0(VAR_2);
  if (VAR_8 == ((void*)0))
   return (-1);

  if (!VAR_3)
   VAR_6 = FUNC_3(*VAR_8);
  else
   VAR_6 = ((void*)0);
  if (VAR_6 == ((void*)0))
   FUNC_4(VAR_0, VAR_1, "user:%d", (unsigned int)*VAR_8);
  else
   FUNC_4(VAR_0, VAR_1, "user:%s", VAR_6->pw_name);
  break;

 case 130:
  FUNC_4(VAR_0, VAR_1, "group@");
  break;

 case 131:
  VAR_8 = (uid_t *)FUNC_0(VAR_2);
  if (VAR_8 == ((void*)0))
   return (-1);

  if (!VAR_3)
   VAR_7 = FUNC_2(*VAR_8);
  else
   VAR_7 = ((void*)0);
  if (VAR_7 == ((void*)0))
   FUNC_4(VAR_0, VAR_1, "group:%d", (unsigned int)*VAR_8);
  else
   FUNC_4(VAR_0, VAR_1, "group:%s", VAR_7->gr_name);
  break;

 case 132:
  FUNC_4(VAR_0, VAR_1, "everyone@");
  break;

 default:
  return (-1);
 }

 return (0);
}
