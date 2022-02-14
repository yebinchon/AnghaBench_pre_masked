
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg {int from_name_set; int * from_name_data; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;

int
FUNC_2(struct msg *VAR_0,
    const char * VAR_1)
{
  if (VAR_0->from_name_data != ((void*)0))
    FUNC_0(VAR_0->from_name_data);
  if ((VAR_0->from_name_data = FUNC_1(VAR_1)) == ((void*)0))
    return (-1);
  VAR_0->from_name_set = 1;
  return (0);
}
