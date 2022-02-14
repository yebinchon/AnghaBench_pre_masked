
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,int) ;
 char* VAR_2 ;
 int FUNC_1 (char const*,int) ;
 char* FUNC_2 (char const*,int*) ;
 int FUNC_3 (char*,int,char*,char*,int) ;

int FUNC_4(const char *VAR_3, int VAR_4, char VAR_5[], int VAR_6)
{
 int VAR_7;

 FUNC_0("ca %s port %d", VAR_3, VAR_4);

 if (!(VAR_3 = FUNC_2(VAR_3, &VAR_4)))
  return -VAR_1;

 if ((VAR_7 = FUNC_1(VAR_3, VAR_4)) < 0)
  return -VAR_0;

 FUNC_3(VAR_5, VAR_6, "%s/issm%u", VAR_2, VAR_7);

 return 0;
}
