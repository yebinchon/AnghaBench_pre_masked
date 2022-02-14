
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct x86emu {int dummy; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int* FUNC_2 (int,int) ;
 int FUNC_3 (struct x86emu*,int) ;

__attribute__((used)) static uint32_t
FUNC_4(struct x86emu *VAR_0, uint32_t VAR_1)
{
 uint32_t *VAR_2;

 VAR_2 = FUNC_2(VAR_1, sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  FUNC_3(VAR_0, VAR_1);


 if ((VAR_1 & 3) != 0)
  return (FUNC_0(VAR_2));
 else

 return (FUNC_1(*VAR_2));
}
