
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipc_namespace {int * mq_mnt; int mq_msgsize_default; int mq_msg_default; int mq_msgsize_max; int mq_msg_max; int mq_queues_max; scalar_t__ mq_queues_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,struct ipc_namespace*) ;
 int VAR_5 ;

int FUNC_3(struct ipc_namespace *VAR_6)
{
 VAR_6->mq_queues_count = 0;
 VAR_6->mq_queues_max = VAR_4;
 VAR_6->mq_msg_max = VAR_1;
 VAR_6->mq_msgsize_max = VAR_3;
 VAR_6->mq_msg_default = VAR_0;
 VAR_6->mq_msgsize_default = VAR_2;

 VAR_6->mq_mnt = FUNC_2(&VAR_5, VAR_6);
 if (FUNC_0(VAR_6->mq_mnt)) {
  int VAR_7 = FUNC_1(VAR_6->mq_mnt);
  VAR_6->mq_mnt = ((void*)0);
  return VAR_7;
 }
 return 0;
}
