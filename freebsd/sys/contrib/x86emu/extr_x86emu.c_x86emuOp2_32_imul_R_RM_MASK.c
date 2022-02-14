
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct x86emu {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct x86emu*) ;
 scalar_t__* FUNC_3 (struct x86emu*) ;
 int FUNC_4 (struct x86emu*) ;

__attribute__((used)) static void
FUNC_5(struct x86emu *VAR_2)
{
 uint32_t *VAR_3, VAR_4;
 uint64_t VAR_5;

 FUNC_4(VAR_2);
 VAR_3 = FUNC_3(VAR_2);
 VAR_4 = FUNC_2(VAR_2);
 VAR_5 = (int32_t) *VAR_3 * (int32_t)VAR_4;
 if (VAR_5 > 0xffffffff) {
  FUNC_1(VAR_0);
  FUNC_1(VAR_1);
 } else {
  FUNC_0(VAR_0);
  FUNC_0(VAR_1);
 }
 *VAR_3 = (uint32_t) VAR_5;
}
