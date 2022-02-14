
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_rnd_softc {int sc_callout; int * sc_entropy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,void (*) (void*),struct octeon_rnd_softc*) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int *,int,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_3)
{
 struct octeon_rnd_softc *VAR_4;
 unsigned VAR_5;

 VAR_4 = VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_4->sc_entropy[VAR_5] = FUNC_1();

 FUNC_2(VAR_4->sc_entropy, sizeof VAR_4->sc_entropy, VAR_1);

 FUNC_0(&VAR_4->sc_callout, VAR_2 * 5, FUNC_3, VAR_4);
}
