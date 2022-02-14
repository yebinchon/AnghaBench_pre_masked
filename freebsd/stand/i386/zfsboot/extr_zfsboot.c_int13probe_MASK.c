
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; int eax; int edx; int ecx; int efl; int ctl; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(int VAR_3)
{
    VAR_2 = VAR_1;
    VAR_2 = 0x13;
    VAR_2 = 0x800;
    VAR_2 = VAR_3;
    FUNC_1();

    if (!FUNC_0(VAR_2) &&
 ((VAR_2 & 0xff) != (VAR_3 & VAR_0))) {
 if ((VAR_2 & 0x3f) == 0) {
  return(0);
 }
 return (1);
    }
    return(0);
}
