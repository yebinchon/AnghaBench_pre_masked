
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int sk; TYPE_1__* ops; } ;
struct rds_tcp_connection {int t_tinc_hdr_rem; scalar_t__ t_tinc_data_rem; TYPE_2__* t_tinc; struct socket* t_sock; } ;
struct rds_header {int dummy; } ;
struct rds_connection {struct rds_tcp_connection* c_transport_data; } ;
struct TYPE_4__ {int ti_inc; } ;
struct TYPE_3__ {int (* shutdown ) (struct socket*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct socket*,struct rds_tcp_connection*) ;
 int FUNC_3 (char*,struct rds_connection*,struct rds_tcp_connection*,struct socket*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket*,int) ;

void FUNC_7(struct rds_connection *VAR_2)
{
 struct rds_tcp_connection *VAR_3 = VAR_2->c_transport_data;
 struct socket *VAR_4 = VAR_3->t_sock;

 FUNC_3("shutting down conn %p tc %p sock %p\n", VAR_2, VAR_3, VAR_4);

 if (VAR_4) {
  VAR_4->ops->shutdown(VAR_4, VAR_0 | VAR_1);
  FUNC_0(VAR_4->sk);
  FUNC_2(VAR_4, VAR_3);

  FUNC_4(VAR_4->sk);
  FUNC_5(VAR_4);
 };

 if (VAR_3->t_tinc) {
  FUNC_1(&VAR_3->t_tinc->ti_inc);
  VAR_3->t_tinc = ((void*)0);
 }
 VAR_3->t_tinc_hdr_rem = sizeof(struct rds_header);
 VAR_3->t_tinc_data_rem = 0;
}
