
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct sock {int sk_shutdown; TYPE_1__ sk_receive_queue; } ;
struct sk_buff {int users; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,long,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sock*,int*,long*) ;
 struct sk_buff* FUNC_3 (TYPE_1__*) ;
 struct sk_buff* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct sock*) ;
 long FUNC_6 (struct sock*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct sock *VAR_4, int VAR_5,
           int VAR_6, int *VAR_7)
{
 int VAR_8;
 struct sk_buff *VAR_9;
 long VAR_10;

 VAR_10 = FUNC_6(VAR_4, VAR_6);

 FUNC_0("Timeout: timeo: %ld, MAX: %ld.\n",
     VAR_10, VAR_1);

 do {







  if (VAR_5 & VAR_2) {
   FUNC_7(&VAR_4->sk_receive_queue.lock);
   VAR_9 = FUNC_4(&VAR_4->sk_receive_queue);
   if (VAR_9)
    FUNC_1(&VAR_9->users);
   FUNC_8(&VAR_4->sk_receive_queue.lock);
  } else {
   VAR_9 = FUNC_3(&VAR_4->sk_receive_queue);
  }

  if (VAR_9)
   return VAR_9;


  VAR_8 = FUNC_5(VAR_4);
  if (VAR_8)
   goto no_packet;

  if (VAR_4->sk_shutdown & VAR_3)
   break;


  VAR_8 = -VAR_0;
  if (!VAR_10)
   goto no_packet;
 } while (FUNC_2(VAR_4, VAR_7, &VAR_10) == 0);

 return ((void*)0);

no_packet:
 *VAR_7 = VAR_8;
 return ((void*)0);
}
