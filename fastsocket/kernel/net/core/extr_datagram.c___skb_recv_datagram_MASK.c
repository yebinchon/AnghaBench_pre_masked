
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct sock {TYPE_1__ sk_receive_queue; } ;
struct sk_buff {int peeked; int users; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct sk_buff*,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 struct sk_buff* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct sock*) ;
 long FUNC_4 (struct sock*,unsigned int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct sock*,int*,long*) ;

struct sk_buff *FUNC_8(struct sock *VAR_3, unsigned VAR_4,
        int *VAR_5, int *VAR_6)
{
 struct sk_buff *VAR_7;
 long VAR_8;



 int VAR_9 = FUNC_3(VAR_3);

 if (VAR_9)
  goto no_packet;

 VAR_8 = FUNC_4(VAR_3, VAR_4 & VAR_1);

 do {






  unsigned long VAR_10;

  FUNC_5(&VAR_3->sk_receive_queue.lock, VAR_10);
  VAR_7 = FUNC_2(&VAR_3->sk_receive_queue);
  if (VAR_7) {
   *VAR_5 = VAR_7->peeked;
   if (VAR_4 & VAR_2) {
    VAR_7->peeked = 1;
    FUNC_1(&VAR_7->users);
   } else
    FUNC_0(VAR_7, &VAR_3->sk_receive_queue);
  }
  FUNC_6(&VAR_3->sk_receive_queue.lock, VAR_10);

  if (VAR_7)
   return VAR_7;


  VAR_9 = -VAR_0;
  if (!VAR_8)
   goto no_packet;

 } while (!FUNC_7(VAR_3, VAR_6, &VAR_8));

 return ((void*)0);

no_packet:
 *VAR_6 = VAR_9;
 return ((void*)0);
}
