
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_fields; int * pw_shell; int * pw_dir; int * pw_gecos; int pw_gid; int pw_uid; int * pw_passwd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct passwd*) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(struct passwd *VAR_7, struct passwd *VAR_8)
{

 FUNC_0(VAR_8);





 if (VAR_7->pw_fields & VAR_6)
  VAR_8->pw_uid = VAR_7->pw_uid;
 if (VAR_7->pw_fields & VAR_3)
  VAR_8->pw_gid = VAR_7->pw_gid;
 if ((VAR_7->pw_fields & VAR_2) &&
     (VAR_8->pw_gecos = FUNC_1(VAR_7->pw_gecos)) == ((void*)0))
  goto enomem;
 if ((VAR_7->pw_fields & VAR_1) &&
     (VAR_8->pw_dir = FUNC_1(VAR_7->pw_dir)) == ((void*)0))
  goto enomem;
 if ((VAR_7->pw_fields & VAR_5) &&
     (VAR_8->pw_shell = FUNC_1(VAR_7->pw_shell)) == ((void*)0))
  goto enomem;
 VAR_8->pw_fields = VAR_7->pw_fields;
 return (0);
enomem:
 FUNC_2(VAR_0, "getpwent memory allocation failure");
 return (-1);
}
