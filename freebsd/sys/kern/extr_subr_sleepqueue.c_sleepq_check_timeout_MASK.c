
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ td_sleeptimo; int td_flags; int td_slpcallout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int ) ;
 int FUNC_1 (int *) ;
 struct thread* VAR_3 ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(void)
{
 struct thread *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3;
 FUNC_0(VAR_4, VAR_1);





 VAR_5 = 0;
 if (VAR_4->td_sleeptimo != 0) {
  if (VAR_4->td_sleeptimo <= FUNC_2())
   VAR_5 = VAR_0;
  VAR_4->td_sleeptimo = 0;
 }
 if (VAR_4->td_flags & VAR_2)
  VAR_4->td_flags &= ~VAR_2;
 else
  FUNC_1(&VAR_4->td_slpcallout);
 return (VAR_5);
}
