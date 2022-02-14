
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int sk; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct socket *VAR_0)
{
 int VAR_1;

 FUNC_0("");
 VAR_1 = FUNC_2(FUNC_3(VAR_0->sk));
 FUNC_1(" = %d", VAR_1);
 return VAR_1;
}
