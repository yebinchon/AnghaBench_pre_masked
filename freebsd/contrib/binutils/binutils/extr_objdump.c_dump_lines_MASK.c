
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct print_file_list {int * map; } ;


 int FUNC_0 (struct print_file_list*,unsigned int) ;

__attribute__((used)) static void
FUNC_1 (struct print_file_list *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
  if (VAR_0->map == ((void*)0))
    return;
  while (VAR_1 <= VAR_2)
    {
      FUNC_0 (VAR_0, VAR_1);
      VAR_1++;
    }
}
