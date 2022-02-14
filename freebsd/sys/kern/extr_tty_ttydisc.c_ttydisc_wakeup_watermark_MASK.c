
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_flags; size_t t_outlow; int t_outq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tty*,int ) ;
 size_t FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct tty *VAR_2)
{
 size_t VAR_3;

 VAR_3 = FUNC_1(&VAR_2->t_outq);
 if (VAR_2->t_flags & VAR_1) {

  if (VAR_3 < VAR_2->t_outlow)
   return;


  VAR_2->t_flags &= ~VAR_1;
 } else {

  if (VAR_3 == 0)
   return;
 }
 FUNC_0(VAR_2, VAR_0);
}
