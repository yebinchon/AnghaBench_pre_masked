
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*) ;
 int* VAR_0 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int
FUNC_2 (int VAR_1)
{
  int VAR_2 = -1;

  if (VAR_1 >= 0 || VAR_1 < FUNC_0 (VAR_0))
    VAR_2 = VAR_0[VAR_1];

  if (VAR_2 == -1)
    FUNC_1 ("Unmapped DWARF Register #%d encountered\n", VAR_1);

  return VAR_2;
}
