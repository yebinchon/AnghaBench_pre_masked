
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,int) ;
 long FUNC_2 (char*,char**,int) ;

__attribute__((used)) static char FUNC_3(const char *VAR_0, int *VAR_1)
{
 char VAR_2[3];
 char *VAR_3;
 long VAR_4;

 VAR_2[2] = '\0';
 FUNC_1(VAR_2, VAR_0 + *VAR_1, 2);

 VAR_4 = FUNC_2(VAR_2, &VAR_3, 16);
 if (!(VAR_3 > VAR_2))
  FUNC_0("\\x used with no following hex digits\n");

 (*VAR_1) += VAR_3 - VAR_2;
 return VAR_4;
}
