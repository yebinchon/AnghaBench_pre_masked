
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int qla_host_t ;
struct TYPE_3__ {int select_addr_1; int select_addr_2; int select_value_1; int select_value_2; int select_value_count; int select_value_mask; int read_addr; scalar_t__ select_value_stride; } ;
typedef TYPE_1__ ql_minidump_entry_mux2_t ;


 int FUNC_0 (int *,int,int*,int) ;

__attribute__((used)) static uint32_t
FUNC_1(qla_host_t *VAR_0,
 ql_minidump_entry_mux2_t *VAR_1,
 uint32_t *VAR_2)
{
 int VAR_3;
        int VAR_4;

        uint32_t VAR_5, VAR_6;
        uint32_t VAR_7, VAR_8;
        uint32_t VAR_9, VAR_10;
        uint32_t VAR_11, VAR_12;

        VAR_5 = VAR_1->select_addr_1;
        VAR_6 = VAR_1->select_addr_2;
        VAR_7 = VAR_1->select_value_1;
        VAR_8 = VAR_1->select_value_2;
        VAR_9 = VAR_1->select_value_count;
        VAR_10 = VAR_1->select_value_mask;

        VAR_11 = VAR_1->read_addr;

        for (VAR_4 = 0; VAR_4 < VAR_1->select_value_count;
  VAR_4++) {

                uint32_t VAR_13;

  VAR_3 = FUNC_0(VAR_0, VAR_5, &VAR_7, 0);
  if (VAR_3)
   return (0);

                VAR_13 = VAR_7 & VAR_10;

  VAR_3 = FUNC_0(VAR_0, VAR_6, &VAR_13, 0);
  if (VAR_3)
   return (0);

  VAR_3 = FUNC_0(VAR_0, VAR_11, &VAR_12, 1);
  if (VAR_3)
   return (0);

                *VAR_2++ = VAR_13;
                *VAR_2++ = VAR_12;

  VAR_3 = FUNC_0(VAR_0, VAR_5, &VAR_8, 0);
  if (VAR_3)
   return (0);

                VAR_13 = VAR_8 & VAR_10;

  VAR_3 = FUNC_0(VAR_0, VAR_6, &VAR_13, 0);
  if (VAR_3)
   return (0);

  VAR_3 = FUNC_0(VAR_0, VAR_11, &VAR_12, 1);
  if (VAR_3)
   return (0);

                *VAR_2++ = VAR_13;
                *VAR_2++ = VAR_12;

                VAR_7 += VAR_1->select_value_stride;
                VAR_8 += VAR_1->select_value_stride;
        }

        return (VAR_4 * (4 * sizeof(uint32_t)));
}
