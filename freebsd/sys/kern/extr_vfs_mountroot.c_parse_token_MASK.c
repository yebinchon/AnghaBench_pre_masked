
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*,size_t) ;
 char* FUNC_1 (size_t,int ,int) ;
 int FUNC_2 (char**,int ) ;

__attribute__((used)) static int
FUNC_3(char **VAR_5, char **VAR_6)
{
 char *VAR_7;
 size_t VAR_8;
 int VAR_9;

 *VAR_6 = ((void*)0);
 VAR_9 = FUNC_2(VAR_5, VAR_0);
 if (VAR_9)
  return (VAR_9);
 VAR_7 = *VAR_5;
 VAR_9 = FUNC_2(VAR_5, VAR_1);
 VAR_8 = *VAR_5 - VAR_7;
 *VAR_6 = FUNC_1(VAR_8 + 1, VAR_2, VAR_3 | VAR_4);
 FUNC_0(VAR_7, *VAR_6, VAR_8);
 return (0);
}
