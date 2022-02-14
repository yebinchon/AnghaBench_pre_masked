
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int value ;
typedef int uint32_t ;
typedef int qla_host_t ;
struct TYPE_3__ {int read_addr; int op_count; scalar_t__ read_addr_stride; } ;
typedef TYPE_1__ ql_minidump_entry_rdocm_t ;


 int FUNC_0 (int *,int volatile) ;

__attribute__((used)) static uint32_t
FUNC_1(qla_host_t *VAR_0,
 ql_minidump_entry_rdocm_t *VAR_1,
 uint32_t *VAR_2)
{
 int VAR_3, VAR_4;
 volatile uint32_t VAR_5;
 volatile uint32_t VAR_6;

 VAR_5 = VAR_1->read_addr;
 VAR_4 = VAR_1->op_count;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_6 = FUNC_0(VAR_0, VAR_5);
  *VAR_2++ = VAR_6;
  VAR_5 += VAR_1->read_addr_stride;
 }
 return (VAR_4 * sizeof(VAR_6));
}
