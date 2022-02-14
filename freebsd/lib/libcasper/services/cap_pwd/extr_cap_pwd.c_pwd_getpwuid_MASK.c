
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct passwd {int dummy; } ;
typedef int nvlist_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct passwd* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int const*,char*) ;
 scalar_t__ FUNC_2 (int const*,char*) ;
 int FUNC_3 (int const*,struct passwd*,int *) ;

__attribute__((used)) static int
FUNC_4(const nvlist_t *VAR_2, const nvlist_t *VAR_3, nvlist_t *VAR_4)
{
 struct passwd *VAR_5;
 uid_t VAR_6;

 if (!FUNC_1(VAR_3, "uid"))
  return (VAR_0);

 VAR_6 = (uid_t)FUNC_2(VAR_3, "uid");

 VAR_1 = 0;
 VAR_5 = FUNC_0(VAR_6);
 if (VAR_1 != 0)
  return (VAR_1);

 (void)FUNC_3(VAR_2, VAR_5, VAR_4);

 return (0);
}
