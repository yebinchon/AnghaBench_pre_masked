
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rds_connection {TYPE_1__* c_lcong; int c_map_item; } ;
struct TYPE_2__ {int m_conn_list; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,struct rds_connection*,TYPE_1__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct rds_connection *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1("conn %p now on map %p\n", VAR_1, VAR_1->c_lcong);
 FUNC_2(&VAR_0, VAR_2);
 FUNC_0(&VAR_1->c_map_item, &VAR_1->c_lcong->m_conn_list);
 FUNC_3(&VAR_0, VAR_2);
}
