
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char const*,char) ;

const char *
FUNC_2(const char *VAR_0) {
 char *VAR_1;

 FUNC_0(VAR_0 != ((void*)0));

 VAR_1 = FUNC_1(VAR_0, '/');
 if (VAR_1 == ((void*)0))
  return (VAR_0);

 return (VAR_1 + 1);
}
