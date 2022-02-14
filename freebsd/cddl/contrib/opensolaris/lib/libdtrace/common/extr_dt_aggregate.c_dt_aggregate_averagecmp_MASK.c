
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(int64_t *VAR_2, int64_t *VAR_3)
{
 int64_t VAR_4 = VAR_2[0] ? (VAR_2[1] / VAR_2[0]) : 0;
 int64_t VAR_5 = VAR_3[0] ? (VAR_3[1] / VAR_3[0]) : 0;

 if (VAR_4 < VAR_5)
  return (VAR_1);

 if (VAR_4 > VAR_5)
  return (VAR_0);

 return (0);
}
