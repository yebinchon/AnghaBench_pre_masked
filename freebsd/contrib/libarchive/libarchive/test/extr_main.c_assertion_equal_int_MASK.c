
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char const*,int,char*,char const*,char const*) ;
 int FUNC_3 (char*,char const*,long long,long long,long long) ;

int
FUNC_4(const char *VAR_0, int VAR_1,
    long long VAR_2, const char *VAR_3, long long VAR_4, const char *VAR_5, void *VAR_6)
{
 FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == VAR_4)
  return (1);
 FUNC_2(VAR_0, VAR_1, "%s != %s", VAR_3, VAR_5);
 FUNC_3("      %s=%lld (0x%llx, 0%llo)\n", VAR_3, VAR_2, VAR_2, VAR_2);
 FUNC_3("      %s=%lld (0x%llx, 0%llo)\n", VAR_5, VAR_4, VAR_4, VAR_4);
 FUNC_1(VAR_6);
 return (0);
}
