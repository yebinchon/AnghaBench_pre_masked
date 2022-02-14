
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_connection {int c_map_item; int c_lcong; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,struct rds_connection*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct rds_connection *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1("removing conn %p from map %p\n", VAR_1, VAR_1->c_lcong);
 FUNC_2(&VAR_0, VAR_2);
 FUNC_0(&VAR_1->c_map_item);
 FUNC_3(&VAR_0, VAR_2);
}
