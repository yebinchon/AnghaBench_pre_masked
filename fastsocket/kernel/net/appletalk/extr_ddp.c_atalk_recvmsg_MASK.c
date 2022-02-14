
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct TYPE_2__ {int s_net; int s_node; } ;
struct sockaddr_at {TYPE_1__ sat_addr; int sat_port; int sat_family; } ;
struct sock {scalar_t__ sk_type; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int msg_namelen; struct sockaddr_at* msg_name; int msg_iov; int msg_flags; } ;
struct kiocb {int dummy; } ;
struct ddpehdr {int deh_snet; int deh_snode; int deh_sport; int deh_len_hops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ddpehdr* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,int,int ,int) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct sock*,int,int,int*) ;

__attribute__((used)) static int FUNC_5(struct kiocb *VAR_4, struct socket *VAR_5, struct msghdr *VAR_6,
    size_t VAR_7, int VAR_8)
{
 struct sock *VAR_9 = VAR_5->sk;
 struct ddpehdr *VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = 0;
 struct sk_buff *VAR_14 = FUNC_4(VAR_9, VAR_8 & ~VAR_1,
      VAR_8 & VAR_1, &VAR_13);

 VAR_6->msg_namelen = 0;
 if (!VAR_14)
  return VAR_13;


 VAR_10 = FUNC_0(VAR_14);
 VAR_11 = FUNC_1(VAR_10->deh_len_hops) & 1023;

 if (VAR_9->sk_type != VAR_3) {
  VAR_12 = sizeof(*VAR_10);
  VAR_11 -= VAR_12;
 }

 if (VAR_11 > VAR_7) {
  VAR_11 = VAR_7;
  VAR_6->msg_flags |= VAR_2;
 }
 VAR_13 = FUNC_2(VAR_14, VAR_12, VAR_6->msg_iov, VAR_11);

 if (!VAR_13 && VAR_6->msg_name) {
  struct sockaddr_at *VAR_15 = VAR_6->msg_name;
  VAR_15->sat_family = VAR_0;
  VAR_15->sat_port = VAR_10->deh_sport;
  VAR_15->sat_addr.s_node = VAR_10->deh_snode;
  VAR_15->sat_addr.s_net = VAR_10->deh_snet;
  VAR_6->msg_namelen = sizeof(*VAR_15);
 }

 FUNC_3(VAR_9, VAR_14);
 return VAR_13 ? : VAR_11;
}
