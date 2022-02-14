
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ypclnt_t ;
struct passwd {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct passwd const*) ;
 int FUNC_2 (int *,struct passwd const*,char const*) ;

int
FUNC_3(ypclnt_t *VAR_0, const struct passwd *VAR_1, const char *VAR_2)
{
 switch (FUNC_0(VAR_0)) {
 case 0:
  return (FUNC_2(VAR_0, VAR_1, VAR_2));
 case 1:
  return (FUNC_1(VAR_0, VAR_1));
 default:
  return (-1);
 }
}
