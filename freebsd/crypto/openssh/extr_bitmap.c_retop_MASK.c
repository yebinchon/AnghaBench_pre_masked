
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap {size_t top; size_t len; scalar_t__* d; } ;



__attribute__((used)) static void
FUNC_0(struct bitmap *VAR_0)
{
 if (VAR_0->top >= VAR_0->len)
  return;
 while (VAR_0->top > 0 && VAR_0->d[VAR_0->top] == 0)
  VAR_0->top--;
}
