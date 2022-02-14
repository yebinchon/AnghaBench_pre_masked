
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int const*,int const*,int) ;

__attribute__((used)) static int FUNC_3(const u8 *VAR_1, const u8 *VAR_2)
{
 if (FUNC_2(VAR_1, VAR_2, VAR_0) == 0)
  return 1;
 if (FUNC_2(VAR_1, VAR_2, 2) == 0 &&
     FUNC_1(&VAR_2[2]) == 0 &&
     FUNC_0(&VAR_2[6]) == 0)
  return 1;
 return 0;
}
