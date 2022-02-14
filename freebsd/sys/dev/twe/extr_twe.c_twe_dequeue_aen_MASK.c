
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct twe_softc {size_t twe_aen_tail; size_t twe_aen_head; int * twe_aen_queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct twe_softc*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static u_int16_t
FUNC_2(struct twe_softc *VAR_2)
{
    u_int16_t VAR_3;

    FUNC_1(4);

    FUNC_0(VAR_2);
    if (VAR_2->twe_aen_tail == VAR_2->twe_aen_head) {
 VAR_3 = VAR_0;
    } else {
 VAR_3 = VAR_2->twe_aen_queue[VAR_2->twe_aen_tail];
 VAR_2->twe_aen_tail = ((VAR_2->twe_aen_tail + 1) % VAR_1);
    }
    return(VAR_3);
}
