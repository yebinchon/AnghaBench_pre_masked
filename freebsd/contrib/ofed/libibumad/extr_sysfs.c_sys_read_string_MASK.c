
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,char*,char const*,char const*) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (int ,char*,size_t*,int *,int ) ;

int FUNC_5(const char *VAR_0, const char *VAR_1, char *VAR_2, int VAR_3)
{
 char VAR_4[256], *VAR_5;
 size_t VAR_6;

 FUNC_2(VAR_4, sizeof(VAR_4), "%s/%s", VAR_0, VAR_1);

 VAR_6 = VAR_3;
 if (FUNC_4(FUNC_0(VAR_4), VAR_2, &VAR_6, ((void*)0), 0) == -1)
  return FUNC_1();

 VAR_2[(VAR_6 < VAR_3) ? VAR_6 : VAR_3 - 1] = 0;

 if ((VAR_5 = FUNC_3(VAR_2, '\n')))
  *VAR_5 = 0;

 return 0;
}
