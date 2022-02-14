
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef void* uint32_t ;
struct TYPE_3__ {void* limit; scalar_t__ dscp; void* nh4; void* nat; void* fib; void* netgraph; void* skipto; void* divert; void* pipe; void* tag; } ;
typedef TYPE_1__ ipfw_table_value ;



__attribute__((used)) static void
FUNC_0(uint32_t VAR_0, ipfw_table_value *VAR_1)
{
 VAR_1->tag = VAR_0;
 VAR_1->pipe = VAR_0;
 VAR_1->divert = VAR_0;
 VAR_1->skipto = VAR_0;
 VAR_1->netgraph = VAR_0;
 VAR_1->fib = VAR_0;
 VAR_1->nat = VAR_0;
 VAR_1->nh4 = VAR_0;
 VAR_1->dscp = (uint8_t)VAR_0;
 VAR_1->limit = VAR_0;
}
