
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* va_list ;
typedef size_t __SGI_LIBC_NAMESPACE_QUALIFIER ;


 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (char*,size_t,char const*,char*) ;
 int FUNC_2 (char*,size_t,char const*,char*) ;

int
FUNC_3(char *VAR_0, size_t VAR_1, const char *VAR_2, va_list VAR_3)
{
 int VAR_4;
 if (!VAR_1)
  return 0;
 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);

 VAR_0[VAR_1-1] = '\0';
 return VAR_4;
}
