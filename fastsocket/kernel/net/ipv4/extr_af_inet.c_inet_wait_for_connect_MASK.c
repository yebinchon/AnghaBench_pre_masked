
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; int sk_sleep; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct sock*) ;
 long FUNC_5 (long) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_4 ;

__attribute__((used)) static long FUNC_7(struct sock *VAR_5, long VAR_6)
{
 FUNC_0(VAR_4);

 FUNC_3(VAR_5->sk_sleep, &VAR_4, VAR_0);






 while ((1 << VAR_5->sk_state) & (VAR_2 | VAR_1)) {
  FUNC_4(VAR_5);
  VAR_6 = FUNC_5(VAR_6);
  FUNC_2(VAR_5);
  if (FUNC_6(VAR_3) || !VAR_6)
   break;
  FUNC_3(VAR_5->sk_sleep, &VAR_4, VAR_0);
 }
 FUNC_1(VAR_5->sk_sleep, &VAR_4);
 return VAR_6;
}
