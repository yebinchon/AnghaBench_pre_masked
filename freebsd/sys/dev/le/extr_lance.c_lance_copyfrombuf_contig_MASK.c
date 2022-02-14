
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lance_softc {scalar_t__ sc_mem; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (void*,scalar_t__ volatile,int) ;

void
FUNC_1(struct lance_softc *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
 volatile caddr_t VAR_4 = VAR_0->sc_mem;




 FUNC_0(VAR_1, VAR_4 + VAR_2, VAR_3);
}
