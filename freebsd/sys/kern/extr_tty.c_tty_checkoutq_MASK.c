
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_outq; } ;


 int FUNC_0 (int *) ;

int
FUNC_1(struct tty *VAR_0)
{


 return (FUNC_0(&VAR_0->t_outq) >= 256);
}
