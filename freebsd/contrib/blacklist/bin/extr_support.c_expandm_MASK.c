
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char const* FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 char* FUNC_3 (char const*,char*) ;

__attribute__((used)) static __attribute__((__format_arg__(3))) const char *
FUNC_4(char *VAR_1, size_t VAR_2, const char *VAR_3)
{
 char *VAR_4;
 size_t VAR_5;

 if ((VAR_4 = FUNC_3(VAR_3, "%m")) == ((void*)0))
  return VAR_3;

 VAR_5 = (size_t)(VAR_4 - VAR_3);
 if (VAR_5 >= VAR_2)
  return VAR_3;

 FUNC_2(VAR_1, VAR_3, VAR_5 + 1);
 FUNC_1(VAR_1, FUNC_0(VAR_0), VAR_2);
 FUNC_1(VAR_1, VAR_3 + VAR_5 + 2, VAR_2);

 return VAR_1;
}
