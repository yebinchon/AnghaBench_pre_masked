
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,char const*) ;
 int FUNC_1 (int const*,int *,int *) ;
 int FUNC_2 (int const*,int *,int *) ;
 int FUNC_3 (int const*,int *,int *) ;
 int FUNC_4 (int const*,int *,int *) ;
 int FUNC_5 (int const*,int *,int *) ;
 int FUNC_6 (int const*,int *,int *) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_2, const nvlist_t *VAR_3, nvlist_t *VAR_4,
    nvlist_t *VAR_5)
{
 int VAR_6;

 if (!FUNC_0(VAR_3, VAR_2))
  return (VAR_1);

 if (FUNC_7(VAR_2, "getgrent") == 0 || FUNC_7(VAR_2, "getgrent_r") == 0)
  VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5);
 else if (FUNC_7(VAR_2, "getgrnam") == 0 || FUNC_7(VAR_2, "getgrnam_r") == 0)
  VAR_6 = FUNC_4(VAR_3, VAR_4, VAR_5);
 else if (FUNC_7(VAR_2, "getgrgid") == 0 || FUNC_7(VAR_2, "getgrgid_r") == 0)
  VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_5);
 else if (FUNC_7(VAR_2, "setgroupent") == 0)
  VAR_6 = FUNC_6(VAR_3, VAR_4, VAR_5);
 else if (FUNC_7(VAR_2, "setgrent") == 0)
  VAR_6 = FUNC_5(VAR_3, VAR_4, VAR_5);
 else if (FUNC_7(VAR_2, "endgrent") == 0)
  VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
 else
  VAR_6 = VAR_0;

 return (VAR_6);
}
