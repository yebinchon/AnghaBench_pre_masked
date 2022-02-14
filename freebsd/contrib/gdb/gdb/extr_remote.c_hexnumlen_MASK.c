
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONGEST ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static int
FUNC_1 (ULONGEST VAR_0)
{
  int VAR_1;

  for (VAR_1 = 0; VAR_0 != 0; VAR_1++)
    VAR_0 >>= 4;

  return FUNC_0 (VAR_1, 1);
}
