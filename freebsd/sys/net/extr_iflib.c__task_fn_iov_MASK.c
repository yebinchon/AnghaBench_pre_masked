
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* if_ctx_t ;
struct TYPE_7__ {TYPE_1__* ifc_sctx; int ifc_ifp; } ;
struct TYPE_6__ {int isc_flags; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 if_ctx_t VAR_3 = VAR_2;

 if (!(FUNC_3(VAR_3->ifc_ifp) & VAR_0) &&
     !(VAR_3->ifc_sctx->isc_flags & VAR_1))
  return;

 FUNC_0(VAR_3);
 FUNC_2(VAR_3);
 FUNC_1(VAR_3);
}
