
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_loop_connection {int loop_node; struct rds_connection* conn; } ;
struct rds_connection {struct rds_loop_connection* c_transport_data; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct rds_loop_connection* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct rds_connection *VAR_3, gfp_t VAR_4)
{
 struct rds_loop_connection *VAR_5;
 unsigned long VAR_6;

 VAR_5 = FUNC_1(sizeof(struct rds_loop_connection), VAR_4);
 if (!VAR_5)
  return -VAR_0;

 FUNC_0(&VAR_5->loop_node);
 VAR_5->conn = VAR_3;
 VAR_3->c_transport_data = VAR_5;

 FUNC_3(&VAR_2, VAR_6);
 FUNC_2(&VAR_5->loop_node, &VAR_1);
 FUNC_4(&VAR_2, VAR_6);

 return 0;
}
