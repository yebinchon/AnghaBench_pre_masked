
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 long double FUNC_0 (scalar_t__*) ;

__attribute__((used)) static int
FUNC_1(int64_t *VAR_2, int64_t *VAR_3)
{
 long double VAR_4 = FUNC_0(VAR_2);
 long double VAR_5 = FUNC_0(VAR_3);
 int64_t VAR_6, VAR_7;

 if (VAR_4 < VAR_5)
  return (VAR_1);

 if (VAR_4 > VAR_5)
  return (VAR_0);






 VAR_6 = VAR_2[1];
 VAR_7 = VAR_3[1];

 if (VAR_6 < VAR_7)
  return (VAR_1);

 if (VAR_6 > VAR_7)
  return (VAR_0);

 return (0);
}
