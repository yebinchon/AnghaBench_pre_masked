
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 char* FUNC_0 (char*,int *,int ) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static char *FUNC_3(char *VAR_0, uint32_t *VAR_1, uint32_t *VAR_2)
{
 char VAR_3[1024] = { 0 };
 char *VAR_4;
 char *VAR_5;

 FUNC_2(VAR_3, VAR_0);

 if (!(VAR_5 = FUNC_1(VAR_3, ':')))
  return "ccts are formatted shift:multiplier";

 *VAR_5 = '\0';
 VAR_5++;

 if ((VAR_4 = FUNC_0(VAR_3, VAR_1, 0)))
  return VAR_4;

 if ((VAR_4 = FUNC_0(VAR_5, VAR_2, 0)))
  return VAR_4;

 return ((void*)0);
}
