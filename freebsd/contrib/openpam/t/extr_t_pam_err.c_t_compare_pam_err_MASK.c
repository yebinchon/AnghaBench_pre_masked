
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (char*,int) ;

int
FUNC_1(int VAR_2, int VAR_3)
{

 if (VAR_2 == VAR_3)
  return (1);
 if (VAR_2 >= 0 && VAR_2 < VAR_0)
  FUNC_0("expected %s, ", VAR_1[VAR_2]);
 else
  FUNC_0("expected %d, ", VAR_2);
 if (VAR_3 >= 0 && VAR_3 < VAR_0)
  FUNC_0("received %s\n", VAR_1[VAR_3]);
 else
  FUNC_0("received %d\n", VAR_3);
 return (0);
}
