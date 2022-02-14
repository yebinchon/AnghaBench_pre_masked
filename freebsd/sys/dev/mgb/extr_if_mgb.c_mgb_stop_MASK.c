
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mgb_softc {int dummy; } ;
typedef TYPE_1__* if_softc_ctx_t ;
typedef int if_ctx_t ;
struct TYPE_3__ {int isc_nrxqsets; int isc_ntxqsets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mgb_softc* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (struct mgb_softc*,int ,int ,int ) ;
 int FUNC_3 (struct mgb_softc*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(if_ctx_t VAR_6)
{
 struct mgb_softc *VAR_7 ;
 if_softc_ctx_t VAR_8;
 int VAR_9;

 VAR_7 = FUNC_0(VAR_6);
 VAR_8 = FUNC_1(VAR_6);


 for (VAR_9 = 0; VAR_9 < VAR_8->isc_nrxqsets; VAR_9++) {
  FUNC_2(VAR_7, VAR_2, 0, VAR_0);
  FUNC_3(VAR_7, VAR_4, 0, VAR_1);
 }
 for (VAR_9 = 0; VAR_9 < VAR_8->isc_ntxqsets; VAR_9++) {
  FUNC_2(VAR_7, VAR_3, 0, VAR_0);
  FUNC_3(VAR_7, VAR_5, 0, VAR_1);
 }
}
