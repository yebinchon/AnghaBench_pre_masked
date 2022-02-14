
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef int r ;


 scalar_t__ FUNC_0 (int const*,int) ;

__attribute__((used)) static u8 FUNC_1(const u8 *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;
 if (FUNC_0((u8 *) &VAR_2, sizeof(VAR_2)) < 0)
  VAR_2 = 0;
 VAR_2 %= VAR_1;
 return VAR_0[VAR_2];
}
