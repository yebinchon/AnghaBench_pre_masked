
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urwlock {int rw_state; } ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int*,int,int) ;

__attribute__((used)) static inline int
FUNC_2(struct urwlock *VAR_2)
{
 int32_t VAR_3;

 VAR_3 = VAR_2->rw_state;
 while ((VAR_3 & VAR_1) == 0 &&
     FUNC_0(VAR_3) == 0) {
  if (FUNC_1(&VAR_2->rw_state, VAR_3,
      VAR_3 | VAR_1))
   return (0);
  VAR_3 = VAR_2->rw_state;
 }

 return (VAR_0);
}
