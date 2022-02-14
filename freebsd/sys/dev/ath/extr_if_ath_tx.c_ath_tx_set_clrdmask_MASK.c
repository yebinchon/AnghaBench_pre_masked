
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_softc {int dummy; } ;
struct ath_node {int clrdmask; TYPE_1__* an_tid; } ;
struct TYPE_2__ {int isfiltered; } ;


 int FUNC_0 (struct ath_softc*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct ath_softc *VAR_1, struct ath_node *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->an_tid[VAR_3].isfiltered == 1)
   return;
 }
 VAR_2->clrdmask = 1;
}
