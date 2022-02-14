
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int qla_host_t ;
struct TYPE_3__ {int read_addr_cnt; int read_addr_stride; int select_addr; int op_count; int read_addr; int queue_id_stride; } ;
typedef TYPE_1__ ql_minidump_entry_queue_t ;


 int FUNC_0 (int *,int,int*,int) ;

__attribute__((used)) static uint32_t
FUNC_1(qla_host_t *VAR_0,
 ql_minidump_entry_queue_t *VAR_1,
 uint32_t *VAR_2)
{
 int VAR_3;
 int VAR_4, VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7, VAR_8, VAR_9;
 uint32_t VAR_10, VAR_11;

 VAR_11 = VAR_1->read_addr_cnt;
 VAR_8 = VAR_1->read_addr_stride;
 VAR_9 = VAR_1->select_addr;

 for (VAR_4 = 0, VAR_10 = 0; VAR_4 < VAR_1->op_count;
  VAR_4++) {

  VAR_3 = FUNC_0(VAR_0, VAR_9, &VAR_10, 0);
  if (VAR_3)
   return (0);

  VAR_7 = VAR_1->read_addr;

  for (VAR_5 = 0; VAR_5 < VAR_11; VAR_5++) {

   VAR_3 = FUNC_0(VAR_0, VAR_7, &VAR_6, 1);
   if (VAR_3)
    return (0);

   *VAR_2++ = VAR_6;
   VAR_7 += VAR_8;
  }

  VAR_10 += VAR_1->queue_id_stride;
 }

 return (VAR_4 * (VAR_11 * sizeof(uint32_t)));
}
