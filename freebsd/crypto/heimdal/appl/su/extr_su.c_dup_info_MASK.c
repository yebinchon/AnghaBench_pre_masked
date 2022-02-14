
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int * pw_shell; int * pw_dir; int * pw_passwd; int * pw_name; int pw_gid; int pw_uid; } ;


 int FUNC_0 (struct passwd*) ;
 struct passwd* FUNC_1 (int) ;
 void* FUNC_2 (int *) ;

__attribute__((used)) static struct passwd*
FUNC_3(const struct passwd *VAR_0)
{
    struct passwd *VAR_1;

    VAR_1 = FUNC_1(sizeof(*VAR_1));
    if(VAR_1 == ((void*)0))
 return ((void*)0);
    VAR_1->pw_name = FUNC_2(VAR_0->pw_name);
    VAR_1->pw_passwd = FUNC_2(VAR_0->pw_passwd);
    VAR_1->pw_uid = VAR_0->pw_uid;
    VAR_1->pw_gid = VAR_0->pw_gid;
    VAR_1->pw_dir = FUNC_2(VAR_0->pw_dir);
    VAR_1->pw_shell = FUNC_2(VAR_0->pw_shell);
    if(VAR_1->pw_name == ((void*)0) || VAR_1->pw_passwd == ((void*)0) ||
       VAR_1->pw_dir == ((void*)0) || VAR_1->pw_shell == ((void*)0)) {
 FUNC_0 (VAR_1);
 return ((void*)0);
    }
    return VAR_1;
}
