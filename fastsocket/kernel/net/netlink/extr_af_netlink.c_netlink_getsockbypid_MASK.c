
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {scalar_t__ sk_state; int sk_protocol; } ;
struct netlink_sock {scalar_t__ dst_pid; scalar_t__ pid; } ;


 int VAR_0 ;
 struct sock* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 struct sock* FUNC_1 (int ,int ,int ) ;
 struct netlink_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static struct sock *FUNC_5(struct sock *VAR_2, u32 VAR_3)
{
 struct sock *VAR_4;
 struct netlink_sock *VAR_5;

 VAR_4 = FUNC_1(FUNC_3(VAR_2), VAR_2->sk_protocol, VAR_3);
 if (!VAR_4)
  return FUNC_0(-VAR_0);


 VAR_5 = FUNC_2(VAR_4);
 if (VAR_4->sk_state == VAR_1 &&
     VAR_5->dst_pid != FUNC_2(VAR_2)->pid) {
  FUNC_4(VAR_4);
  return FUNC_0(-VAR_0);
 }
 return VAR_4;
}
