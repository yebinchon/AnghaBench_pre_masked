
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isc_softc {int * pdu_zone; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct isc_softc *VAR_0)
{
     FUNC_0(8);

     if(VAR_0->pdu_zone != ((void*)0)) {
   FUNC_1(VAR_0->pdu_zone);
   VAR_0->pdu_zone = ((void*)0);
     }
}
