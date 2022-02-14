
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sadb_msg {int sadb_msg_pid; int sadb_msg_seq; } ;
struct net {int dummy; } ;
struct km_event {int event; int pid; int seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (struct xfrm_state*,struct km_event*) ;
 struct xfrm_state* FUNC_3 (struct net*,struct sadb_msg*,void**) ;
 int FUNC_4 (void*,void*) ;
 int FUNC_5 (struct xfrm_state*) ;
 struct net* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct xfrm_state*,int,int ,int ,int ) ;
 int FUNC_8 (struct xfrm_state*) ;
 scalar_t__ FUNC_9 (struct xfrm_state*) ;
 int FUNC_10 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_8, struct sk_buff *VAR_9, struct sadb_msg *VAR_10, void **VAR_11)
{
 struct net *VAR_12 = FUNC_6(VAR_8);
 struct xfrm_state *VAR_13;
 struct km_event VAR_14;
 int VAR_15;

 if (!VAR_11[VAR_5-1] ||
     !FUNC_4(VAR_11[VAR_4-1],
         VAR_11[VAR_3-1]))
  return -VAR_0;

 VAR_13 = FUNC_3(VAR_12, VAR_10, VAR_11);
 if (VAR_13 == ((void*)0))
  return -VAR_2;

 if ((VAR_15 = FUNC_5(VAR_13)))
  goto out;

 if (FUNC_9(VAR_13)) {
  VAR_15 = -VAR_1;
  goto out;
 }

 VAR_15 = FUNC_8(VAR_13);

 if (VAR_15 < 0)
  goto out;

 VAR_14.seq = VAR_10->sadb_msg_seq;
 VAR_14.pid = VAR_10->sadb_msg_pid;
 VAR_14.event = VAR_6;
 FUNC_2(VAR_13, &VAR_14);
out:
 FUNC_7(VAR_13, VAR_15 ? 0 : 1,
    FUNC_0(VAR_7),
    FUNC_1(VAR_7), 0);
 FUNC_10(VAR_13);

 return VAR_15;
}
