
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int state_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_0,
       const void *VAR_1)
{
  int VAR_2;
  int VAR_3;

  VAR_2 = FUNC_0 (*(state_t *) VAR_0);
  VAR_3 = FUNC_0 (*(state_t *) VAR_1);
  if (VAR_2 < VAR_3)
    return 1;
  else if (VAR_2 == VAR_3)
    return 0;
  else
    return -1;
}
