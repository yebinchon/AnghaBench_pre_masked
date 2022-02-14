
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct l2cap_chan_list {int lock; } ;
struct l2cap_conn {struct l2cap_chan_list chan_list; } ;


 int FUNC_0 (struct l2cap_conn*,struct sock*,struct sock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct l2cap_conn *VAR_0, struct sock *VAR_1, struct sock *VAR_2)
{
 struct l2cap_chan_list *VAR_3 = &VAR_0->chan_list;
 FUNC_1(&VAR_3->lock);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_3->lock);
}
