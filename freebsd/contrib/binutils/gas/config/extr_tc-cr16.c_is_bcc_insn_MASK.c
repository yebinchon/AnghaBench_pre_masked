
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2 (char * VAR_0)
{
  if (!(FUNC_1 (VAR_0, "bal") || FUNC_1 (VAR_0, "beq0b") || FUNC_1 (VAR_0, "bnq0b")
 || FUNC_1 (VAR_0, "beq0w") || FUNC_1 (VAR_0, "bnq0w")))
    if ((VAR_0[0] == 'b') && (FUNC_0 (VAR_0) != ((void*)0)))
      return 1;
  return 0;
}
