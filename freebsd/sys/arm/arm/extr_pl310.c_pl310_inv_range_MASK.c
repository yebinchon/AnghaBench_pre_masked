
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_paddr_t ;
struct TYPE_5__ {int sc_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_4(vm_paddr_t VAR_4, vm_size_t VAR_5)
{

 if ((VAR_3 == ((void*)0)) || !VAR_3->sc_enabled)
  return;

 FUNC_0(VAR_3);
 if (VAR_4 & VAR_1) {
  VAR_5 += VAR_4 & VAR_1;
  VAR_4 &= ~VAR_1;
 }
 if (VAR_5 & VAR_1) {
  VAR_5 &= ~VAR_1;
  VAR_5 += VAR_2;
 }
 while (VAR_5 > 0) {
  FUNC_3(VAR_3, VAR_0, VAR_4);
  VAR_4 += VAR_2;
  VAR_5 -= VAR_2;
 }

 FUNC_2();
 FUNC_1(VAR_3);
}
