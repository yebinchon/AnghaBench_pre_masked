
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int sk; } ;
struct rds_tcp_connection {struct socket* t_sock; } ;
struct rds_connection {struct rds_tcp_connection* c_transport_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rds_connection*,int ,int ) ;
 int FUNC_2 (char*,struct rds_connection*,struct rds_tcp_connection*,struct socket*) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct rds_connection *VAR_2)
{
 struct rds_tcp_connection *VAR_3 = VAR_2->c_transport_data;
 struct socket *VAR_4 = VAR_3->t_sock;
 int VAR_5 = 0;

 FUNC_2("recv worker conn %p tc %p sock %p\n", VAR_2, VAR_3, VAR_4);

 FUNC_0(VAR_4->sk);
 VAR_5 = FUNC_1(VAR_2, VAR_0, VAR_1);
 FUNC_3(VAR_4->sk);

 return VAR_5;
}
