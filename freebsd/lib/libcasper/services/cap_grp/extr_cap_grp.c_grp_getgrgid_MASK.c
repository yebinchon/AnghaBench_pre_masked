
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int dummy; } ;
typedef int nvlist_t ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct group* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int const*,struct group*,int *) ;
 int FUNC_2 (int const*,char*) ;
 scalar_t__ FUNC_3 (int const*,char*) ;

__attribute__((used)) static int
FUNC_4(const nvlist_t *VAR_2, const nvlist_t *VAR_3, nvlist_t *VAR_4)
{
 struct group *VAR_5;
 gid_t VAR_6;

 if (!FUNC_2(VAR_3, "gid"))
  return (VAR_0);

 VAR_6 = (gid_t)FUNC_3(VAR_3, "gid");

 VAR_1 = 0;
 VAR_5 = FUNC_0(VAR_6);
 if (VAR_1 != 0)
  return (VAR_1);

 (void)FUNC_1(VAR_2, VAR_5, VAR_4);

 return (0);
}
