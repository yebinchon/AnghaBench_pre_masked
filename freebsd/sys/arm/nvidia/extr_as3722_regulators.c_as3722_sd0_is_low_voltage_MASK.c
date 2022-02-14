
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct as3722_reg_sc {int base_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static bool
FUNC_1(struct as3722_reg_sc *VAR_2)
{
 uint8_t VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->base_sc, VAR_0, &VAR_3);
 if (VAR_4 != 0)
  return (VAR_4);
 return (VAR_3 & VAR_1 ? 1 : 0);
}
