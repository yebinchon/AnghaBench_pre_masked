
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct nf_conn_counter {int bytes; int packets; } ;
struct TYPE_2__ {int (* function ) (unsigned long) ;} ;
struct nf_conn {TYPE_1__ timeout; int lock; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 size_t FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 struct nf_conn_counter* FUNC_2 (struct nf_conn*) ;
 scalar_t__ FUNC_3 (struct sk_buff const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned long) ;

bool FUNC_7(struct nf_conn *VAR_0,
         enum ip_conntrack_info VAR_1,
         const struct sk_buff *VAR_2,
         int VAR_3)
{
 if (VAR_3) {
  struct nf_conn_counter *VAR_4;

  VAR_4 = FUNC_2(VAR_0);
  if (VAR_4) {
   FUNC_4(&VAR_0->lock);
   VAR_4[FUNC_0(VAR_1)].packets++;
   VAR_4[FUNC_0(VAR_1)].bytes +=
    VAR_2->len - FUNC_3(VAR_2);
   FUNC_5(&VAR_0->lock);
  }
 }

 if (FUNC_1(&VAR_0->timeout)) {
  VAR_0->timeout.function((unsigned long)VAR_0);
  return 1;
 }
 return 0;
}
