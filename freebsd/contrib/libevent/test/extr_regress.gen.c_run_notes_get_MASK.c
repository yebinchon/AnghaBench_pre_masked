
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run {int notes_length; char** notes_data; int notes_set; } ;



int
FUNC_0(struct run *VAR_0, int VAR_1,
    char * *VAR_2)
{
  if (!VAR_0->notes_set || VAR_1 < 0 || VAR_1 >= VAR_0->notes_length)
    return (-1);
  *VAR_2 = VAR_0->notes_data[VAR_1];
  return (0);
}
