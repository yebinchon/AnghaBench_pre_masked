
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct die_info {unsigned int offset; struct die_info* next_ref; } ;


 unsigned int VAR_0 ;
 struct die_info** VAR_1 ;

__attribute__((used)) static struct die_info *
FUNC_0 (unsigned int VAR_2)
{
  struct die_info *VAR_3;
  int VAR_4;

  VAR_4 = (VAR_2 % VAR_0);
  VAR_3 = VAR_1[VAR_4];
  while (VAR_3)
    {
      if (VAR_3->offset == VAR_2)
 {
   return VAR_3;
 }
      VAR_3 = VAR_3->next_ref;
    }
  return ((void*)0);
}
