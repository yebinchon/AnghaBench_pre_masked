
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int els_req_cnt; } ;
typedef TYPE_1__ ocs_node_t ;
struct TYPE_7__ {int wire_len; TYPE_1__* node; } ;
typedef TYPE_2__ ocs_io_t ;
typedef int ocs_hw_srrs_cb_t ;
typedef int int32_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static int32_t
FUNC_2(ocs_io_t *VAR_0, uint32_t VAR_1, uint32_t VAR_2, ocs_hw_srrs_cb_t VAR_3)
{
 ocs_node_t *VAR_4 = VAR_0->node;


 VAR_4->els_req_cnt++;


 FUNC_0(VAR_0);

 VAR_0->wire_len = VAR_1;
 return FUNC_1(VAR_0, VAR_3);
}
