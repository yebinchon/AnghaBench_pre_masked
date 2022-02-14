
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct constant_descriptor_tree {scalar_t__ hash; int value; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  const struct constant_descriptor_tree *VAR_2 = VAR_0;
  const struct constant_descriptor_tree *VAR_3 = VAR_1;
  if (VAR_2->hash != VAR_3->hash)
    return 0;
  return FUNC_0 (VAR_2->value, VAR_3->value);
}
