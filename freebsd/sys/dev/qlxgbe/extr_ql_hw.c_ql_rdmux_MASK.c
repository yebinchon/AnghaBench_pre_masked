
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int qla_host_t ;
struct TYPE_3__ {int select_addr; int select_value; int read_addr; int op_count; scalar_t__ select_value_stride; } ;
typedef TYPE_1__ ql_minidump_entry_mux_t ;


 int FUNC_0 (int *,int,int*,int) ;

__attribute__((used)) static uint32_t
FUNC_1(qla_host_t *VAR_0,
 ql_minidump_entry_mux_t *VAR_1,
 uint32_t *VAR_2)
{
 int VAR_3;
 int VAR_4;
 uint32_t VAR_5, VAR_6;
 uint32_t VAR_7, VAR_8;

 VAR_8 = VAR_1->select_addr;
 VAR_6 = VAR_1->select_value;
 VAR_7 = VAR_1->read_addr;

 for (VAR_4 = 0; VAR_4 < VAR_1->op_count; VAR_4++) {

  VAR_3 = FUNC_0(VAR_0, VAR_8, &VAR_6, 0);
  if (VAR_3)
   return (0);

  VAR_3 = FUNC_0(VAR_0, VAR_7, &VAR_5, 1);
  if (VAR_3)
   return (0);

  *VAR_2++ = VAR_6;
  *VAR_2++ = VAR_5;

  VAR_6 += VAR_1->select_value_stride;
 }

 return (VAR_4 * (2 * sizeof(uint32_t)));
}
