
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mgb_softc {int dummy; } ;
typedef TYPE_1__* if_softc_ctx_t ;
typedef int if_ctx_t ;
struct TYPE_3__ {int isc_nrxqsets; } ;


 int FUNC_0 (struct mgb_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 struct mgb_softc* FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(if_ctx_t VAR_5)
{
 struct mgb_softc *VAR_6;
 if_softc_ctx_t VAR_7;
 int VAR_8, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;

 VAR_6 = FUNC_4(VAR_5);
 VAR_7 = FUNC_5(VAR_5);
 VAR_10 |= VAR_3;
 VAR_11 |= VAR_3;

 for (VAR_8 = 0; VAR_8 < VAR_7->isc_nrxqsets; VAR_8++) {
  VAR_10 |= FUNC_3(VAR_8);
  VAR_9 |= FUNC_1(VAR_8);
  VAR_11 |= FUNC_2(VAR_8);
 }



 FUNC_0(VAR_6, VAR_2, VAR_10);
 FUNC_0(VAR_6, VAR_4, VAR_11);
 FUNC_0(VAR_6, VAR_1, VAR_9);
 FUNC_0(VAR_6, VAR_0, VAR_9);
}
