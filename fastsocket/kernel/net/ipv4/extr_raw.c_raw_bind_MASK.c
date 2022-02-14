
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;
struct inet_sock {scalar_t__ saddr; scalar_t__ rcv_saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,scalar_t__) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_6, struct sockaddr *VAR_7, int VAR_8)
{
 struct inet_sock *VAR_9 = FUNC_1(VAR_6);
 struct sockaddr_in *VAR_10 = (struct sockaddr_in *) VAR_7;
 int VAR_11 = -VAR_1;
 int VAR_12;

 if (VAR_6->sk_state != VAR_5 || VAR_8 < sizeof(struct sockaddr_in))
  goto out;
 VAR_12 = FUNC_0(FUNC_3(VAR_6), VAR_10->sin_addr.s_addr);
 VAR_11 = -VAR_0;
 if (VAR_10->sin_addr.s_addr && VAR_12 != VAR_3 &&
     VAR_12 != VAR_4 && VAR_12 != VAR_2)
  goto out;
 VAR_9->rcv_saddr = VAR_9->saddr = VAR_10->sin_addr.s_addr;
 if (VAR_12 == VAR_4 || VAR_12 == VAR_2)
  VAR_9->saddr = 0;
 FUNC_2(VAR_6);
 VAR_11 = 0;
out: return VAR_11;
}
