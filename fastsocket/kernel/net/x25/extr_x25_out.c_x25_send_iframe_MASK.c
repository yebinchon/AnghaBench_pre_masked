
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x25_sock {int vs; int vr; TYPE_1__* neighbour; } ;
struct sock {int dummy; } ;
struct sk_buff {int* data; } ;
struct TYPE_2__ {scalar_t__ extended; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct x25_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sk_buff*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct x25_sock *VAR_4 = FUNC_0(VAR_2);

 if (!VAR_3)
  return;

 if (VAR_4->neighbour->extended) {
  VAR_3->data[2] = (VAR_4->vs << 1) & 0xFE;
  VAR_3->data[3] &= VAR_0;
  VAR_3->data[3] |= (VAR_4->vr << 1) & 0xFE;
 } else {
  VAR_3->data[2] &= VAR_1;
  VAR_3->data[2] |= (VAR_4->vs << 1) & 0x0E;
  VAR_3->data[2] |= (VAR_4->vr << 5) & 0xE0;
 }

 FUNC_1(VAR_3, VAR_4->neighbour);
}
