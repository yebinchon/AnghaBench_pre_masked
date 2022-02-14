
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__** VAR_3 ;

u32 FUNC_2(u32 VAR_4)
{
 int VAR_5;

 if (VAR_4 == 0)
  return 0;


 if (VAR_4 < VAR_3[0][1]) {
  FUNC_0("fvalue %u smaller than resolution\n", VAR_4);
  return VAR_2;
 }
 if (VAR_4 > VAR_3[VAR_0 - 1][0]) {
  FUNC_0("fvalue %u exceeds bounds!\n", VAR_4);
  return 1000000;
 }

 if (VAR_4 <= VAR_3[VAR_0 - 1][1]) {
  VAR_5 = FUNC_1(VAR_4, 1);
  return (VAR_5 + 1) * VAR_1 / VAR_0;
 }


 VAR_5 = FUNC_1(VAR_4, 0);
 return (VAR_5 + 1) * 1000000 / VAR_0;
}
