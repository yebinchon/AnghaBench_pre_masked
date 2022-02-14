
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_tcp_connection {int t_tinc_hdr_rem; int t_tcp_node; scalar_t__ t_tinc_data_rem; int * t_tinc; int * t_sock; } ;
struct rds_header {int dummy; } ;
struct rds_connection {struct rds_tcp_connection* c_transport_data; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct rds_tcp_connection* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,struct rds_tcp_connection*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct rds_connection *VAR_4, gfp_t VAR_5)
{
 struct rds_tcp_connection *VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_5);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->t_sock = ((void*)0);
 VAR_6->t_tinc = ((void*)0);
 VAR_6->t_tinc_hdr_rem = sizeof(struct rds_header);
 VAR_6->t_tinc_data_rem = 0;

 VAR_4->c_transport_data = VAR_6;

 FUNC_3(&VAR_2);
 FUNC_1(&VAR_6->t_tcp_node, &VAR_1);
 FUNC_4(&VAR_2);

 FUNC_2("alloced tc %p\n", VAR_4->c_transport_data);
 return 0;
}
