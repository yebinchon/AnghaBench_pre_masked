
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_cq {int dummy; } ;
struct TYPE_2__ {struct ibv_cq* recv_cq; int channel; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (int ,struct ibv_cq**,void**) ;
 scalar_t__ FUNC_2 (struct ibv_cq*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(void)
{
 struct ibv_cq *VAR_2;
 void *VAR_3;

 if (FUNC_1(VAR_0.channel, &VAR_2, &VAR_3)) {
  FUNC_0(VAR_1, "Failed to get cq_event\n");
  return 1;
 }

 if (VAR_2 != VAR_0.recv_cq) {
  FUNC_0(VAR_1, "CQ event for unknown CQ %p\n", VAR_2);
  return 1;
 }

 if (FUNC_2(VAR_0.recv_cq, 0)) {
  FUNC_0(VAR_1, "Couldn't request CQ notification\n");
  return 1;
 }

 return 0;
}
