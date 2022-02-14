
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unix_sock {int link; int inflight; } ;
struct sock {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 struct sock* FUNC_6 (struct file*) ;
 struct unix_sock* FUNC_7 (struct sock*) ;
 int VAR_1 ;

void FUNC_8(struct file *VAR_2)
{
 struct sock *VAR_3 = FUNC_6(VAR_2);
 if (VAR_3) {
  struct unix_sock *VAR_4 = FUNC_7(VAR_3);
  FUNC_4(&VAR_0);
  FUNC_0(FUNC_3(&VAR_4->link));
  if (FUNC_1(&VAR_4->inflight))
   FUNC_2(&VAR_4->link);
  VAR_1--;
  FUNC_5(&VAR_0);
 }
}
