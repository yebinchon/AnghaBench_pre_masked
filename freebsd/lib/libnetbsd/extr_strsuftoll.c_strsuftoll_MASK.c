
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int errbuf ;


 int FUNC_0 (int,char*,char*) ;
 long long FUNC_1 (char const*,char const*,long long,long long,char*,int) ;

long long
FUNC_2(const char *VAR_0, const char *VAR_1,
    long long VAR_2, long long VAR_3)
{
 long long VAR_4;
 char VAR_5[100];

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5, sizeof(VAR_5));
 if (*VAR_5 != '\0')
  FUNC_0(1, "%s", VAR_5);
 return (VAR_4);
}
