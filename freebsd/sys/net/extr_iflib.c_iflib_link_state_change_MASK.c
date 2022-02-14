
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_2__* iflib_txq_t ;
typedef int if_t ;
typedef TYPE_3__* if_ctx_t ;
struct TYPE_7__ {int isc_ntxqsets; } ;
struct TYPE_9__ {int ifc_link_state; TYPE_1__ ifc_softc_ctx; int ifc_flags; TYPE_2__* ifc_txqs; int ifc_ifp; } ;
struct TYPE_8__ {int ift_qstatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;

void
FUNC_5(if_ctx_t VAR_4, int VAR_5, uint64_t VAR_6)
{
 if_t VAR_7 = VAR_4->ifc_ifp;
 iflib_txq_t VAR_8 = VAR_4->ifc_txqs;

 FUNC_4(VAR_7, VAR_6);
 if (VAR_6 >= FUNC_0(10)) {
  FUNC_1(VAR_4);
  VAR_4->ifc_flags |= VAR_0;
  FUNC_2(VAR_4);
 }

 if ((VAR_4->ifc_link_state == VAR_3) && (VAR_5 == VAR_2)) {
  for (int VAR_9 = 0; VAR_9 < VAR_4->ifc_softc_ctx.isc_ntxqsets; VAR_9++, VAR_8++)
   VAR_8->ift_qstatus = VAR_1;
 }
 VAR_4->ifc_link_state = VAR_5;
 FUNC_3(VAR_7, VAR_5);
}
