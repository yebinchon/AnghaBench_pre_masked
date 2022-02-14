
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int ,int) ;
 int VAR_1 ;
 char* FUNC_1 (int) ;

const char *
FUNC_2(int VAR_2)
{
 const char *VAR_3;

 if (VAR_2 == VAR_0)
  return ("SOL_SOCKET");


 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 != ((void*)0))
  return (VAR_3);
 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 != ((void*)0))
  return (VAR_3);

 return (((void*)0));
}
