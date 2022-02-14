
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
struct passwd {char* pw_name; char* pw_passwd; char* pw_gecos; char* pw_class; char* pw_dir; char* pw_shell; int pw_gid; int pw_uid; } ;
typedef int gid_t ;
typedef int fake ;
struct TYPE_2__ {int pw_gid; int pw_uid; } ;


 int FUNC_0 (struct passwd*,int ,int) ;
 TYPE_1__* VAR_0 ;

struct passwd *
FUNC_1(void)
{
 static struct passwd VAR_1;

 FUNC_0(&VAR_1, 0, sizeof(VAR_1));
 VAR_1.pw_name = "NOUSER";
 VAR_1.pw_passwd =
     "$2a$06$r3.juUaHZDlIbQaO2dS9FuYxL1W9M81R1Tc92PoSNmzvpEqLkLGrK";



 VAR_1.pw_uid = VAR_0 == ((void*)0) ? (uid_t)-1 : VAR_0->pw_uid;
 VAR_1.pw_gid = VAR_0 == ((void*)0) ? (gid_t)-1 : VAR_0->pw_gid;



 VAR_1.pw_dir = "/nonexist";
 VAR_1.pw_shell = "/nonexist";

 return (&VAR_1);
}
