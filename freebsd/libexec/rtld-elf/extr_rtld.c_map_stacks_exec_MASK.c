
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RtldLockState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(RtldLockState *VAR_4)
{
 void (*VAR_5)(void);

 if ((VAR_2 & VAR_0) == 0 || (VAR_3 & VAR_1) != 0)
  return;
 VAR_5 = (void (*)(void))(uintptr_t)
     FUNC_0("__pthread_map_stacks_exec", VAR_4);
 if (VAR_5 != ((void*)0)) {
  VAR_3 |= VAR_1;
  VAR_5();
 }
}
