
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; int sk_sleep; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sock*,long*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_4, long VAR_5)
{
 FUNC_0(VAR_3);

 while (1) {
  FUNC_2(VAR_4->sk_sleep, &VAR_3, VAR_0);
  if (FUNC_4(VAR_4, &VAR_5, VAR_4->sk_state != VAR_1))
   break;
  if (FUNC_3(VAR_2) || !VAR_5)
   break;
 }
 FUNC_1(VAR_4->sk_sleep, &VAR_3);
 return VAR_5;
}
