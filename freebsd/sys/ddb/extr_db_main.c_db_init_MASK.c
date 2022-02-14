
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*,char*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_2(void)
{

 FUNC_1();

 if (VAR_1 != 0 && VAR_0 != 0 && VAR_2 != 0) {
  FUNC_0((char *)VAR_1,
      (char *)(VAR_1 + VAR_2), "elf", (char *)VAR_0);
 }
 FUNC_0(((void*)0), ((void*)0), "kld", ((void*)0));
 return (1);
}
