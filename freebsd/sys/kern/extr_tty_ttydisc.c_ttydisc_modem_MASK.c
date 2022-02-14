
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_flags; int t_dcdwait; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty*,int) ;
 int FUNC_3 (struct tty*,int ) ;
 int FUNC_4 (struct tty*) ;
 int FUNC_5 (struct tty*,int ) ;

void
FUNC_6(struct tty *VAR_7, int VAR_8)
{

 FUNC_3(VAR_7, VAR_3);

 if (VAR_8)
  FUNC_1(&VAR_7->t_dcdwait);







 if (!FUNC_4(VAR_7) || FUNC_0(VAR_6, VAR_0))
  return;

 if (VAR_8 == 0) {



  VAR_7->t_flags |= VAR_5;

  FUNC_5(VAR_7, VAR_4);
  FUNC_2(VAR_7, VAR_1|VAR_2);
 } else {





 }
}
