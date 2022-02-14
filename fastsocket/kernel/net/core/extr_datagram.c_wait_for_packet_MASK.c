
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_shutdown; scalar_t__ sk_state; int sk_sleep; int sk_receive_queue; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct sock*) ;
 int VAR_5 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_6 ;
 long FUNC_4 (long) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (long) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_8, int *VAR_9, long *VAR_10)
{
 int VAR_11;
 FUNC_0(VAR_7, VAR_6);

 FUNC_3(VAR_8->sk_sleep, &VAR_7, VAR_2);


 VAR_11 = FUNC_7(VAR_8);
 if (VAR_11)
  goto out_err;

 if (!FUNC_6(&VAR_8->sk_receive_queue))
  goto out;


 if (VAR_8->sk_shutdown & VAR_1)
  goto out_noerr;




 VAR_11 = -VAR_0;
 if (FUNC_1(VAR_8) &&
     !(VAR_8->sk_state == VAR_3 || VAR_8->sk_state == VAR_4))
  goto out_err;


 if (FUNC_5(VAR_5))
  goto interrupted;

 VAR_11 = 0;
 *VAR_10 = FUNC_4(*VAR_10);
out:
 FUNC_2(VAR_8->sk_sleep, &VAR_7);
 return VAR_11;
interrupted:
 VAR_11 = FUNC_8(*VAR_10);
out_err:
 *VAR_9 = VAR_11;
 goto out;
out_noerr:
 *VAR_9 = 0;
 VAR_11 = 1;
 goto out;
}
