
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scb {int aic_softc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct scb*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(void *VAR_0)
{
 struct scb *VAR_1;

 VAR_1 = (struct scb *)VAR_0;
 FUNC_0(VAR_1->aic_softc);
 FUNC_1(VAR_1);
 FUNC_2(VAR_1->aic_softc);
}
