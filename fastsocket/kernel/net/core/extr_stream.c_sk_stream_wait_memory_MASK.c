
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_shutdown; int sk_sleep; int sk_write_pending; scalar_t__ sk_err; TYPE_1__* sk_socket; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int *) ;
 int VAR_8 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*,long*,int) ;
 int FUNC_9 (long) ;
 int VAR_9 ;

int FUNC_10(struct sock *VAR_10, long *VAR_11)
{
 int VAR_12 = 0;
 long VAR_13 = 0;
 long VAR_14 = *VAR_11;
 FUNC_0(VAR_9);

 if (FUNC_7(VAR_10))
  VAR_14 = VAR_13 = (FUNC_3() % (VAR_2 / 5)) + 2;

 while (1) {
  FUNC_5(VAR_5, &VAR_10->sk_socket->flags);

  FUNC_4(VAR_10->sk_sleep, &VAR_9, VAR_7);

  if (VAR_10->sk_err || (VAR_10->sk_shutdown & VAR_4))
   goto do_error;
  if (!*VAR_11)
   goto do_nonblock;
  if (FUNC_6(VAR_8))
   goto do_interrupted;
  FUNC_1(VAR_5, &VAR_10->sk_socket->flags);
  if (FUNC_7(VAR_10) && !VAR_13)
   break;

  FUNC_5(VAR_6, &VAR_10->sk_socket->flags);
  VAR_10->sk_write_pending++;
  FUNC_8(VAR_10, &VAR_14, !VAR_10->sk_err &&
        !(VAR_10->sk_shutdown & VAR_4) &&
        FUNC_7(VAR_10) &&
        VAR_13);
  VAR_10->sk_write_pending--;

  if (VAR_13) {
   VAR_13 -= VAR_14;
   VAR_14 = *VAR_11;
   if (VAR_14 != VAR_3 &&
       (VAR_14 -= VAR_13) < 0)
    VAR_14 = 0;
   VAR_13 = 0;
  }
  *VAR_11 = VAR_14;
 }
out:
 FUNC_2(VAR_10->sk_sleep, &VAR_9);
 return VAR_12;

do_error:
 VAR_12 = -VAR_1;
 goto out;
do_nonblock:
 VAR_12 = -VAR_0;
 goto out;
do_interrupted:
 VAR_12 = FUNC_9(*VAR_11);
 goto out;
}
