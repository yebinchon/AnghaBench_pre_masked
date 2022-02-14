
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {struct mtx* parent; scalar_t__ owned; } ;



void
FUNC_0(struct mtx *VAR_0, const char *VAR_1, const char *VAR_2, int VAR_3)
{
 VAR_0->owned = 0;
 VAR_0->parent = VAR_0;
}
