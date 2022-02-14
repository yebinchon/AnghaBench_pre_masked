
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sock {int dummy; } ;
struct l2cap_chan_list {struct sock* head; } ;
struct TYPE_2__ {scalar_t__ dcid; struct sock* next_c; } ;


 TYPE_1__* FUNC_0 (struct sock*) ;

__attribute__((used)) static struct sock *FUNC_1(struct l2cap_chan_list *VAR_0, u16 VAR_1)
{
 struct sock *VAR_2;
 for (VAR_2 = VAR_0->head; VAR_2; VAR_2 = FUNC_0(VAR_2)->next_c) {
  if (FUNC_0(VAR_2)->dcid == VAR_1)
   break;
 }
 return VAR_2;
}
