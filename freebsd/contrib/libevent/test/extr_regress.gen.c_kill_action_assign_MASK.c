
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kill {int action_set; int * action_data; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;

int
FUNC_2(struct kill *VAR_0,
    const char * VAR_1)
{
  if (VAR_0->action_data != ((void*)0))
    FUNC_0(VAR_0->action_data);
  if ((VAR_0->action_data = FUNC_1(VAR_1)) == ((void*)0))
    return (-1);
  VAR_0->action_set = 1;
  return (0);
}
