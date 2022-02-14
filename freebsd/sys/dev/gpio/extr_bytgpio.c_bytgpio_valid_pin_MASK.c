
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bytgpio_softc {int sc_npins; int * sc_mem_res; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct bytgpio_softc *VAR_1, int VAR_2)
{

 if (VAR_2 >= VAR_1->sc_npins || VAR_1->sc_mem_res == ((void*)0))
  return (VAR_0);

 return (0);
}
