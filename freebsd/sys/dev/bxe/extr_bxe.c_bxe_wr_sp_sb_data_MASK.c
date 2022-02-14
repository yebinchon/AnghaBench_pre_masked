
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hc_sp_status_block_data {int dummy; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct bxe_softc*,scalar_t__,int ) ;
 int FUNC_2 (struct bxe_softc*) ;

__attribute__((used)) static void
FUNC_3(struct bxe_softc *VAR_1,
                  struct hc_sp_status_block_data *VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0;
         VAR_3 < (sizeof(struct hc_sp_status_block_data) / sizeof(uint32_t));
         VAR_3++) {
        FUNC_1(VAR_1,
               (VAR_0 +
                FUNC_0(FUNC_2(VAR_1)) +
                (VAR_3 * sizeof(uint32_t))),
               *((uint32_t *)VAR_2 + VAR_3));
    }
}
