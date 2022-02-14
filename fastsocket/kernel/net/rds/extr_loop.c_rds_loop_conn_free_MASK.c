
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_loop_connection {int loop_node; } ;


 int FUNC_0 (struct rds_loop_connection*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (char*,struct rds_loop_connection*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(void *VAR_1)
{
 struct rds_loop_connection *VAR_2 = VAR_1;
 unsigned long VAR_3;

 FUNC_2("lc %p\n", VAR_2);
 FUNC_3(&VAR_0, VAR_3);
 FUNC_1(&VAR_2->loop_node);
 FUNC_4(&VAR_0, VAR_3);
 FUNC_0(VAR_2);
}
