
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int* FUNC_1 (int const*,size_t,int ) ;

__attribute__((used)) static u16 FUNC_2(const u8 *VAR_1, size_t VAR_2)
{
 const u8 *VAR_3;


 if (VAR_2 < 3 + 1 + 4)
  return 0;


 VAR_3 = FUNC_1(VAR_1 + 4, VAR_2 - 4, VAR_0);
 if (VAR_3 && VAR_3[1] == 2)
  return FUNC_0(VAR_3 + 2);

 return 0;
}
