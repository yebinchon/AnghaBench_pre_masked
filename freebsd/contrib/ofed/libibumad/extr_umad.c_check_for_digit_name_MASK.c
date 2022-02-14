
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;


 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(const struct dirent *VAR_0)
{
 const char *VAR_1 = VAR_0->d_name;
 while (*VAR_1 && FUNC_0(*VAR_1))
  VAR_1++;
 return *VAR_1 ? 0 : 1;
}
