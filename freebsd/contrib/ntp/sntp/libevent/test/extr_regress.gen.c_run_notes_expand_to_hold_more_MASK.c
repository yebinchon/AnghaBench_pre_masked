
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run {int notes_num_allocated; char** notes_data; } ;


 scalar_t__ FUNC_0 (char**,int) ;

__attribute__((used)) static int
FUNC_1(struct run *VAR_0)
{
  int VAR_1 = VAR_0->notes_num_allocated;
  char ** VAR_2 = ((void*)0);
  VAR_1 = !VAR_1 ? 1 : VAR_1 << 1;
  VAR_2 = (char **) FUNC_0(VAR_0->notes_data,
      VAR_1 * sizeof(char *));
  if (VAR_2 == ((void*)0))
    return -1;
  VAR_0->notes_data = VAR_2;
  VAR_0->notes_num_allocated = VAR_1;
  return 0;}
