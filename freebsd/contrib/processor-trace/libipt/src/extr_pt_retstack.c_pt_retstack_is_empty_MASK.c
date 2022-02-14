
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_retstack {scalar_t__ top; scalar_t__ bottom; } ;


 int VAR_0 ;

int FUNC_0(const struct pt_retstack *VAR_1)
{
 if (!VAR_1)
  return -VAR_0;

 return (VAR_1->top == VAR_1->bottom ? 1 : 0);
}
