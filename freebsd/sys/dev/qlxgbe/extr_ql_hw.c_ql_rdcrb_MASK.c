
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int qla_host_t ;
struct TYPE_3__ {int addr; int op_count; int addr_stride; } ;
typedef TYPE_1__ ql_minidump_entry_rdcrb_t ;


 int FUNC_0 (int *,int,int*,int) ;

__attribute__((used)) static uint32_t
FUNC_1(qla_host_t *VAR_0, ql_minidump_entry_rdcrb_t * VAR_1,
 uint32_t * VAR_2)
{
 int VAR_3;
 int VAR_4;
 uint32_t VAR_5, VAR_6, VAR_7, VAR_8 = 0;

 VAR_6 = VAR_1->addr;
 VAR_5 = VAR_1->op_count;
 VAR_7 = VAR_1->addr_stride;

 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {

  VAR_4 = FUNC_0(VAR_0, VAR_6, &VAR_8, 1);

  if (VAR_4)
   return (0);

  *VAR_2++ = VAR_6;
  *VAR_2++ = VAR_8;
  VAR_6 = VAR_6 + VAR_7;
 }




 return (VAR_5 * (2 * sizeof(uint32_t)));
}
