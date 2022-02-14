
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_inq; int t_outq; int t_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tty*) ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*,int) ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*) ;
 int FUNC_5 (struct tty*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(struct tty *VAR_5, int VAR_6)
{

 if (VAR_6 & VAR_1) {
  VAR_5->t_flags &= ~VAR_2;
  FUNC_7(&VAR_5->t_outq);
  FUNC_2(VAR_5, VAR_1);
  if (!FUNC_0(VAR_5)) {
   FUNC_4(VAR_5);
   FUNC_5(VAR_5, VAR_4);
  }
 }
 if (VAR_6 & VAR_0) {
  FUNC_1(VAR_5);
  FUNC_6(&VAR_5->t_inq);
  FUNC_2(VAR_5, VAR_0);
  if (!FUNC_0(VAR_5)) {
   FUNC_3(VAR_5);
   FUNC_5(VAR_5, VAR_3);
  }
 }
}
