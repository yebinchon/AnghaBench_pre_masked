
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_sleep; scalar_t__ sk_err; int sk_write_pending; } ;
struct sk_buff {int dummy; } ;
struct dccp_sock {int dccps_hc_tx_ccid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct sock*,struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_2 (char*,int) ;
 struct dccp_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct sock*) ;
 unsigned long FUNC_6 (int) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (unsigned long) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_11(struct sock *VAR_5, struct sk_buff *VAR_6, int VAR_7)
{
 struct dccp_sock *VAR_8 = FUNC_3(VAR_5);
 FUNC_0(VAR_4);
 unsigned long VAR_9;
 int VAR_10;

 do {
  FUNC_2("delayed send by %d msec\n", VAR_7);
  VAR_9 = FUNC_6(VAR_7);

  FUNC_7(VAR_5->sk_sleep, &VAR_4, VAR_2);

  VAR_5->sk_write_pending++;
  FUNC_8(VAR_5);
  FUNC_9(VAR_9);
  FUNC_5(VAR_5);
  VAR_5->sk_write_pending--;

  if (VAR_5->sk_err)
   goto do_error;
  if (FUNC_10(VAR_3))
   goto do_interrupted;

  VAR_10 = FUNC_1(VAR_8->dccps_hc_tx_ccid, VAR_5, VAR_6);
 } while ((VAR_7 = VAR_10) > 0);
out:
 FUNC_4(VAR_5->sk_sleep, &VAR_4);
 return VAR_10;

do_error:
 VAR_10 = -VAR_1;
 goto out;
do_interrupted:
 VAR_10 = -VAR_0;
 goto out;
}
