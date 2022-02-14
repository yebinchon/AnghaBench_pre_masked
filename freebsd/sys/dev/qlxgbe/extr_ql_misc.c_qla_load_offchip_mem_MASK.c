
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int qla_host_t ;
struct TYPE_4__ {int data_lo; int data_hi; int data_ulo; int data_uhi; } ;
typedef TYPE_1__ q80_offchip_mem_val_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,scalar_t__,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_2(qla_host_t *VAR_0, uint64_t VAR_1, uint32_t *VAR_2,
        uint32_t VAR_3)
{
        q80_offchip_mem_val_t VAR_4;
        int VAR_5 = 0;

        while (VAR_3) {
                if (VAR_3 > 4) {
                        VAR_4.data_lo = *VAR_2++;
                        VAR_4.data_hi = *VAR_2++;
                        VAR_4.data_ulo = *VAR_2++;
                        VAR_4.data_uhi = *VAR_2++;
                        VAR_3 -= 4;
                        if (FUNC_1(VAR_0, VAR_1, &VAR_4, 0))
                                return -1;

                        VAR_1 += (uint64_t)16;
                } else {
                        break;
                }
        }

        FUNC_0(&VAR_4, sizeof(q80_offchip_mem_val_t));

        switch (VAR_3) {
        case 3:
                VAR_4.data_lo = *VAR_2++;
                VAR_4.data_hi = *VAR_2++;
                VAR_4.data_ulo = *VAR_2++;
                 VAR_5 = FUNC_1(VAR_0, VAR_1, &VAR_4, 0);
                break;

        case 2:
                VAR_4.data_lo = *VAR_2++;
                VAR_4.data_hi = *VAR_2++;
                 VAR_5 = FUNC_1(VAR_0, VAR_1, &VAR_4, 0);
                break;

        case 1:
                VAR_4.data_lo = *VAR_2++;
                VAR_5 = FUNC_1(VAR_0, VAR_1, &VAR_4, 0);
                break;

        default:
                break;

        }
        return VAR_5;
}
