
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {int pw_uid; } ;


 int FUNC_0 (int,char*) ;
 struct passwd* FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static uid_t
FUNC_3(const char *VAR_0)
{
 struct passwd *VAR_1;

 if (*VAR_0 == '\0')
  FUNC_0(1, "owner must be specified when the group is");
 return ((VAR_1 = FUNC_1(VAR_0)) == ((void*)0)) ? FUNC_2(VAR_0, "user") : VAR_1->pw_uid;
}
