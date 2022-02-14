
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct sock*) ;

int FUNC_2(struct sock *VAR_4, int VAR_5, int VAR_6)
{
 if (VAR_6 == -VAR_0)
  VAR_6 = FUNC_1(VAR_4) ? : -VAR_0;
 if (VAR_6 == -VAR_0 && !(VAR_5 & VAR_1))
  FUNC_0(VAR_2, VAR_3, 0);
 return VAR_6;
}
