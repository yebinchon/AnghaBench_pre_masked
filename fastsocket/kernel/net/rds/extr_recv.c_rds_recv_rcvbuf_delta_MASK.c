
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct rds_sock {int rs_rcv_bytes; int rs_congested; int rs_bound_port; int rs_bound_addr; } ;
struct rds_cong_map {int dummy; } ;
typedef int __be16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rds_cong_map*,int ) ;
 int FUNC_2 (struct rds_cong_map*) ;
 int FUNC_3 (struct rds_cong_map*,int ) ;
 int FUNC_4 (struct rds_sock*) ;
 int FUNC_5 (char*,struct rds_sock*,int *,int ,int,int,int,int) ;

__attribute__((used)) static void FUNC_6(struct rds_sock *VAR_0, struct sock *VAR_1,
      struct rds_cong_map *VAR_2,
      int VAR_3, __be16 VAR_4)
{
 int VAR_5;

 if (VAR_3 == 0)
  return;

 VAR_0->rs_rcv_bytes += VAR_3;
 VAR_5 = VAR_0->rs_rcv_bytes > FUNC_4(VAR_0);

 FUNC_5("rs %p (%pI4:%u) recv bytes %d buf %d "
   "now_cong %d delta %d\n",
   VAR_0, &VAR_0->rs_bound_addr,
   FUNC_0(VAR_0->rs_bound_port), VAR_0->rs_rcv_bytes,
   FUNC_4(VAR_0), VAR_5, VAR_3);


 if (!VAR_0->rs_congested && VAR_5) {
  VAR_0->rs_congested = 1;
  FUNC_3(VAR_2, VAR_4);
  FUNC_2(VAR_2);
 }



 else if (VAR_0->rs_congested && (VAR_0->rs_rcv_bytes < (FUNC_4(VAR_0)/2))) {
  VAR_0->rs_congested = 0;
  FUNC_1(VAR_2, VAR_4);
  FUNC_2(VAR_2);
 }


}
