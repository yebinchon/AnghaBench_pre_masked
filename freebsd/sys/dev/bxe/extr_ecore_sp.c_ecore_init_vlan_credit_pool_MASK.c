
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct ecore_credit_pool_obj {int dummy; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*,scalar_t__) ;
 int FUNC_2 (struct ecore_credit_pool_obj*,int,int) ;

void FUNC_3(struct bxe_softc *VAR_0,
     struct ecore_credit_pool_obj *VAR_1,
     uint8_t VAR_2,
     uint8_t VAR_3)
{
 if (FUNC_0(VAR_0)) {



  FUNC_2(VAR_1, 0, -1);
 } else {



  if (VAR_3 > 0) {
   int VAR_4 = FUNC_1(VAR_0, VAR_3);

   FUNC_2(VAR_1, -1 , VAR_4);
  } else

   FUNC_2(VAR_1, 0, 0);
 }
}
