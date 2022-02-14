
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int dummy; } ;
typedef int nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 struct passwd* FUNC_1 (char const*) ;
 int FUNC_2 (int const*,char*) ;
 char* FUNC_3 (int const*,char*) ;
 int FUNC_4 (int const*,struct passwd*,int *) ;

__attribute__((used)) static int
FUNC_5(const nvlist_t *VAR_2, const nvlist_t *VAR_3, nvlist_t *VAR_4)
{
 struct passwd *VAR_5;
 const char *VAR_6;

 if (!FUNC_2(VAR_3, "name"))
  return (VAR_0);
 VAR_6 = FUNC_3(VAR_3, "name");
 FUNC_0(VAR_6 != ((void*)0));

 VAR_1 = 0;
 VAR_5 = FUNC_1(VAR_6);
 if (VAR_1 != 0)
  return (VAR_1);

 (void)FUNC_4(VAR_2, VAR_5, VAR_4);

 return (0);
}
