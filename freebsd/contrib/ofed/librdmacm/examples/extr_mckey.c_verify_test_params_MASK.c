
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_port_attr {int active_mtu; } ;
struct cmatest_node {TYPE_1__* cma_id; } ;
struct TYPE_2__ {int port_num; int verbs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct ibv_port_attr*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static int FUNC_2(struct cmatest_node *VAR_3)
{
 struct ibv_port_attr VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->cma_id->verbs, VAR_3->cma_id->port_num,
        &VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_1 && VAR_2 > (1 << (VAR_4.active_mtu + 7))) {
  FUNC_1("mckey: message_size %d is larger than active mtu %d\n",
         VAR_2, 1 << (VAR_4.active_mtu + 7));
  return -VAR_0;
 }

 return 0;
}
