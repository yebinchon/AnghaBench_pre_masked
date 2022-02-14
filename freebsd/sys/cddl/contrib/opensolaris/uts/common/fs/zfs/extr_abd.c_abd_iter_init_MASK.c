
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct abd_iter {scalar_t__ iter_mapsize; int * iter_mapaddr; scalar_t__ iter_pos; int * iter_abd; } ;
typedef int abd_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct abd_iter *VAR_0, abd_t *VAR_1)
{
 FUNC_0(VAR_1);
 VAR_0->iter_abd = VAR_1;
 VAR_0->iter_pos = 0;
 VAR_0->iter_mapaddr = ((void*)0);
 VAR_0->iter_mapsize = 0;
}
