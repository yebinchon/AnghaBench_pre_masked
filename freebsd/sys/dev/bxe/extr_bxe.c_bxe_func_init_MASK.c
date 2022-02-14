
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tstorm_eth_function_common_config {int member_0; } ;
struct bxe_softc {int dummy; } ;
struct bxe_func_init_params {int func_flgs; int spq_prod; int func_id; int spq_map; int pf_id; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct bxe_softc*,scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct bxe_softc*,struct tstorm_eth_function_common_config*,int ) ;
 int FUNC_4 (struct bxe_softc*,int ,int) ;
 int FUNC_5 (struct bxe_softc*,int ,int ) ;
 int FUNC_6 (struct bxe_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct bxe_softc *VAR_2,
              struct bxe_func_init_params *VAR_3)
{
    struct tstorm_eth_function_common_config VAR_4 = { 0 };

    if (FUNC_0(VAR_2)) {
        FUNC_3(VAR_2, &VAR_4, VAR_3->func_id);
    }


    FUNC_6(VAR_2, VAR_3->func_id, VAR_3->pf_id);
    FUNC_4(VAR_2, VAR_3->func_id, 1);


    if (VAR_3->func_flgs & VAR_0) {
        FUNC_5(VAR_2, VAR_3->spq_map, VAR_3->func_id);
        FUNC_1(VAR_2,
               (VAR_1 + FUNC_2(VAR_3->func_id)),
               VAR_3->spq_prod);
    }
}
