
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {scalar_t__ owned; struct mtx* parent; } ;



int
FUNC_0(struct mtx *VAR_0)
{
 VAR_0 = VAR_0->parent;
 return (VAR_0->owned != 0);
}
