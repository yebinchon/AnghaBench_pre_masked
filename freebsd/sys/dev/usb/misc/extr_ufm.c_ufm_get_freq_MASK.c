
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufm_softc {int sc_freq; int sc_mtx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct ufm_softc *VAR_0, void *VAR_1)
{
 int *VAR_2 = (int *)VAR_1;

 FUNC_0(&VAR_0->sc_mtx);
 *VAR_2 = VAR_0->sc_freq;
 FUNC_1(&VAR_0->sc_mtx);
 return (0);
}
