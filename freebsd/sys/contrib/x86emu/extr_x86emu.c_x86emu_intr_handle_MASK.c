
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int intr; int intno; } ;
struct x86emu {TYPE_1__ x86; } ;


 int VAR_0 ;
 int FUNC_0 (struct x86emu*,int ) ;

__attribute__((used)) static void
FUNC_1(struct x86emu *VAR_1)
{
 uint8_t VAR_2;

 if (VAR_1->x86.intr & VAR_0) {
  VAR_2 = VAR_1->x86.intno;
  VAR_1->x86.intr = 0;
  FUNC_0(VAR_1, VAR_2);
 }
}
