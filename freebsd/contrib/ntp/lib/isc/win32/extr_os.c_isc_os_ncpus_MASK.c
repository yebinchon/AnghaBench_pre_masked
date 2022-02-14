
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long dwNumberOfProcessors; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;

unsigned int
FUNC_1(void) {
 long VAR_1 = 1;
 FUNC_0();
 VAR_1 = VAR_0.dwNumberOfProcessors;
 if (VAR_1 <= 0)
  VAR_1 = 1;

 return ((unsigned int)VAR_1);
}
