
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tas {int i2c; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int,int*) ;

__attribute__((used)) static inline int FUNC_2(struct tas *VAR_0, u8 VAR_1, u8 VAR_2, u8 *VAR_3)
{
 if (VAR_2 == 1)
  return FUNC_0(VAR_0->i2c, VAR_1, *VAR_3);
 else
  return FUNC_1(VAR_0->i2c, VAR_1, VAR_2, VAR_3);
}
