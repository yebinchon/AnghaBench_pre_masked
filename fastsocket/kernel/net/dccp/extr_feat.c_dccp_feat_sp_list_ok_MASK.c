
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static u8 FUNC_1(u8 VAR_0, u8 const *VAR_1, u8 VAR_2)
{
 if (VAR_1 == ((void*)0) || VAR_2 < 1)
  return 0;
 while (VAR_2--)
  if (!FUNC_0(VAR_0, *VAR_1++))
   return 0;
 return 1;
}
