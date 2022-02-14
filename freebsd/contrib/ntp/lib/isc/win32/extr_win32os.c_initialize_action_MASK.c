
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dwOSVersionInfoSize; } ;
typedef int OSVERSIONINFOEX ;
typedef int OSVERSIONINFO ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void
FUNC_1(void) {
 BOOL VAR_3;

 if (VAR_1)
  return;




 VAR_2.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEX);
 VAR_3 = FUNC_0((OSVERSIONINFO *) &VAR_2);






 if(!VAR_3) {
  VAR_2.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
  VAR_3 = FUNC_0((OSVERSIONINFO *) &VAR_2);
 }
 VAR_1 = VAR_0;
}
