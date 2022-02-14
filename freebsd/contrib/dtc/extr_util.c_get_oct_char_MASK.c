
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 long FUNC_2 (char*,char**,int) ;

__attribute__((used)) static char FUNC_3(const char *VAR_0, int *VAR_1)
{
 char VAR_2[4];
 char *VAR_3;
 long VAR_4;

 VAR_2[3] = '\0';
 FUNC_1(VAR_2, VAR_0 + *VAR_1, 3);

 VAR_4 = FUNC_2(VAR_2, &VAR_3, 8);

 FUNC_0(VAR_3 > VAR_2);

 (*VAR_1) += VAR_3 - VAR_2;
 return VAR_4;
}
