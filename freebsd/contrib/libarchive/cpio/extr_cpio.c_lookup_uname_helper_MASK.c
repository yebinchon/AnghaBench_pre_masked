
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct passwd {char* pw_name; } ;
struct cpio {int dummy; } ;
typedef int int64_t ;
typedef scalar_t__ id_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 struct passwd* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,char*,int ) ;

__attribute__((used)) static int
FUNC_3(struct cpio *VAR_2, const char **VAR_3, id_t VAR_4)
{
 struct passwd *VAR_5;

 (void)VAR_2;

 VAR_1 = 0;
 VAR_5 = FUNC_1((uid_t)VAR_4);
 if (VAR_5 == ((void*)0)) {
  if (VAR_1 && VAR_1 != VAR_0)
   FUNC_2(VAR_1, "getpwuid(%s) failed",
       FUNC_0((int64_t)VAR_4));
  return 1;
 }

 *VAR_3 = VAR_5->pw_name;
 return 0;
}
