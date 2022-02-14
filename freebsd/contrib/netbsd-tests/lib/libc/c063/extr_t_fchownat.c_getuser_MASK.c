
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int pw_gid; int pw_uid; } ;
typedef int gid_t ;


 int VAR_0 ;
 struct passwd* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(uid_t *VAR_1, gid_t *VAR_2)
{
 struct passwd *VAR_3;

 if ((VAR_3 = FUNC_0(VAR_0)) == ((void*)0))
  return -1;

 *VAR_1 = VAR_3->pw_uid;
 *VAR_2 = VAR_3->pw_gid;

 return 0;
}
