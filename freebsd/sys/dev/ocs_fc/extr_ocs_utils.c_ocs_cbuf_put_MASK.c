
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t pidx; size_t entry_count; int cbuf_csem; int cbuf_plock; void** array; int cbuf_psem; } ;
typedef TYPE_1__ ocs_cbuf_t ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

int32_t
FUNC_6(ocs_cbuf_t *VAR_0, void *VAR_1)
{
 int32_t VAR_2 = 0;

 if (FUNC_0(FUNC_2(&VAR_0->cbuf_psem, -1) == 0)) {
  FUNC_1(&VAR_0->cbuf_plock);
   VAR_0->array[VAR_0->pidx] = VAR_1;
   if (FUNC_5(++VAR_0->pidx >= VAR_0->entry_count)) {
    VAR_0->pidx = 0;
   }
  FUNC_4(&VAR_0->cbuf_plock);
  FUNC_3(&VAR_0->cbuf_csem);
 } else {
  VAR_2 = -1;
 }
 return VAR_2;
}
