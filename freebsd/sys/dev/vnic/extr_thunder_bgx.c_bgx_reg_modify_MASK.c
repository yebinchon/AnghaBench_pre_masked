
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct bgx {int reg_base; } ;
typedef int bus_space_handle_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct bgx *VAR_0, uint8_t VAR_1, uint64_t VAR_2, uint64_t VAR_3)
{
 bus_space_handle_t VAR_4;

 VAR_4 = ((uint32_t)VAR_1 << 20) + VAR_2;

 FUNC_1(VAR_0->reg_base, VAR_4, VAR_3 | FUNC_0(VAR_0->reg_base, VAR_4));
}
