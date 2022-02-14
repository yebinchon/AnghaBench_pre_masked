
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_iw_connection {int i_recv_mutex; } ;
struct rds_connection {struct rds_iw_connection* c_transport_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct rds_connection*) ;
 int FUNC_3 (struct rds_iw_connection*) ;
 scalar_t__ FUNC_4 (struct rds_connection*,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,struct rds_connection*) ;
 int VAR_3 ;

int FUNC_7(struct rds_connection *VAR_4)
{
 struct rds_iw_connection *VAR_5 = VAR_4->c_transport_data;
 int VAR_6 = 0;

 FUNC_6("conn %p\n", VAR_4);





 FUNC_0(&VAR_5->i_recv_mutex);
 if (FUNC_4(VAR_4, VAR_2, VAR_1, 0))
  VAR_6 = -VAR_0;
 else
  FUNC_5(VAR_3);
 FUNC_1(&VAR_5->i_recv_mutex);

 if (FUNC_2(VAR_4))
  FUNC_3(VAR_5);

 return VAR_6;
}
