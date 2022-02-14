
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct tty*,int) ;
 int FUNC_1 (struct tty*) ;
 scalar_t__ FUNC_2 (struct tty*,int ) ;

void
FUNC_3(struct tty *VAR_6)
{


 VAR_6->t_flags &= ~(VAR_3|VAR_2|VAR_4);





 FUNC_0(VAR_6, VAR_0 | VAR_1);

 if (FUNC_2(VAR_6, VAR_5))
  FUNC_1(VAR_6);
}
