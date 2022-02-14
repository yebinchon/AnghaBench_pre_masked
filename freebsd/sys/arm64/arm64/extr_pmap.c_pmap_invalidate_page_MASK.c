
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint64_t ;
typedef TYPE_1__* pmap_t ;
struct TYPE_4__ {int pm_cookie; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static __inline void
FUNC_7(pmap_t VAR_3, vm_offset_t VAR_4)
{
 uint64_t VAR_5;

 FUNC_5();
 FUNC_3(VAR_1);
 if (VAR_3 == VAR_2) {
  VAR_5 = FUNC_2(VAR_4);
  __asm __volatile("tlbi vaae1is, %0" : : "r" (VAR_5));
 } else {
  VAR_5 = FUNC_0(FUNC_1(VAR_3->pm_cookie)) | FUNC_2(VAR_4);
  __asm __volatile("tlbi vae1is, %0" : : "r" (VAR_5));
 }
 FUNC_3(VAR_0);
 FUNC_4();
 FUNC_6();
}
