
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char,size_t) ;

__attribute__((used)) static const char *
FUNC_1(const char *VAR_0, size_t VAR_1)
{
 const char *VAR_2, *VAR_3;

 VAR_3 = VAR_2 = VAR_0;
 for (;;) {
  VAR_2 = FUNC_0(VAR_2, '/', VAR_1 - (VAR_2 - VAR_0));
  if (VAR_2 == ((void*)0))
   break;
  VAR_3 = ++VAR_2;
 }
 return (VAR_3);
}
