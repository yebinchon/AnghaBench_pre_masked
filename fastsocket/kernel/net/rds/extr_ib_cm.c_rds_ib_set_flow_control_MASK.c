
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rds_ib_connection {int i_flowctl; } ;
struct rds_connection {struct rds_ib_connection* c_transport_data; } ;


 int FUNC_0 (struct rds_connection*,scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct rds_connection *VAR_1, u32 VAR_2)
{
 struct rds_ib_connection *VAR_3 = VAR_1->c_transport_data;

 if (VAR_0 && VAR_2 != 0) {

  VAR_3->i_flowctl = 1;
  FUNC_0(VAR_1, VAR_2);
 } else {
  VAR_3->i_flowctl = 0;
 }
}
