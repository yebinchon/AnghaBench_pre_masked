
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unix_sock {struct unix_address* addr; } ;
struct unix_address {int len; int name; } ;
struct socket {struct sock* sk; } ;
struct sockaddr_un {scalar_t__* sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockaddr_un*,int ,int) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 struct sock* FUNC_3 (struct sock*) ;
 struct unix_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static int FUNC_7(struct socket *VAR_2, struct sockaddr *VAR_3, int *VAR_4, int VAR_5)
{
 struct sock *VAR_6 = VAR_2->sk;
 struct unix_sock *VAR_7;
 struct sockaddr_un *VAR_8 = (struct sockaddr_un *)VAR_3;
 int VAR_9 = 0;

 if (VAR_5) {
  VAR_6 = FUNC_3(VAR_6);

  VAR_9 = -VAR_1;
  if (!VAR_6)
   goto out;
  VAR_9 = 0;
 } else {
  FUNC_1(VAR_6);
 }

 VAR_7 = FUNC_4(VAR_6);
 FUNC_5(VAR_6);
 if (!VAR_7->addr) {
  VAR_8->sun_family = VAR_0;
  VAR_8->sun_path[0] = 0;
  *VAR_4 = sizeof(short);
 } else {
  struct unix_address *VAR_10 = VAR_7->addr;

  *VAR_4 = VAR_10->len;
  FUNC_0(VAR_8, VAR_10->name, *VAR_4);
 }
 FUNC_6(VAR_6);
 FUNC_2(VAR_6);
out:
 return VAR_9;
}
