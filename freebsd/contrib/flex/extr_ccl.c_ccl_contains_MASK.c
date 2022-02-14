
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int const* VAR_3 ;

__attribute__((used)) static bool
FUNC_0 (const int VAR_4, const int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_7 = VAR_0[VAR_4];
 VAR_6 = VAR_1[VAR_4];

 for (VAR_8 = 0; VAR_8 < VAR_7; ++VAR_8)
  if (VAR_3[VAR_6 + VAR_8] == VAR_5)
   return !VAR_2[VAR_4];

    return VAR_2[VAR_4];
}
