
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int spc_refcnt; } ;
typedef TYPE_1__ scan_prefetch_ctx_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,void*) ;

__attribute__((used)) static void
FUNC_3(scan_prefetch_ctx_t *VAR_0, void *VAR_1)
{
 if (FUNC_2(&VAR_0->spc_refcnt, VAR_1) == 0) {
  FUNC_1(&VAR_0->spc_refcnt);
  FUNC_0(VAR_0, sizeof (scan_prefetch_ctx_t));
 }
}
