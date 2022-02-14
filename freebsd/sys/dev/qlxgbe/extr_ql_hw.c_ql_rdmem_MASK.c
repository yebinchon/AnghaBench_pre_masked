
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int qla_host_t ;
struct TYPE_5__ {int read_addr; int read_data_size; } ;
typedef TYPE_1__ ql_minidump_entry_rdmem_t ;
struct TYPE_6__ {int data_uhi; int data_ulo; int data_hi; int data_lo; } ;
typedef TYPE_2__ q80_offchip_mem_val_t ;


 int FUNC_0 (int *,int volatile,TYPE_2__*,int) ;

__attribute__((used)) static uint32_t
FUNC_1(qla_host_t *VAR_0,
 ql_minidump_entry_rdmem_t *VAR_1,
 uint32_t *VAR_2)
{
 int VAR_3;
        int VAR_4, VAR_5;
        volatile uint32_t VAR_6;
 q80_offchip_mem_val_t VAR_7;

        VAR_6 = VAR_1->read_addr;


        VAR_5 = VAR_1->read_data_size / (sizeof(uint32_t) * 4);

        for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {

  VAR_3 = FUNC_0(VAR_0, (VAR_6 & 0x0ffffffff), &VAR_7, 1);
  if (VAR_3)
   return (0);

                *VAR_2++ = VAR_7.data_lo;
                *VAR_2++ = VAR_7.data_hi;
                *VAR_2++ = VAR_7.data_ulo;
                *VAR_2++ = VAR_7.data_uhi;

                VAR_6 += (sizeof(uint32_t) * 4);
        }

        return (VAR_5 * (sizeof(uint32_t) * 4));
}
