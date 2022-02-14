
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0, struct sock *VAR_1)
{
 if (FUNC_2(VAR_0 == VAR_1) || !VAR_1) {
  FUNC_0(VAR_0);
  return;
 }
 if (VAR_0 < VAR_1) {
  FUNC_0(VAR_0);
  FUNC_1(VAR_1);
 } else {
  FUNC_0(VAR_1);
  FUNC_1(VAR_0);
 }
}
