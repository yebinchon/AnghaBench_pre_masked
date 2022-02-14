
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int qla_host_t ;
struct TYPE_3__ {int op_count; int read_addr; int control_addr; int tag_reg_addr; int init_tag_value; int read_addr_cnt; scalar_t__ tag_value_stride; scalar_t__ read_addr_stride; int write_value; } ;
typedef TYPE_1__ ql_minidump_entry_cache_t ;


 int FUNC_0 (int *,int,int*,int) ;

__attribute__((used)) static uint32_t
FUNC_1(qla_host_t *VAR_0,
 ql_minidump_entry_cache_t *VAR_1,
 uint32_t *VAR_2)
{
 int VAR_3;
 int VAR_4, VAR_5;
 int VAR_6;

 uint32_t VAR_7;
 uint32_t VAR_8, VAR_9, VAR_10, VAR_11;
 uint32_t VAR_12, VAR_13;
 uint32_t VAR_14;

 VAR_6 = VAR_1->op_count;

 VAR_9 = VAR_1->read_addr;
 VAR_10 = VAR_1->control_addr;
 VAR_14 = (uint32_t) VAR_1->write_value;

 VAR_11 = VAR_1->tag_reg_addr;

 VAR_12 = VAR_1->init_tag_value;
 VAR_13 = VAR_1->read_addr_cnt;

 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {

  VAR_3 = FUNC_0(VAR_0, VAR_11, &VAR_12, 0);
  if (VAR_3)
   return (0);

  VAR_3 = FUNC_0(VAR_0, VAR_10, &VAR_14, 0);
  if (VAR_3)
   return (0);

  VAR_8 = VAR_9;
  for (VAR_5 = 0; VAR_5 < VAR_13; VAR_5++) {

   VAR_3 = FUNC_0(VAR_0, VAR_8, &VAR_7, 1);
   if (VAR_3)
    return (0);

   *VAR_2++ = VAR_7;
   VAR_8 += VAR_1->read_addr_stride;
  }

  VAR_12 += VAR_1->tag_value_stride;
 }

 return (VAR_13 * VAR_6 * sizeof(uint32_t));
}
