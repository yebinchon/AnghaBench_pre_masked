
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_sock {scalar_t__ rs_bound_addr; int rs_bound_node; int rs_bound_port; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct rds_sock*) ;
 int FUNC_3 (char*,struct rds_sock*,scalar_t__*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct rds_sock *VAR_1)
{
 unsigned long VAR_2;

 FUNC_4(&VAR_0, VAR_2);

 if (VAR_1->rs_bound_addr) {
  FUNC_3("rs %p unbinding from %pI4:%d\n",
    VAR_1, &VAR_1->rs_bound_addr,
    FUNC_1(VAR_1->rs_bound_port));

  FUNC_0(&VAR_1->rs_bound_node);
  FUNC_2(VAR_1);
  VAR_1->rs_bound_addr = 0;
 }

 FUNC_5(&VAR_0, VAR_2);
}
