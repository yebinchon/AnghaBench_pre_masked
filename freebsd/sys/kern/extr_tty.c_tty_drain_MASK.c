
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_drainwait; int t_outq; int t_outwait; } ;
typedef scalar_t__ sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (struct tty*,int *,int) ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (struct tty*) ;
 scalar_t__ FUNC_4 (struct tty*,int ) ;
 size_t FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct tty *VAR_4, int VAR_5)
{
 sbintime_t VAR_6;
 size_t VAR_7;
 int VAR_8;

 if (FUNC_4(VAR_4, VAR_2))

  return (0);






 if (VAR_5)
  VAR_6 = FUNC_0() + VAR_1;
 else if (VAR_4->t_drainwait != 0)
  VAR_6 = FUNC_0() + VAR_1 * VAR_4->t_drainwait;
 else
  VAR_6 = 0;
 VAR_8 = 0;
 VAR_7 = FUNC_5(&VAR_4->t_outq);
 for (;;) {
  if (FUNC_5(&VAR_4->t_outq) == 0 && !FUNC_2(VAR_4))
   return (0);
  if (VAR_8 != 0)
   return (VAR_8);
  FUNC_3(VAR_4);
  VAR_8 = FUNC_1(VAR_4, &VAR_4->t_outwait, VAR_3 / 10);
  if (VAR_8 != 0 && VAR_8 != VAR_0)
   return (VAR_8);
  else if (VAR_6 == 0 || FUNC_0() < VAR_6)
   VAR_8 = 0;
  else if (VAR_5 && FUNC_5(&VAR_4->t_outq) < VAR_7) {

   VAR_8 = 0;
   VAR_6 += VAR_1;
   VAR_7 = FUNC_5(&VAR_4->t_outq);
  }
 }
}
