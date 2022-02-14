
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct xfrm_state {TYPE_1__ km; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sadb_msg {scalar_t__ sadb_msg_type; int sadb_msg_pid; int sadb_msg_seq; } ;
struct net {int dummy; } ;
struct km_event {int pid; int seq; int event; } ;


 scalar_t__ FUNC_0 (struct xfrm_state*) ;
 int FUNC_1 (struct xfrm_state*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct xfrm_state*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (struct xfrm_state*,struct km_event*) ;
 struct xfrm_state* FUNC_6 (struct net*,struct sadb_msg*,void**) ;
 struct net* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct xfrm_state*,int,int ,int ,int ) ;
 int FUNC_9 (struct xfrm_state*) ;
 int FUNC_10 (struct xfrm_state*) ;
 int FUNC_11 (struct xfrm_state*) ;
 int FUNC_12 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_13(struct sock *VAR_5, struct sk_buff *VAR_6, struct sadb_msg *VAR_7, void **VAR_8)
{
 struct net *VAR_9 = FUNC_7(VAR_5);
 struct xfrm_state *VAR_10;
 int VAR_11;
 struct km_event VAR_12;

 VAR_10 = FUNC_6(VAR_9, VAR_7, VAR_8);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 FUNC_10(VAR_10);
 if (VAR_7->sadb_msg_type == VAR_0)
  VAR_11 = FUNC_9(VAR_10);
 else
  VAR_11 = FUNC_12(VAR_10);

 FUNC_8(VAR_10, VAR_11 ? 0 : 1,
        FUNC_3(VAR_4),
        FUNC_4(VAR_4), 0);

 if (VAR_11 < 0) {
  VAR_10->km.state = VAR_3;
  FUNC_2(VAR_10);
  goto out;
 }

 if (VAR_7->sadb_msg_type == VAR_0)
  VAR_12.event = VAR_1;
 else
  VAR_12.event = VAR_2;
 VAR_12.seq = VAR_7->sadb_msg_seq;
 VAR_12.pid = VAR_7->sadb_msg_pid;
 FUNC_5(VAR_10, &VAR_12);
out:
 FUNC_11(VAR_10);
 return VAR_11;
}
