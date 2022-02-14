
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct tstorm_eth_function_common_config {int dummy; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct bxe_softc*,scalar_t__,size_t,scalar_t__*) ;

__attribute__((used)) static void
FUNC_2(struct bxe_softc *VAR_1,
                      struct tstorm_eth_function_common_config *VAR_2,
                      uint16_t VAR_3)
{
    uint32_t VAR_4;
    size_t VAR_5;

    VAR_4 = (VAR_0 +
            FUNC_0(VAR_3));
    VAR_5 = sizeof(struct tstorm_eth_function_common_config);
    FUNC_1(VAR_1, VAR_4, VAR_5, (uint32_t *)VAR_2);
}
