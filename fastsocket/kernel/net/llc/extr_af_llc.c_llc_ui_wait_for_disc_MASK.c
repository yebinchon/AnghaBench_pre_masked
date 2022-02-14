
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; int sk_sleep; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sock*,long*,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_6, long VAR_7)
{
 FUNC_0(VAR_5);
 int VAR_8 = 0;

 while (1) {
  FUNC_2(VAR_6->sk_sleep, &VAR_5, VAR_2);
  if (FUNC_4(VAR_6, &VAR_7, VAR_6->sk_state == VAR_3))
   break;
  VAR_8 = -VAR_1;
  if (FUNC_3(VAR_4))
   break;
  VAR_8 = -VAR_0;
  if (!VAR_7)
   break;
  VAR_8 = 0;
 }
 FUNC_1(VAR_6->sk_sleep, &VAR_5);
 return VAR_8;
}
