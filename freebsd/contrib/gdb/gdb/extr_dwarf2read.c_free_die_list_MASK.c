
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct die_info {struct die_info* attrs; struct die_info* sibling; struct die_info* child; } ;


 int FUNC_0 (struct die_info*) ;

__attribute__((used)) static void
FUNC_1 (struct die_info *VAR_0)
{
  struct die_info *VAR_1, *VAR_2;

  VAR_1 = VAR_0;
  while (VAR_1)
    {
      if (VAR_1->child != ((void*)0))
 FUNC_1 (VAR_1->child);
      VAR_2 = VAR_1->sibling;
      FUNC_0 (VAR_1->attrs);
      FUNC_0 (VAR_1);
      VAR_1 = VAR_2;
    }
}
