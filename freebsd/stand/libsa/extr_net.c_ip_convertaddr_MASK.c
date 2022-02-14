
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int n_long ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char*,int*) ;

n_long
FUNC_2(char *VAR_1)
{

 n_long VAR_2 = 0, VAR_3;

 if (VAR_1 == ((void*)0) || *VAR_1 == '\0')
  return 0;
 VAR_1 = FUNC_1(VAR_1, &VAR_3);
 VAR_2 |= (VAR_3 << 24) & 0xff000000;
 if (*VAR_1 == '\0' || *VAR_1++ != '.')
  return 0;
 VAR_1 = FUNC_1(VAR_1, &VAR_3);
 VAR_2 |= (VAR_3 << 16) & 0xff0000;
 if (*VAR_1 == '\0' || *VAR_1++ != '.')
  return 0;
 VAR_1 = FUNC_1(VAR_1, &VAR_3);
 VAR_2 |= (VAR_3 << 8) & 0xff00;
 if (*VAR_1 == '\0' || *VAR_1++ != '.')
  return 0;
 VAR_1 = FUNC_1(VAR_1, &VAR_3);
 VAR_2 |= VAR_3 & 0xff;
 if (*VAR_1 != '\0')
  return 0;

 return FUNC_0(VAR_2);
}
