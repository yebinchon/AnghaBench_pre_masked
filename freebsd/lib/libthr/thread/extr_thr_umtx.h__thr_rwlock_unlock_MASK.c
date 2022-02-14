
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urwlock {int rw_state; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct urwlock*) ;
 scalar_t__ FUNC_3 (int*,int,int) ;

__attribute__((used)) static inline int
FUNC_4(struct urwlock *VAR_4)
{
 int32_t VAR_5;

 VAR_5 = VAR_4->rw_state;
 if ((VAR_5 & VAR_2) != 0) {
  if (FUNC_3(&VAR_4->rw_state,
      VAR_2, 0))
   return (0);
 } else {
  for (;;) {
   if (FUNC_1(FUNC_0(VAR_5) == 0))
    return (VAR_0);
   if (!((VAR_5 & (VAR_3 |
       VAR_1)) != 0 &&
       FUNC_0(VAR_5) == 1)) {
    if (FUNC_3(&VAR_4->rw_state,
        VAR_5, VAR_5 - 1))
     return (0);
    VAR_5 = VAR_4->rw_state;
   } else {
    break;
   }
  }
     }
     return (FUNC_2(VAR_4));
}
