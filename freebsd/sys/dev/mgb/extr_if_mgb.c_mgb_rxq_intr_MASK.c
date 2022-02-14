
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mgb_softc {int ctx; } ;
typedef TYPE_1__* if_softc_ctx_t ;
struct TYPE_3__ {int isc_nrxqsets; } ;


 int FUNC_0 (struct mgb_softc*,int ) ;
 int FUNC_1 (struct mgb_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(void *VAR_4)
{
 struct mgb_softc *VAR_5;
 if_softc_ctx_t VAR_6;
 uint32_t VAR_7, VAR_8;
 int VAR_9;

 VAR_5 = VAR_4;
 VAR_6 = FUNC_3(VAR_5->ctx);

 VAR_7 = FUNC_0(VAR_5, VAR_3);
 VAR_8 = FUNC_0(VAR_5, VAR_2);
 VAR_7 &= VAR_8;

 for (VAR_9 = 0; VAR_9 < VAR_6->isc_nrxqsets; VAR_9++) {
  if ((VAR_7 & FUNC_2(VAR_9))){
   FUNC_1(VAR_5, VAR_1,
       FUNC_2(VAR_9));
   FUNC_1(VAR_5, VAR_3, FUNC_2(VAR_9));
  }
 }
 return (VAR_0);
}
