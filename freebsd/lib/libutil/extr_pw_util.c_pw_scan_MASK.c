
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int dummy; } ;


 int FUNC_0 (struct passwd*) ;
 int FUNC_1 (char*,struct passwd*,int) ;
 int FUNC_2 (char*) ;
 struct passwd* FUNC_3 (struct passwd*) ;
 char* FUNC_4 (char const*) ;

struct passwd *
FUNC_5(const char *VAR_0, int VAR_1)
{
 struct passwd VAR_2, *VAR_3;
 char *VAR_4;

 if ((VAR_4 = FUNC_4(VAR_0)) == ((void*)0))
  return (((void*)0));
 FUNC_0(&VAR_2);
 if (!FUNC_1(VAR_4, &VAR_2, VAR_1)) {
  FUNC_2(VAR_4);
  return (((void*)0));
 }
 VAR_3 = FUNC_3(&VAR_2);
 FUNC_2(VAR_4);
 return (VAR_3);
}
