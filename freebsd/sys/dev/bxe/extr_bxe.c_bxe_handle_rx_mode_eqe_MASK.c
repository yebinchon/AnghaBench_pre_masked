
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union event_ring_elem {int dummy; } event_ring_elem ;
struct bxe_softc {int sp_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct bxe_softc*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct bxe_softc *VAR_2,
                       union event_ring_elem *VAR_3)
{
    FUNC_0(VAR_0, &VAR_2->sp_state);


    if (FUNC_2(VAR_1,
                               &VAR_2->sp_state)) {
        FUNC_1(VAR_2);
    }
}
