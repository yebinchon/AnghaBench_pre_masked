
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static int
FUNC_1 (CORE_ADDR VAR_0, char *VAR_1)
{


  return (VAR_1 && (FUNC_0 ("_sigreturn", VAR_1) == 0
     || FUNC_0 ("_sigacthandler", VAR_1) == 0
     || FUNC_0 ("sigvechandler", VAR_1) == 0));
}
