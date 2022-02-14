
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_retstack {scalar_t__ bottom; scalar_t__ top; } ;



void FUNC_0(struct pt_retstack *VAR_0)
{
 if (!VAR_0)
  return;

 VAR_0->top = 0;
 VAR_0->bottom = 0;
}
