
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0)
{
 const char *VAR_1;

 VAR_1 = FUNC_1(VAR_0, '/');
 if (VAR_1)
  VAR_1++;
 else
  VAR_1 = VAR_0;

 return (FUNC_0(VAR_1, "vmlinux") == 0) ||
        (FUNC_0(VAR_1, "vmlinux.o") == 0);
}
