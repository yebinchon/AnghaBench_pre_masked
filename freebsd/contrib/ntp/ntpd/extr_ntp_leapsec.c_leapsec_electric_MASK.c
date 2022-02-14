
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *) ;

int
FUNC_1(
 int VAR_3)
{
 int VAR_4 = VAR_0;
 if (VAR_3 < 0)
  return VAR_4;

 VAR_0 = (VAR_3 != 0);
 if (VAR_0 == VAR_4)
  return VAR_4;

 if (VAR_1 == &VAR_2[0] || VAR_1 == &VAR_2[1])
  FUNC_0(VAR_1);

 return VAR_4;
}
