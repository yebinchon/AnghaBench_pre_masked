
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct l2cap_chan_list {int lock; } ;


 struct sock* FUNC_0 (struct l2cap_chan_list*,int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline struct sock *FUNC_4(struct l2cap_chan_list *VAR_0, u16 VAR_1)
{
 struct sock *VAR_2;
 FUNC_2(&VAR_0->lock);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_1(VAR_2);
 FUNC_3(&VAR_0->lock);
 return VAR_2;
}
