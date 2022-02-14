
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int,char*,int) ;

__attribute__((used)) static int
FUNC_2(int64_t VAR_0, char *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int64_t VAR_5;

 VAR_5 = ((int64_t)1 << (VAR_2*3));


 if (VAR_4)
  return (FUNC_1(VAR_0, VAR_1, VAR_2));







 if (VAR_0 >= 0) {
  while (VAR_2 <= VAR_3) {
   if (VAR_0 < VAR_5)
    return (FUNC_1(VAR_0, VAR_1, VAR_2));
   VAR_2++;
   VAR_5 <<= 3;
  }
 }


 return (FUNC_0(VAR_0, VAR_1, VAR_3));
}
