
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_flags; int * t_hook; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct tty*,int ) ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*) ;

void
FUNC_4(struct tty *VAR_2)
{

 FUNC_1(VAR_2, VAR_0);
 FUNC_0(VAR_2->t_flags & VAR_1);


 VAR_2->t_flags &= ~VAR_1;
 VAR_2->t_hook = ((void*)0);


 FUNC_3(VAR_2);


 FUNC_2(VAR_2);
}
