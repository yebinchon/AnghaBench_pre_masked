
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int32_t ;
typedef int csa_res ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;

__attribute__((used)) static int
FUNC_1(csa_res *VAR_1, u_int32_t *VAR_2, u_long VAR_3, u_long VAR_4)
{
 u_long VAR_5;







 if ((VAR_4 & 0x3) != 0)
  return (VAR_0);


 if ((VAR_3 & 0x3) != 0)
  return (VAR_0);


 for (VAR_5 = 0 ; VAR_5 < VAR_4 ; VAR_5 += 4)
  FUNC_0(VAR_1, VAR_3 + VAR_5, VAR_2[VAR_5 >> 2]);
 return (0);
}
