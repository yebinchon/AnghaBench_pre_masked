
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_flags; int td_intrval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct thread*,int ) ;
 struct thread* VAR_3 ;

__attribute__((used)) static int
FUNC_1(void)
{
 struct thread *VAR_4;

 VAR_4 = VAR_3;
 FUNC_0(VAR_4, VAR_0);


 if (VAR_4->td_flags & VAR_1)
  VAR_4->td_flags &= ~VAR_1;

 if (VAR_4->td_flags & VAR_2) {
  VAR_4->td_flags &= ~VAR_2;
  return (VAR_4->td_intrval);
 }

 return (0);
}
