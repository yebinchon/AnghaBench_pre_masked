
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mgb_softc {int ctx; } ;
typedef TYPE_1__* if_softc_ctx_t ;
struct TYPE_3__ {int isc_nrxqsets; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct mgb_softc*,int) ;
 int FUNC_2 (struct mgb_softc*,int) ;

__attribute__((used)) static int
FUNC_3(struct mgb_softc *VAR_0)
{
 if_softc_ctx_t VAR_1;
 int VAR_2, VAR_3 = 0;

 VAR_1 = FUNC_0(VAR_0->ctx);

 for (VAR_2 = 0; VAR_2 < VAR_1->isc_nrxqsets; VAR_2++)
  if ((VAR_3 = FUNC_1(VAR_0, VAR_2)))
   goto fail;

 for (VAR_2 = 0; VAR_2 < VAR_1->isc_nrxqsets; VAR_2++)
  if ((VAR_3 = FUNC_2(VAR_0, VAR_2)))
   goto fail;

fail:
 return VAR_3;
}
