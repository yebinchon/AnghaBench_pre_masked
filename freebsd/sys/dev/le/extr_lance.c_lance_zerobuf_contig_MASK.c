
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lance_softc {scalar_t__ sc_mem; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (scalar_t__ volatile,int ,int) ;

void
FUNC_1(struct lance_softc *VAR_0, int VAR_1, int VAR_2)
{
 volatile caddr_t VAR_3 = VAR_0->sc_mem;




 FUNC_0(VAR_3 + VAR_1, 0, VAR_2);
}
