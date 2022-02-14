
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char UINT8 ;


 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int
FUNC_1(const UINT8 *VAR_0, UINT8 *VAR_1)
{
 static const int VAR_2[20] = {3, 2, 1, 0, -1, 5, 4, -1, 7, 6, -1,
     8, 9, -1, 10, 11, 12, 13, 14, 15};
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 20; ++VAR_3, ++VAR_0) {
  if (VAR_2[VAR_3] >= 0) {
   if (FUNC_0(VAR_0,
       &VAR_1[VAR_2[VAR_3]]))
    return (-1);
   ++VAR_0;
  } else if (*VAR_0 != '-')
   return (-1);
 }

 return (0);
}
