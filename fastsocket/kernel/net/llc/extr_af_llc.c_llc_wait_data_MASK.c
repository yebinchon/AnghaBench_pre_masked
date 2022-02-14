
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sock*,long*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (long) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_3, long VAR_4)
{
 int VAR_5;

 while (1) {



  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5)
   break;
  VAR_5 = 0;
  if (VAR_3->sk_shutdown & VAR_1)
   break;
  VAR_5 = -VAR_0;
  if (!VAR_4)
   break;
  VAR_5 = FUNC_3(VAR_4);
  if (FUNC_0(VAR_2))
   break;
  VAR_5 = 0;
  if (FUNC_1(VAR_3, &VAR_4))
   break;
 }
 return VAR_5;
}
