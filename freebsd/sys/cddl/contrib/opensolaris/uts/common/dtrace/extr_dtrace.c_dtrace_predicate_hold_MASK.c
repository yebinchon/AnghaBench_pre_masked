
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dtp_refcnt; TYPE_1__* dtp_difo; } ;
typedef TYPE_2__ dtrace_predicate_t ;
struct TYPE_4__ {scalar_t__ dtdo_refcnt; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(dtrace_predicate_t *VAR_1)
{
 FUNC_0(FUNC_1(&VAR_0));
 FUNC_0(VAR_1->dtp_difo != ((void*)0) && VAR_1->dtp_difo->dtdo_refcnt != 0);
 FUNC_0(VAR_1->dtp_refcnt > 0);

 VAR_1->dtp_refcnt++;
}
