
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; scalar_t__ sk_type; int sk_max_ack_backlog; scalar_t__ sk_ack_backlog; } ;
typedef int bdaddr_t ;
struct TYPE_6__ {int src; } ;
struct TYPE_5__ {int channel; } ;
struct TYPE_4__ {int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct sock*,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,int *) ;
 TYPE_3__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 TYPE_2__* FUNC_5 (struct sock*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct socket *VAR_6, int VAR_7)
{
 struct sock *VAR_8 = VAR_6->sk;
 int VAR_9 = 0;

 FUNC_0("sk %p backlog %d", VAR_8, VAR_7);

 FUNC_3(VAR_8);

 if (VAR_8->sk_state != VAR_0) {
  VAR_9 = -VAR_2;
  goto done;
 }

 if (VAR_8->sk_type != VAR_4) {
  VAR_9 = -VAR_3;
  goto done;
 }

 if (!FUNC_5(VAR_8)->channel) {
  bdaddr_t *VAR_10 = &FUNC_2(VAR_8)->src;
  u8 VAR_11;

  VAR_9 = -VAR_3;

  FUNC_6(&VAR_5.lock);

  for (VAR_11 = 1; VAR_11 < 31; VAR_11++)
   if (!FUNC_1(VAR_11, VAR_10)) {
    FUNC_5(VAR_8)->channel = VAR_11;
    VAR_9 = 0;
    break;
   }

  FUNC_7(&VAR_5.lock);

  if (VAR_9 < 0)
   goto done;
 }

 VAR_8->sk_max_ack_backlog = VAR_7;
 VAR_8->sk_ack_backlog = 0;
 VAR_8->sk_state = VAR_1;

done:
 FUNC_4(VAR_8);
 return VAR_9;
}
