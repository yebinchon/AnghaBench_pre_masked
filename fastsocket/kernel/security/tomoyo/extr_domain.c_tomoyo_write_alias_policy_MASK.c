
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,char*,int const) ;

int FUNC_2(char *VAR_1, const bool VAR_2)
{
 char *VAR_3 = FUNC_0(VAR_1, ' ');

 if (!VAR_3)
  return -VAR_0;
 *VAR_3++ = '\0';
 return FUNC_1(VAR_1, VAR_3, VAR_2);
}
