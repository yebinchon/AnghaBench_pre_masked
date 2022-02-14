
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (size_t) ;

__attribute__((used)) static char *
FUNC_3(const char *VAR_0)
{
 size_t VAR_1;
 char *VAR_2;

 if (VAR_0 == ((void*)0)) {
  return ((void*)0);
 }
 VAR_1 = FUNC_1(VAR_0) + 1;
 VAR_2 = FUNC_2(VAR_1);
 FUNC_0(VAR_2, VAR_0, VAR_1);
 return VAR_2;
}
