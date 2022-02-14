
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* iflib_txq_t ;
typedef TYPE_2__* if_shared_ctx_t ;
typedef TYPE_3__* if_ctx_t ;
struct TYPE_11__ {TYPE_1__* ifc_txqs; TYPE_2__* ifc_sctx; } ;
struct TYPE_10__ {int isc_ntxqs; } ;
struct TYPE_9__ {int * ift_ifdi; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(if_ctx_t VAR_1)
{
 iflib_txq_t VAR_2 = VAR_1->ifc_txqs;
 if_shared_ctx_t VAR_3 = VAR_1->ifc_sctx;
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_1); VAR_4++, VAR_2++) {
  for (VAR_5 = 0; VAR_5 < VAR_3->isc_ntxqs; VAR_5++)
   FUNC_3(&VAR_2->ift_ifdi[VAR_5]);
  FUNC_4(VAR_2);
 }
 FUNC_2(VAR_1->ifc_txqs, VAR_0);
 VAR_1->ifc_txqs = ((void*)0);
 FUNC_0(VAR_1);
}
