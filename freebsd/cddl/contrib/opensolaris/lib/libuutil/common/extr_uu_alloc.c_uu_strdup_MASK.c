
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (size_t) ;

char *
FUNC_3(const char *VAR_0)
{
 char *VAR_1 = ((void*)0);

 if (VAR_0 != ((void*)0)) {
  size_t VAR_2;

  VAR_2 = FUNC_1(VAR_0) + 1;
  VAR_1 = FUNC_2(VAR_2);
  if (VAR_1 != ((void*)0))
   (void) FUNC_0(VAR_1, VAR_0, VAR_2);
 }
 return (VAR_1);
}
