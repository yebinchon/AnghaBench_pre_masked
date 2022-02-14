
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arswitch_softc {int callout_tick; } ;


 int FUNC_0 (struct arswitch_softc*) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct arswitch_softc*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct arswitch_softc *VAR_2 = VAR_1;

 FUNC_0(VAR_2);
 FUNC_1(&VAR_2->callout_tick, VAR_0, FUNC_2, VAR_2);
}
