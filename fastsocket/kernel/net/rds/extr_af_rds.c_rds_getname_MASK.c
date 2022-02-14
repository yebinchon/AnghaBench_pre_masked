
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int sk; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {int sin_family; TYPE_1__ sin_addr; int sin_port; int sin_zero; } ;
struct sockaddr {int dummy; } ;
struct rds_sock {scalar_t__ rs_bound_addr; int rs_bound_port; scalar_t__ rs_conn_addr; int rs_conn_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct rds_sock* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_2, struct sockaddr *VAR_3,
         int *VAR_4, int VAR_5)
{
 struct sockaddr_in *VAR_6 = (struct sockaddr_in *)VAR_3;
 struct rds_sock *VAR_7 = FUNC_1(VAR_2->sk);

 FUNC_0(VAR_6->sin_zero, 0, sizeof(VAR_6->sin_zero));


 if (VAR_5) {
  if (!VAR_7->rs_conn_addr)
   return -VAR_1;

  VAR_6->sin_port = VAR_7->rs_conn_port;
  VAR_6->sin_addr.s_addr = VAR_7->rs_conn_addr;
 } else {
  VAR_6->sin_port = VAR_7->rs_bound_port;
  VAR_6->sin_addr.s_addr = VAR_7->rs_bound_addr;
 }

 VAR_6->sin_family = VAR_0;

 *VAR_4 = sizeof(*VAR_6);
 return 0;
}
