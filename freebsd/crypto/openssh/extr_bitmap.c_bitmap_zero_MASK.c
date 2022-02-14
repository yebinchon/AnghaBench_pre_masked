
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitmap {int len; scalar_t__ top; int d; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

void
FUNC_1(struct bitmap *VAR_1)
{
 FUNC_0(VAR_1->d, 0, VAR_1->len * VAR_0);
 VAR_1->top = 0;
}
