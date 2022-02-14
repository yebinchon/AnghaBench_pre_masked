
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uidstr ;
struct passwd {char* pw_dir; int pw_name; scalar_t__ pw_uid; } ;
typedef int ret ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,char*,char*,char*,int ,char*,char*,char*) ;
 int FUNC_3 (char*,int,char*,...) ;
 char* FUNC_4 (char*) ;

char *
FUNC_5(const char *VAR_1, struct passwd *VAR_2)
{
 char *VAR_3, VAR_4[32], VAR_5[VAR_0];
 int VAR_6;

 FUNC_3(VAR_4, sizeof(VAR_4), "%llu",
     (unsigned long long)VAR_2->pw_uid);
 VAR_3 = FUNC_2(VAR_1, "h", VAR_2->pw_dir,
     "u", VAR_2->pw_name, "U", VAR_4, (char *)((void*)0));





 if (*VAR_3 == '/')
  return (VAR_3);

 VAR_6 = FUNC_3(VAR_5, sizeof(VAR_5), "%s/%s", VAR_2->pw_dir, VAR_3);
 if (VAR_6 < 0 || (size_t)VAR_6 >= sizeof(VAR_5))
  FUNC_0("expand_authorized_keys: path too long");
 FUNC_1(VAR_3);
 return (FUNC_4(VAR_5));
}
