
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compact_control {int contended; int sync; } ;
typedef int spinlock_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_6(spinlock_t *VAR_1, unsigned long *VAR_2,
          bool VAR_3, struct compact_control *VAR_4)
{
 if (FUNC_2() || FUNC_3(VAR_1)) {
  if (VAR_3) {
   FUNC_5(VAR_1, *VAR_2);
   VAR_3 = 0;
  }


  if (!VAR_4->sync) {
   VAR_4->contended = 1;
   return 0;
  }

  FUNC_0();
  if (FUNC_1(VAR_0))
   return 0;
 }

 if (!VAR_3)
  FUNC_4(VAR_1, *VAR_2);
 return 1;
}
