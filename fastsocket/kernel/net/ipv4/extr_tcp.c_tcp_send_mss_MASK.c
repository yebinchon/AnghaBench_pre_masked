
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int,int) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_1, int *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 *VAR_2 = FUNC_1(VAR_1, VAR_4, !(VAR_3 & VAR_0));

 return VAR_4;
}
