
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ecore_general_setup_params {int cos; int mtu; int spcl_id; int stat_id; } ;
struct bxe_softc {int mtu; } ;
struct bxe_fastpath {int cl_id; } ;


 int FUNC_0 (struct bxe_fastpath*) ;

__attribute__((used)) static void
FUNC_1(struct bxe_softc *VAR_0,
                      struct bxe_fastpath *VAR_1,
                      struct ecore_general_setup_params *VAR_2,
                      uint8_t VAR_3)
{
    VAR_2->stat_id = FUNC_0(VAR_1);
    VAR_2->spcl_id = VAR_1->cl_id;
    VAR_2->mtu = VAR_0->mtu;
    VAR_2->cos = VAR_3;
}
