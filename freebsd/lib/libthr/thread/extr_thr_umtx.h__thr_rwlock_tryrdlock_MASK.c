
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urwlock {int rw_flags; int rw_state; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int*,int,int) ;

__attribute__((used)) static inline int
FUNC_3(struct urwlock *VAR_6, int VAR_7)
{
 int32_t VAR_8, VAR_9;

 if ((VAR_7 & VAR_3) != 0 ||
     (VAR_6->rw_flags & VAR_3) != 0)
  VAR_9 = VAR_4;
 else
  VAR_9 = VAR_4 | VAR_5;
 VAR_8 = VAR_6->rw_state;
 while (!(VAR_8 & VAR_9)) {
  if (FUNC_1(FUNC_0(VAR_8) ==
      VAR_2))
   return (VAR_0);
  if (FUNC_2(&VAR_6->rw_state, VAR_8, VAR_8 + 1))
   return (0);
  VAR_8 = VAR_6->rw_state;
 }

 return (VAR_1);
}
