
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_connection {int dummy; } ;
struct rds_connection {struct rds_ib_connection* c_transport_data; } ;


 int FUNC_0 (struct rds_ib_connection*) ;

void FUNC_1(struct rds_connection *VAR_0)
{
 struct rds_ib_connection *VAR_1 = VAR_0->c_transport_data;



 FUNC_0(VAR_1);
}
