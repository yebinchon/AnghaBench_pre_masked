
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct x86emu {int dummy; } ;


 int * FUNC_0 (int ,int) ;
 int FUNC_1 (struct x86emu*,int ) ;

__attribute__((used)) static void
FUNC_2(struct x86emu *VAR_0, uint32_t VAR_1, uint8_t VAR_2)
{
 uint8_t *VAR_3;

 VAR_3 = FUNC_0(VAR_1, sizeof(*VAR_3));
 if (VAR_3 == ((void*)0))
  FUNC_1(VAR_0, VAR_1);

 *VAR_3 = VAR_2;
}
