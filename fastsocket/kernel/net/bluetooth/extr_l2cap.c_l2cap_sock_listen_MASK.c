
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct socket {scalar_t__ type; struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_max_ack_backlog; scalar_t__ sk_ack_backlog; } ;
typedef int bdaddr_t ;
struct TYPE_6__ {int src; } ;
struct TYPE_5__ {int mode; void* sport; void* psm; } ;
struct TYPE_4__ {int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct sock*,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 scalar_t__ VAR_5 ;
 int FUNC_1 (void*,int *) ;
 TYPE_3__* FUNC_2 (struct sock*) ;
 void* FUNC_3 (int) ;
 int VAR_6 ;
 TYPE_2__* FUNC_4 (struct sock*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct socket *VAR_8, int VAR_9)
{
 struct sock *VAR_10 = VAR_8->sk;
 int VAR_11 = 0;

 FUNC_0("sk %p backlog %d", VAR_10, VAR_9);

 FUNC_5(VAR_10);

 if (VAR_10->sk_state != VAR_0 || VAR_8->type != VAR_5) {
  VAR_11 = -VAR_2;
  goto done;
 }

 switch (FUNC_4(VAR_10)->mode) {
 case 130:
  break;
 case 129:
 case 128:
  if (VAR_6)
   break;

 default:
  VAR_11 = -VAR_4;
  goto done;
 }

 if (!FUNC_4(VAR_10)->psm) {
  bdaddr_t *VAR_12 = &FUNC_2(VAR_10)->src;
  u16 VAR_13;

  VAR_11 = -VAR_3;

  FUNC_7(&VAR_7.lock);

  for (VAR_13 = 0x1001; VAR_13 < 0x1100; VAR_13 += 2)
   if (!FUNC_1(FUNC_3(VAR_13), VAR_12)) {
    FUNC_4(VAR_10)->psm = FUNC_3(VAR_13);
    FUNC_4(VAR_10)->sport = FUNC_3(VAR_13);
    VAR_11 = 0;
    break;
   }

  FUNC_8(&VAR_7.lock);

  if (VAR_11 < 0)
   goto done;
 }

 VAR_10->sk_max_ack_backlog = VAR_9;
 VAR_10->sk_ack_backlog = 0;
 VAR_10->sk_state = VAR_1;

done:
 FUNC_6(VAR_10);
 return VAR_11;
}
