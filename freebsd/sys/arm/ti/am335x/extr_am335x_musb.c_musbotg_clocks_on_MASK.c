
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct musbotg_softc {size_t sc_id; } ;


 int* VAR_0 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct musbotg_softc *VAR_2;
 uint32_t VAR_3, VAR_4;

 VAR_2 = VAR_1;
        VAR_4 = VAR_0[VAR_2->sc_id];

 FUNC_0(VAR_4, &VAR_3);
 VAR_3 &= ~3;
 VAR_3 |= 1 << 19;
 VAR_3 |= 1 << 20;
 FUNC_1(VAR_4, VAR_3);
}
