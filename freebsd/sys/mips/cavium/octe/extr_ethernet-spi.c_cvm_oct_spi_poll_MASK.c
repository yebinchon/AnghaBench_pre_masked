
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {scalar_t__ if_softc; } ;
struct TYPE_2__ {int port; } ;
typedef TYPE_1__ cvm_oct_private_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int,int ,int) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct ifnet *VAR_2)
{
 static int VAR_3;
 cvm_oct_private_t *VAR_4 = (cvm_oct_private_t *)VAR_2->if_softc;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {

  if ((VAR_4->port == VAR_5*16) && VAR_1[VAR_5]) {

   if (FUNC_2(VAR_5, VAR_0, 10) == 0) {
    VAR_1[VAR_5] = 0;
    FUNC_0(VAR_5);
   }
  }






  if (VAR_4->port == VAR_3) {


   FUNC_1(VAR_5, VAR_4->port);


   VAR_3--;
   if (VAR_3 < 0)
    VAR_3 = 10;
  }
 }
}
