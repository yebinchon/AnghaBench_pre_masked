
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 () ;
 char const* VAR_0 ;
 char* FUNC_1 (char const*,char) ;

const char *
FUNC_2(void)
{
 const char *VAR_1, *VAR_2;

 if (VAR_0 != ((void*)0))
  return (VAR_0);

 if ((VAR_1 = FUNC_0()) != ((void*)0))
  VAR_2 = FUNC_1(VAR_1, '/');
 else
  VAR_2 = ((void*)0);

 if (VAR_2 == ((void*)0))
  VAR_0 = VAR_1;
 else
  VAR_0 = VAR_2 + 1;

 return (VAR_0);
}
