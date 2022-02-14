
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int value ;
typedef int uint32_t ;
typedef int qla_host_t ;
struct TYPE_3__ {int read_addr; int read_data_size; } ;
typedef TYPE_1__ ql_minidump_entry_rdrom_t ;


 int FUNC_0 (int *,int,int*) ;

__attribute__((used)) static uint32_t
FUNC_1(qla_host_t *VAR_0,
 ql_minidump_entry_rdrom_t *VAR_1,
 uint32_t *VAR_2)
{
 int VAR_3;
 int VAR_4, VAR_5;
 uint32_t VAR_6;
 uint32_t VAR_7;

 VAR_6 = VAR_1->read_addr;
 VAR_5 = VAR_1->read_data_size;
 VAR_5 /= sizeof(VAR_7);

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {

  VAR_3 = FUNC_0(VAR_0, VAR_6, &VAR_7);
  if (VAR_3)
   return (0);

  *VAR_2++ = VAR_7;
  VAR_6 += sizeof(VAR_7);
 }

 return (VAR_5 * sizeof(VAR_7));
}
