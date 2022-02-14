
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1 (int VAR_2)
{
  int VAR_3 = -1;

  if (VAR_2 >= 0 || VAR_2 < VAR_1)
    VAR_3 = VAR_0[VAR_2];

  if (VAR_3 == -1)
    FUNC_0 ("Unmapped DWARF Register #%d encountered\n", VAR_2);

  return VAR_3;
}
