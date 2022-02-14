
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_incoming {scalar_t__ i_rdma_cookie; } ;
struct msghdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct msghdr*,int ,int ,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct rds_incoming *VAR_2, struct msghdr *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_2->i_rdma_cookie) {
  VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_0,
    sizeof(VAR_2->i_rdma_cookie), &VAR_2->i_rdma_cookie);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
