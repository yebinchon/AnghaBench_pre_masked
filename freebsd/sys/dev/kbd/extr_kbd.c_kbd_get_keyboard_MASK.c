
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int keyboard_t ;


 int FUNC_0 (int *) ;
 int ** VAR_0 ;
 int VAR_1 ;

keyboard_t *
FUNC_1(int VAR_2)
{
 if ((VAR_2 < 0) || (VAR_2 >= VAR_1))
  return (((void*)0));
 if (VAR_0[VAR_2] == ((void*)0))
  return (((void*)0));
 if (!FUNC_0(VAR_0[VAR_2]))
  return (((void*)0));
 return (VAR_0[VAR_2]);
}
