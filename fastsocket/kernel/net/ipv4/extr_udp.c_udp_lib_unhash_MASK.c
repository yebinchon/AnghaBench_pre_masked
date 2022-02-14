
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udp_table {struct udp_hslot* hash; } ;
struct udp_hslot {int lock; } ;
struct sock {TYPE_2__* sk_prot; int sk_hash; } ;
struct TYPE_6__ {scalar_t__ num; } ;
struct TYPE_4__ {struct udp_table* udp_table; } ;
struct TYPE_5__ {TYPE_1__ h; } ;


 TYPE_3__* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,TYPE_2__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 unsigned int FUNC_7 (int ,int ) ;

void FUNC_8(struct sock *VAR_0)
{
 if (FUNC_1(VAR_0)) {
  struct udp_table *VAR_1 = VAR_0->sk_prot->h.udp_table;
  unsigned int VAR_2 = FUNC_7(FUNC_3(VAR_0), VAR_0->sk_hash);
  struct udp_hslot *VAR_3 = &VAR_1->hash[VAR_2];

  FUNC_5(&VAR_3->lock);
  if (FUNC_2(VAR_0)) {
   FUNC_0(VAR_0)->num = 0;
   FUNC_4(FUNC_3(VAR_0), VAR_0->sk_prot, -1);
  }
  FUNC_6(&VAR_3->lock);
 }
}
