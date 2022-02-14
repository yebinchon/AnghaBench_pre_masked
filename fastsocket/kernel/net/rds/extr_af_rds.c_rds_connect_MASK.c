
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {scalar_t__ sin_family; int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct rds_sock {scalar_t__ rs_conn_addr; int rs_conn_port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sock*) ;
 struct rds_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_5, struct sockaddr *VAR_6,
         int VAR_7, int VAR_8)
{
 struct sock *VAR_9 = VAR_5->sk;
 struct sockaddr_in *VAR_10 = (struct sockaddr_in *)VAR_6;
 struct rds_sock *VAR_11 = FUNC_2(VAR_9);
 int VAR_12 = 0;

 FUNC_1(VAR_9);

 if (VAR_7 != sizeof(struct sockaddr_in)) {
  VAR_12 = -VAR_3;
  goto out;
 }

 if (VAR_10->sin_family != VAR_0) {
  VAR_12 = -VAR_1;
  goto out;
 }

 if (VAR_10->sin_addr.s_addr == FUNC_0(VAR_4)) {
  VAR_12 = -VAR_2;
  goto out;
 }

 VAR_11->rs_conn_addr = VAR_10->sin_addr.s_addr;
 VAR_11->rs_conn_port = VAR_10->sin_port;

out:
 FUNC_3(VAR_9);
 return VAR_12;
}
