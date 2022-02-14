
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_err_soft; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct sock *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_0;


 if (VAR_1->sk_err_soft && !VAR_2)
  VAR_3 = 0;




 if (VAR_3 == 0 && VAR_2)
  VAR_3 = 8;
 return VAR_3;
}
