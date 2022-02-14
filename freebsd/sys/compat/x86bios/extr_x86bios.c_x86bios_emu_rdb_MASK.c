
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct x86emu {int dummy; } ;


 int * FUNC_0 (int ,int) ;
 int FUNC_1 (struct x86emu*,int ) ;

__attribute__((used)) static uint8_t
FUNC_2(struct x86emu *VAR_0, uint32_t VAR_1)
{
 uint8_t *VAR_2;

 VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));
 if (VAR_2 == ((void*)0))
  FUNC_1(VAR_0, VAR_1);

 return (*VAR_2);
}
