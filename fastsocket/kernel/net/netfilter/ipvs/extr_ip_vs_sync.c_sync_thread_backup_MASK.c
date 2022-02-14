
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ip_vs_sync_thread_data {struct ip_vs_sync_thread_data* buf; TYPE_2__* sock; } ;
struct TYPE_5__ {TYPE_1__* sk; } ;
struct TYPE_4__ {int sk_receive_queue; int * sk_sleep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ip_vs_sync_thread_data*,int) ;
 int FUNC_1 (TYPE_2__*,struct ip_vs_sync_thread_data*,int ) ;
 int FUNC_2 (struct ip_vs_sync_thread_data*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static int FUNC_11(void *VAR_3)
{
 struct ip_vs_sync_thread_data *VAR_4 = VAR_3;
 int VAR_5;

 FUNC_7("sync thread started: state = BACKUP, mcast_ifn = %s, "
  "syncid = %d\n",
  VAR_0, VAR_1);

 while (!FUNC_3()) {
  FUNC_10(*VAR_4->sock->sk->sk_sleep,
    !FUNC_8(&VAR_4->sock->sk->sk_receive_queue)
    || FUNC_3());


  while (!FUNC_8(&(VAR_4->sock->sk->sk_receive_queue))) {
   VAR_5 = FUNC_1(VAR_4->sock, VAR_4->buf,
     VAR_2);
   if (VAR_5 <= 0) {
    FUNC_6("receiving message error\n");
    break;
   }



   FUNC_4();
   FUNC_0(VAR_4->buf, VAR_5);
   FUNC_5();
  }
 }


 FUNC_9(VAR_4->sock);
 FUNC_2(VAR_4->buf);
 FUNC_2(VAR_4);

 return 0;
}
