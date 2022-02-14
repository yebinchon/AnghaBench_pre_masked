
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_connection {int c_conn_w; int c_flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 scalar_t__ FUNC_1 (struct rds_connection*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct rds_connection *VAR_3)
{
 if (FUNC_1(VAR_3) == VAR_0 &&
     !FUNC_2(VAR_1, &VAR_3->c_flags))
  FUNC_0(VAR_2, &VAR_3->c_conn_w, 0);
}
