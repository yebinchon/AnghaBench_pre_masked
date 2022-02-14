
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef void* time_t ;
struct passwd {int pw_fields; void* pw_expire; int * pw_shell; int * pw_dir; int * pw_gecos; int * pw_class; void* pw_change; int pw_gid; int pw_uid; int * pw_passwd; int * pw_name; } ;
typedef int gid_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct passwd*) ;
 int FUNC_2 (struct passwd*,int ,int) ;
 int FUNC_3 (char*,char*) ;
 void* FUNC_4 (char*) ;
 char* FUNC_5 (char**,char*) ;
 scalar_t__ FUNC_6 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_7(struct passwd *VAR_0, char *VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4;
 int VAR_5;





 VAR_5 = 0;
 VAR_3 = VAR_1;
 FUNC_2(VAR_0, 0, sizeof(struct passwd));
 while ((VAR_2 = FUNC_5(&VAR_3, ":")) != ((void*)0)) {
  switch (VAR_5) {
  case 0:
   VAR_0->pw_name = FUNC_4(VAR_2);
   FUNC_0(VAR_0->pw_name != ((void*)0));
   break;
  case 1:
   VAR_0->pw_passwd = FUNC_4(VAR_2);
   FUNC_0(VAR_0->pw_passwd != ((void*)0));
   break;
  case 2:
   VAR_0->pw_uid = (uid_t)FUNC_6(VAR_2, &VAR_4, 10);
   if (*VAR_4 != '\0')
    goto fin;
   break;
  case 3:
   VAR_0->pw_gid = (gid_t)FUNC_6(VAR_2, &VAR_4, 10);
   if (*VAR_4 != '\0')
    goto fin;
   break;
  case 4:
   VAR_0->pw_change = (time_t)FUNC_6(VAR_2, &VAR_4, 10);
   if (*VAR_4 != '\0')
    goto fin;
   break;
  case 5:
   VAR_0->pw_class = FUNC_4(VAR_2);
   FUNC_0(VAR_0->pw_class != ((void*)0));
   break;
  case 6:
   VAR_0->pw_gecos = FUNC_4(VAR_2);
   FUNC_0(VAR_0->pw_gecos != ((void*)0));
   break;
  case 7:
   VAR_0->pw_dir = FUNC_4(VAR_2);
   FUNC_0(VAR_0->pw_dir != ((void*)0));
   break;
  case 8:
   VAR_0->pw_shell = FUNC_4(VAR_2);
   FUNC_0(VAR_0->pw_shell != ((void*)0));
   break;
  case 9:
   VAR_0->pw_expire = (time_t)FUNC_6(VAR_2, &VAR_4, 10);
   if (*VAR_4 != '\0')
    goto fin;
   break;
  case 10:
   VAR_0->pw_fields = (int)FUNC_6(VAR_2, &VAR_4, 10);
   if (*VAR_4 != '\0')
    goto fin;
   break;
  default:
   break;
  }
  ++VAR_5;
 }

fin:
 if (VAR_5 != 11) {
  FUNC_1(VAR_0);
  FUNC_2(VAR_0, 0, sizeof(struct passwd));
  return (-1);
 }

 return (0);
}
