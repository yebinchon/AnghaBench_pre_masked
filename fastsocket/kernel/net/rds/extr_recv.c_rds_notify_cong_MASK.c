
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct rds_sock {int rs_lock; int rs_cong_notify; } ;
struct msghdr {int dummy; } ;
typedef int notify ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct msghdr*,int ,int ,int,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct rds_sock *VAR_2, struct msghdr *VAR_3)
{
 uint64_t VAR_4 = VAR_2->rs_cong_notify;
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_1, VAR_0,
   sizeof(VAR_4), &VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_1(&VAR_2->rs_lock, VAR_5);
 VAR_2->rs_cong_notify &= ~VAR_4;
 FUNC_2(&VAR_2->rs_lock, VAR_5);

 return 0;
}
