
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct x86emu {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct x86emu*) ;
 int* FUNC_2 (struct x86emu*) ;
 int FUNC_3 (struct x86emu*) ;

__attribute__((used)) static void
FUNC_4(struct x86emu *VAR_1, int VAR_2)
{
 uint32_t VAR_3, *VAR_4;

 FUNC_3(VAR_1);
 VAR_4 = FUNC_2(VAR_1);
 VAR_3 = FUNC_1(VAR_1);
 FUNC_0(VAR_3 == 0, VAR_0);
 for (*VAR_4 = 0; *VAR_4 < 32; *VAR_4 += VAR_2) {
  if ((VAR_3 >> *VAR_4) & 1)
   break;
 }
}
