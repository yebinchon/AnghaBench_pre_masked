
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iclass {int name; scalar_t__ is_class; } ;


 struct iclass** VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_1, const void *VAR_2)
{
  struct iclass *VAR_3 = VAR_0[*(int *)VAR_1];
  struct iclass *VAR_4 = VAR_0[*(int *)VAR_2];

  if (VAR_3->is_class)
    {
      if (!VAR_4->is_class)
        return -1;
    }
  else if (VAR_4->is_class)
    return 1;

  return FUNC_0 (VAR_3->name, VAR_4->name);
}
