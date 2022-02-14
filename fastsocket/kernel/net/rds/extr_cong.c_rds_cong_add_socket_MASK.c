
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_sock {int rs_cong_list; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct rds_sock *VAR_2)
{
 unsigned long VAR_3;

 FUNC_2(&VAR_1, VAR_3);
 if (FUNC_1(&VAR_2->rs_cong_list))
  FUNC_0(&VAR_2->rs_cong_list, &VAR_0);
 FUNC_3(&VAR_1, VAR_3);
}
