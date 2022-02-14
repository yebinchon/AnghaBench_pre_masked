
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int16_t ;
struct twe_softc {int twe_aen_tail; int twe_aen_head; scalar_t__* twe_aen_queue; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct twe_softc *VAR_1, u_int16_t VAR_2)
{
    int VAR_3, VAR_4;

    VAR_4 = 1;
    for (VAR_3 = VAR_1->twe_aen_tail; (VAR_3 != VAR_1->twe_aen_head) && VAR_4; VAR_3 = (VAR_3 + 1) % VAR_0) {
 if (VAR_1->twe_aen_queue[VAR_3] == VAR_2)
     VAR_4 = 0;
    }
    return(VAR_4);
}
