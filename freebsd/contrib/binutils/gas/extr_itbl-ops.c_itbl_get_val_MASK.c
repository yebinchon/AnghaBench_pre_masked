
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itbl_entry {unsigned long value; } ;
typedef int e_type ;
typedef int e_processor ;


 struct itbl_entry* FUNC_0 (int ,int ,char*) ;

int
FUNC_1 (e_processor VAR_0, e_type VAR_1, char *VAR_2,
       unsigned long *VAR_3)
{
  struct itbl_entry *VAR_4;

  VAR_4 = FUNC_0 (VAR_0, VAR_1, VAR_2);
  if (VAR_4 == ((void*)0))
    return 0;
  *VAR_3 = VAR_4->value;
  return 1;
}
