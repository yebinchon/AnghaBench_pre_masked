
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; } ;
struct x86emu {TYPE_1__ x86; } ;
typedef scalar_t__ int8_t ;
typedef int int32_t ;
typedef scalar_t__ int16_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct x86emu*) ;
 int FUNC_1 (struct x86emu*,int ) ;
 int FUNC_2 (struct x86emu*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct x86emu *VAR_1)
{
 int16_t VAR_2;

 VAR_2 = (int8_t) FUNC_0(VAR_1);
 if (VAR_1->x86.mode & VAR_0) {
  FUNC_1(VAR_1, (int32_t) VAR_2);
 } else {
  FUNC_2(VAR_1, VAR_2);
 }
}
