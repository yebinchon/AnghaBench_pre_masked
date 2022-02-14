
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct bxe_softc {int dummy; } ;
struct bxe_fastpath {scalar_t__ cl_id; struct bxe_softc* sc; } ;


 int FUNC_0 (struct bxe_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct bxe_softc*) ;

__attribute__((used)) static inline uint8_t
FUNC_2(struct bxe_fastpath *VAR_1)
{
    struct bxe_softc *VAR_2 = VAR_1->sc;

    if (!FUNC_0(VAR_2)) {
        return (VAR_1->cl_id);
    }

    return (VAR_1->cl_id + FUNC_1(VAR_2) * VAR_0);
}
