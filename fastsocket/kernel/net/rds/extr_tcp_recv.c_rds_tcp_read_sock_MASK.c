
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int sk; } ;
struct rds_tcp_desc_arg {int km; int gfp; struct rds_connection* conn; } ;
struct rds_tcp_connection {struct socket* t_sock; } ;
struct rds_connection {struct rds_tcp_connection* c_transport_data; } ;
struct TYPE_4__ {struct rds_tcp_desc_arg* data; } ;
struct TYPE_5__ {int error; int count; TYPE_1__ arg; } ;
typedef TYPE_2__ read_descriptor_t ;
typedef int gfp_t ;
typedef enum km_type { ____Placeholder_km_type } km_type ;


 int VAR_0 ;
 int FUNC_0 (char*,struct rds_tcp_connection*,int ,int) ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_2(struct rds_connection *VAR_1, gfp_t VAR_2,
        enum km_type VAR_3)
{
 struct rds_tcp_connection *VAR_4 = VAR_1->c_transport_data;
 struct socket *VAR_5 = VAR_4->t_sock;
 read_descriptor_t VAR_6;
 struct rds_tcp_desc_arg VAR_7;


 VAR_7.conn = VAR_1;
 VAR_7.gfp = VAR_2;
 VAR_7.km = VAR_3;
 VAR_6.arg.data = &VAR_7;
 VAR_6.error = 0;
 VAR_6.count = 1;

 FUNC_1(VAR_5->sk, &VAR_6, VAR_0);
 FUNC_0("tcp_read_sock for tc %p gfp 0x%x returned %d\n", VAR_4, VAR_2,
   VAR_6.error);

 return VAR_6.error;
}
