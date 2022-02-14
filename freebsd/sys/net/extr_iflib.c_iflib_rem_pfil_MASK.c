
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pfil_head {int dummy; } ;
typedef TYPE_1__* iflib_rxq_t ;
typedef TYPE_2__* if_ctx_t ;
struct TYPE_6__ {TYPE_1__* ifc_rxqs; } ;
struct TYPE_5__ {struct pfil_head* pfil; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct pfil_head*) ;

__attribute__((used)) static void
FUNC_2(if_ctx_t VAR_0)
{
 struct pfil_head *VAR_1;
 iflib_rxq_t VAR_2;
 int VAR_3;

 VAR_2 = VAR_0->ifc_rxqs;
 VAR_1 = VAR_2->pfil;
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++, VAR_2++) {
  VAR_2->pfil = ((void*)0);
 }
 FUNC_1(VAR_1);
}
