
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_snd; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct socket*) ;
 scalar_t__ FUNC_2 (struct socket*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct socket *VAR_1 = VAR_0;

 if (FUNC_2(VAR_1))
  FUNC_1(VAR_1);
 else
  FUNC_0(&VAR_1->so_snd);
}
