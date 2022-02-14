
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ocs_os_handle_t ;
struct TYPE_6__ {int entry_count; int * array; int cbuf_psem; int cbuf_csem; int cbuf_plock; int cbuf_clock; scalar_t__ cidx; scalar_t__ pidx; int os; } ;
typedef TYPE_1__ ocs_cbuf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *,char*,TYPE_1__*) ;
 void* FUNC_2 (int ,int,int) ;
 int FUNC_3 (int *,int,char*,TYPE_1__*) ;

ocs_cbuf_t*
FUNC_4(ocs_os_handle_t VAR_2, uint32_t VAR_3)
{
 ocs_cbuf_t *VAR_4;

 VAR_4 = FUNC_2(VAR_2, sizeof(*VAR_4), VAR_0 | VAR_1);
 if (VAR_4 == ((void*)0)) {
  return ((void*)0);
 }

 VAR_4->os = VAR_2;
 VAR_4->entry_count = VAR_3;
 VAR_4->pidx = 0;
 VAR_4->cidx = 0;

 FUNC_1(((void*)0), &VAR_4->cbuf_clock, "cbuf_c:%p", VAR_4);
 FUNC_1(((void*)0), &VAR_4->cbuf_plock, "cbuf_p:%p", VAR_4);
 FUNC_3(&VAR_4->cbuf_csem, 0, "cbuf:%p", VAR_4);
 FUNC_3(&VAR_4->cbuf_psem, VAR_4->entry_count, "cbuf:%p", VAR_4);

 VAR_4->array = FUNC_2(VAR_2, VAR_3 * sizeof(*VAR_4->array), VAR_0 | VAR_1);
 if (VAR_4->array == ((void*)0)) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
