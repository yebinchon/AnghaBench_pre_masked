
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rds_sock {int dummy; } ;
struct TYPE_2__ {int op_rdma_mr; } ;
struct rds_message {scalar_t__ m_rdma_cookie; TYPE_1__ rdma; } ;
struct rds_get_mr_args {int dummy; } ;
struct cmsghdr {scalar_t__ cmsg_len; } ;


 int FUNC_0 (struct cmsghdr*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct rds_sock*,int ,scalar_t__*,int *) ;

int FUNC_3(struct rds_sock *VAR_1, struct rds_message *VAR_2,
     struct cmsghdr *VAR_3)
{
 if (VAR_3->cmsg_len < FUNC_1(sizeof(struct rds_get_mr_args))
  || VAR_2->m_rdma_cookie != 0)
  return -VAR_0;

 return FUNC_2(VAR_1, FUNC_0(VAR_3), &VAR_2->m_rdma_cookie, &VAR_2->rdma.op_rdma_mr);
}
