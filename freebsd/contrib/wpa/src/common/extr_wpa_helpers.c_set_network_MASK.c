
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*,int,char*,int,char const*,char const*) ;
 int FUNC_1 (char const*,char*) ;

int FUNC_2(const char *VAR_0, int VAR_1, const char *VAR_2,
  const char *VAR_3)
{
 char VAR_4[200];
 FUNC_0(VAR_4, sizeof(VAR_4), "SET_NETWORK %d %s %s", VAR_1, VAR_2, VAR_3);
 return FUNC_1(VAR_0, VAR_4);
}
