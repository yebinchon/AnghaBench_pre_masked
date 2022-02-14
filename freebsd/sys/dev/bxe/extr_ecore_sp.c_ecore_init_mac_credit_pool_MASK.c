
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ecore_credit_pool_obj {int dummy; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct bxe_softc*,int) ;
 int FUNC_4 (struct ecore_credit_pool_obj*,int,int) ;

void FUNC_5(struct bxe_softc *VAR_5,
    struct ecore_credit_pool_obj *VAR_6, uint8_t VAR_7,
    uint8_t VAR_8)
{



 int VAR_9;

 if (FUNC_0(VAR_5)) {

  if (!FUNC_2(VAR_5))
   VAR_9 = (VAR_3 / 2) - VAR_2;
  else
   VAR_9 = 5 - VAR_1;

  FUNC_4(VAR_6, VAR_7 * VAR_9, VAR_9);

 } else if (FUNC_1(VAR_5)) {



  if ((VAR_8 > 0)) {
   if (!FUNC_2(VAR_5))
    VAR_9 = (VAR_4 / (2*VAR_8));
   else
    VAR_9 = 5;
   FUNC_4(VAR_6, VAR_7 * VAR_9, VAR_9);
  } else {

   FUNC_4(VAR_6, 0, 0);
  }
 } else {




  if (VAR_8 > 0) {
   if (!FUNC_2(VAR_5))
    VAR_9 = FUNC_3(VAR_5, VAR_8);
   else
    VAR_9 = 5;




   FUNC_4(VAR_6, -1, VAR_9);
  } else {

   FUNC_4(VAR_6, 0, 0);
  }
 }
}
