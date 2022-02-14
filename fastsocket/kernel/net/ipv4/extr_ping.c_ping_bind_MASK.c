
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_userlocks; scalar_t__ sk_bound_dev_if; } ;
struct inet_sock {scalar_t__ freebind; scalar_t__ transparent; scalar_t__ num; scalar_t__ rcv_saddr; scalar_t__ saddr; scalar_t__ dport; scalar_t__ daddr; int sport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct inet_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 unsigned short FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct sock*,unsigned short) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_10, struct sockaddr *VAR_11, int VAR_12)
{
 struct sockaddr_in *VAR_13 = (struct sockaddr_in *)VAR_11;
 struct inet_sock *VAR_14 = FUNC_3(VAR_10);
 unsigned short VAR_15;
 int VAR_16;
 int VAR_17;

 if (VAR_12 < sizeof(struct sockaddr_in))
  return -VAR_2;

 FUNC_7("ping_v4_bind(sk=%p,sa_addr=%08x,sa_port=%d)\n",
  VAR_10, VAR_13->sin_addr.s_addr, FUNC_5(VAR_13->sin_port));

 VAR_16 = FUNC_2(FUNC_10(VAR_10), VAR_13->sin_addr.s_addr);
 if (VAR_13->sin_addr.s_addr == FUNC_0(VAR_3))
  VAR_16 = VAR_5;

 if ((VAR_9 == 0 &&
     VAR_14->freebind == 0 && VAR_14->transparent == 0 &&
      VAR_16 != VAR_5) ||
     VAR_16 == VAR_6 ||
     VAR_16 == VAR_4)
  return -VAR_1;

 FUNC_4(VAR_10);

 VAR_17 = -VAR_2;
 if (VAR_14->num != 0)
  goto out;

 VAR_17 = -VAR_0;
 VAR_14->rcv_saddr = VAR_14->saddr = VAR_13->sin_addr.s_addr;
 VAR_15 = FUNC_5(VAR_13->sin_port);
 if (FUNC_6(VAR_10, VAR_15) != 0) {
  VAR_14->saddr = VAR_14->rcv_saddr = 0;
  goto out;
 }

 FUNC_7("after bind(): num = %d, daddr = %pI4, dif = %d\n",
  (int)VAR_14->num,
  &VAR_14->rcv_saddr,
  (int)VAR_10->sk_bound_dev_if);

 VAR_17 = 0;
 if (VAR_14->rcv_saddr)
  VAR_10->sk_userlocks |= VAR_7;
 if (VAR_15)
  VAR_10->sk_userlocks |= VAR_8;
 VAR_14->sport = FUNC_1(VAR_14->num);
 VAR_14->daddr = 0;
 VAR_14->dport = 0;
 FUNC_9(VAR_10);
out:
 FUNC_8(VAR_10);
 FUNC_7("ping_v4_bind -> %d\n", VAR_17);
 return VAR_17;
}
