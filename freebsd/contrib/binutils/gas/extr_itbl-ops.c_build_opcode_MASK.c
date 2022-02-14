
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itbl_entry {int processor; int range; int value; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ,int ) ;

__attribute__((used)) static unsigned long
FUNC_2 (struct itbl_entry *VAR_0)
{
  unsigned long VAR_1;

  VAR_1 = FUNC_1 (VAR_0->value, VAR_0->range);
  VAR_1 |= FUNC_0 (VAR_0->processor);
  return VAR_1;
}
