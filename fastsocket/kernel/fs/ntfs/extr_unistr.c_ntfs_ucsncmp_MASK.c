
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
typedef int ntfschar ;


 scalar_t__ FUNC_0 (int const) ;

int FUNC_1(const ntfschar *VAR_0, const ntfschar *VAR_1, size_t VAR_2)
{
 u16 VAR_3, VAR_4;
 size_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  VAR_3 = FUNC_0(VAR_0[VAR_5]);
  VAR_4 = FUNC_0(VAR_1[VAR_5]);
  if (VAR_3 < VAR_4)
   return -1;
  if (VAR_3 > VAR_4)
   return 1;
  if (!VAR_3)
   break;
 }
 return 0;
}
