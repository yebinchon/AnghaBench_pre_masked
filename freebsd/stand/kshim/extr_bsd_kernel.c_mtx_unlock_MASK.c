
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int owned; struct mtx* parent; } ;



void
FUNC_0(struct mtx *VAR_0)
{
 VAR_0 = VAR_0->parent;
 VAR_0->owned--;
}
