
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_buf {size_t len; size_t size; int ** vec; } ;
typedef int Char ;


 int ** FUNC_0 (int **,int) ;

__attribute__((used)) static void
FUNC_1(struct blk_buf *VAR_0, Char *VAR_1)
{
    if (VAR_0->len == VAR_0->size) {
 if (VAR_0->size == 0)
     VAR_0->size = 16;
 else
     VAR_0->size *= 2;
 VAR_0->vec = FUNC_0(VAR_0->vec, VAR_0->size * sizeof (*VAR_0->vec));
    }
    VAR_0->vec[VAR_0->len] = VAR_1;
}
