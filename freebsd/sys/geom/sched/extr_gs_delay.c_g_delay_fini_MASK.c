
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_delay_softc {int sc_wait; } ;
struct TYPE_2__ {int units; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct g_delay_softc*,int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(void *VAR_2)
{
 struct g_delay_softc *VAR_3 = VAR_2;




 FUNC_0(&VAR_3->sc_wait);
 VAR_1.units--;
 FUNC_1(VAR_3, VAR_0);
}
