
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* pmap_t ;
struct TYPE_4__ {int pm_cookie; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static __inline void
FUNC_6(pmap_t VAR_3)
{
 uint64_t VAR_4;

 FUNC_4();
 FUNC_2(VAR_1);
 if (VAR_3 == VAR_2) {
  __asm __volatile("tlbi vmalle1is");
 } else {
  VAR_4 = FUNC_0(FUNC_1(VAR_3->pm_cookie));
  __asm __volatile("tlbi aside1is, %0" : : "r" (VAR_4));
 }
 FUNC_2(VAR_0);
 FUNC_3();
 FUNC_5();
}
