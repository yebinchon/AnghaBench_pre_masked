
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 unsigned int FUNC_0 (char*,int *,int ) ;
 int FUNC_1 (char const*,char const*,char*,int) ;

int FUNC_2(const char *VAR_0, const char *VAR_1, unsigned *VAR_2)
{
 char VAR_3[32];
 int VAR_4;

 if ((VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_3, sizeof(VAR_3))) < 0)
  return VAR_4;

 *VAR_2 = FUNC_0(VAR_3, ((void*)0), 0);

 return 0;
}
