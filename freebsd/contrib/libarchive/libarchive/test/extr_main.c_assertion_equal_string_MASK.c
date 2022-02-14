
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char const*,int,char*,char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,char const*,int,int) ;
 scalar_t__ FUNC_5 (char const*) ;

int
FUNC_6(const char *VAR_0, int VAR_1,
    const char *VAR_2, const char *VAR_3,
    const char *VAR_4, const char *VAR_5,
    void *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;

 FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == VAR_4 || (VAR_2 != ((void*)0) && VAR_4 != ((void*)0) && FUNC_3(VAR_2, VAR_4) == 0))
  return (1);
 FUNC_2(VAR_0, VAR_1, "%s != %s", VAR_3, VAR_5);
 VAR_8 = (int)FUNC_5(VAR_3);
 VAR_9 = (int)FUNC_5(VAR_5);
 if (VAR_8 < VAR_9)
  VAR_8 = VAR_9;
 FUNC_4(VAR_3, VAR_2, VAR_8, VAR_7);
 FUNC_4(VAR_5, VAR_4, VAR_8, VAR_7);
 FUNC_1(VAR_6);
 return (0);
}
