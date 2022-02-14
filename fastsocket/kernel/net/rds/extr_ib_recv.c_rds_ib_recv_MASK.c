
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_connection {int dummy; } ;
struct rds_connection {struct rds_ib_connection* c_transport_data; } ;


 scalar_t__ FUNC_0 (struct rds_connection*) ;
 int FUNC_1 (struct rds_ib_connection*) ;
 int FUNC_2 (char*,struct rds_connection*) ;

int FUNC_3(struct rds_connection *VAR_0)
{
 struct rds_ib_connection *VAR_1 = VAR_0->c_transport_data;
 int VAR_2 = 0;

 FUNC_2("conn %p\n", VAR_0);
 if (FUNC_0(VAR_0))
  FUNC_1(VAR_1);

 return VAR_2;
}
