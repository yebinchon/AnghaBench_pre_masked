
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int const) ;

__attribute__((used)) static u8 FUNC_1(const u8 *VAR_0, u8 *VAR_1)
{
 u8 VAR_2 = 0;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0[0]);
 if (VAR_3 >= 0)
  VAR_2 |= (VAR_3 << 4);

 VAR_3 = FUNC_0(VAR_0[1]);
 if (VAR_3 >= 0)
  VAR_2 |= VAR_3;

 *VAR_1 += VAR_2;
 return VAR_2;
}
