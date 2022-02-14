
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_iucv {int siucv_nodeid; int siucv_addr; int siucv_port; int siucv_name; int siucv_user_id; } ;
struct sockaddr {int sa_family; } ;
struct sock {int dummy; } ;
struct iucv_sock {int src_name; int src_user_id; int dst_name; int dst_user_id; } ;


 int VAR_0 ;
 struct iucv_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_1, struct sockaddr *VAR_2,
        int *VAR_3, int VAR_4)
{
 struct sockaddr_iucv *VAR_5 = (struct sockaddr_iucv *) VAR_2;
 struct sock *VAR_6 = VAR_1->sk;
 struct iucv_sock *VAR_7 = FUNC_0(VAR_6);

 VAR_2->sa_family = VAR_0;
 *VAR_3 = sizeof(struct sockaddr_iucv);

 if (VAR_4) {
  FUNC_1(VAR_5->siucv_user_id, VAR_7->dst_user_id, 8);
  FUNC_1(VAR_5->siucv_name, VAR_7->dst_name, 8);
 } else {
  FUNC_1(VAR_5->siucv_user_id, VAR_7->src_user_id, 8);
  FUNC_1(VAR_5->siucv_name, VAR_7->src_name, 8);
 }
 FUNC_2(&VAR_5->siucv_port, 0, sizeof(VAR_5->siucv_port));
 FUNC_2(&VAR_5->siucv_addr, 0, sizeof(VAR_5->siucv_addr));
 FUNC_2(&VAR_5->siucv_nodeid, 0, sizeof(VAR_5->siucv_nodeid));

 return 0;
}
