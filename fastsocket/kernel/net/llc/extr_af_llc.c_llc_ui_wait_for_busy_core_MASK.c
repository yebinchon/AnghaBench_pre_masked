
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_shutdown; int sk_sleep; } ;
struct llc_sock {int p_flag; int remote_busy_flag; int state; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 struct llc_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int *,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct sock*,long*,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_6, long VAR_7)
{
 FUNC_0(VAR_5);
 struct llc_sock *VAR_8 = FUNC_3(VAR_6);
 int VAR_9;

 while (1) {
  FUNC_4(VAR_6->sk_sleep, &VAR_5, VAR_3);
  VAR_9 = 0;
  if (FUNC_6(VAR_6, &VAR_7,
      (VAR_6->sk_shutdown & VAR_2) ||
      (!FUNC_2(VAR_8->state) &&
       !VAR_8->remote_busy_flag &&
       !VAR_8->p_flag)))
   break;
  VAR_9 = -VAR_1;
  if (FUNC_5(VAR_4))
   break;
  VAR_9 = -VAR_0;
  if (!VAR_7)
   break;
 }
 FUNC_1(VAR_6->sk_sleep, &VAR_5);
 return VAR_9;
}
