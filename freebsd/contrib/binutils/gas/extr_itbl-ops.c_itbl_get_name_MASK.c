
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itbl_entry {char* name; } ;
typedef int e_type ;
typedef int e_processor ;


 struct itbl_entry* FUNC_0 (int ,int ,unsigned long,int ) ;

char *
FUNC_1 (e_processor VAR_0, e_type VAR_1, unsigned long VAR_2)
{
  struct itbl_entry *VAR_3;

  VAR_3 = FUNC_0 (VAR_0, VAR_1, VAR_2, 0);
  if (VAR_3)
    return VAR_3->name;
  else
    return 0;
}
