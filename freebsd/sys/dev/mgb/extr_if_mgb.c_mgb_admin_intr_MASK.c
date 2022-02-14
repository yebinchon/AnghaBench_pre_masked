
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mgb_softc {int isr_test_flag; int ctx; int dev; } ;
typedef TYPE_1__* if_softc_ctx_t ;
struct TYPE_3__ {int isc_nrxqsets; int isc_ntxqsets; } ;


 int FUNC_0 (struct mgb_softc*,int ) ;
 int FUNC_1 (struct mgb_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 int FUNC_4 (int ,char*) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int
FUNC_8(void *VAR_9)
{
 struct mgb_softc *VAR_10;
 if_softc_ctx_t VAR_11;
 uint32_t VAR_12, VAR_13;
 int VAR_14;

 VAR_10 = VAR_9;
 VAR_11 = FUNC_5(VAR_10->ctx);

 VAR_12 = FUNC_0(VAR_10, VAR_4);
 VAR_13 = FUNC_0(VAR_10, VAR_3);
 VAR_12 &= VAR_13;







 if ((VAR_12 & VAR_5) == 0)
 {
  FUNC_4(VAR_10->dev, "non-mgb interrupt triggered.\n");
  return (VAR_1);
 }
 if ((VAR_12 & VAR_7) != 0)
 {
  VAR_10->isr_test_flag = 1;
  FUNC_1(VAR_10, VAR_4, VAR_7);
  return (VAR_0);
 }
 if ((VAR_12 & VAR_6) != 0)
 {
  for (VAR_14 = 0; VAR_14 < VAR_11->isc_nrxqsets; VAR_14++) {
   if ((VAR_12 & FUNC_2(VAR_14))){
    FUNC_6(VAR_10->ctx, VAR_14);
   }
  }
  return (VAR_0);
 }

 if ((VAR_12 & VAR_8) != 0)
 {
  for (VAR_14 = 0; VAR_14 < VAR_11->isc_ntxqsets; VAR_14++) {
   if ((VAR_12 & FUNC_2(VAR_14))) {

    FUNC_1(VAR_10, VAR_2,
        FUNC_3(VAR_14));
    FUNC_1(VAR_10, VAR_4,
        FUNC_3(VAR_14));
    FUNC_7(VAR_10->ctx, VAR_14);
   }
  }
  return (VAR_0);
 }

 return (VAR_1);
}
