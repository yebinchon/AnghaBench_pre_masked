
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz8995ma_softc {int callout_tick; } ;


 int FUNC_0 (int *,int ,void (*) (void*),struct ksz8995ma_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct ksz8995ma_softc*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct ksz8995ma_softc *VAR_2;

 VAR_2 = VAR_1;

 FUNC_1(VAR_2);
 FUNC_0(&VAR_2->callout_tick, VAR_0, FUNC_2, VAR_2);
}
