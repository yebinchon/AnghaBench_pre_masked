
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* vl_by_sl_num; } ;
typedef TYPE_1__ ib_slvl_table_t ;



__attribute__((used)) static inline void FUNC_0(ib_slvl_table_t * VAR_0, int VAR_1, uint8_t * VAR_2)
{
 *VAR_2 = (VAR_0->vl_by_sl_num[VAR_1 >> 1] >> ((!(VAR_1 & 1)) << 2)) & 0xf;
}
