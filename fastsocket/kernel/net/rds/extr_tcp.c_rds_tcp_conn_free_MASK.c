
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_tcp_connection {int t_tcp_node; } ;


 int FUNC_0 (int ,struct rds_tcp_connection*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,struct rds_tcp_connection*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(void *VAR_2)
{
 struct rds_tcp_connection *VAR_3 = VAR_2;
 unsigned long VAR_4;
 FUNC_2("freeing tc %p\n", VAR_3);

 FUNC_3(&VAR_0, VAR_4);
 FUNC_1(&VAR_3->t_tcp_node);
 FUNC_4(&VAR_0, VAR_4);

 FUNC_0(VAR_1, VAR_3);
}
