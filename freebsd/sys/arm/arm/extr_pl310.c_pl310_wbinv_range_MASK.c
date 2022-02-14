
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_paddr_t ;
struct TYPE_6__ {scalar_t__ sc_rtl_revision; int sc_enabled; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 () ;
 TYPE_1__* VAR_8 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_5(vm_paddr_t VAR_9, vm_size_t VAR_10)
{

 if ((VAR_8 == ((void*)0)) || !VAR_8->sc_enabled)
  return;

 FUNC_0(VAR_8);
 if (VAR_9 & VAR_6) {
  VAR_10 += VAR_9 & VAR_6;
  VAR_9 &= ~VAR_6;
 }
 if (VAR_10 & VAR_6) {
  VAR_10 &= ~VAR_6;
     VAR_10 += VAR_7;
 }







 while (VAR_10 > 0) {
   FUNC_3(VAR_8, VAR_3,
       VAR_9);
  VAR_9 += VAR_7;
  VAR_10 -= VAR_7;
 }






 FUNC_2();
 FUNC_1(VAR_8);
}
