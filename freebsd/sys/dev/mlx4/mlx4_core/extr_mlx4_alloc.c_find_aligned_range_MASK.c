
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long*) ;

__attribute__((used)) static unsigned long FUNC_2(unsigned long *VAR_0,
     u32 VAR_1, u32 VAR_2,
     int VAR_3, int VAR_4, u32 VAR_5)
{
 unsigned long VAR_6, VAR_7;

again:
 VAR_1 = FUNC_0(VAR_1, VAR_4);

 while ((VAR_1 < VAR_2) && (FUNC_1(VAR_1, VAR_0) ||
       (VAR_1 & VAR_5)))
  VAR_1 += VAR_4;

 if (VAR_1 >= VAR_2)
  return -1;

 VAR_6 = VAR_1+VAR_3;
 if (VAR_6 > VAR_2)
  return -1;

 for (VAR_7 = VAR_1 + 1; VAR_7 < VAR_6; VAR_7++) {
  if (FUNC_1(VAR_7, VAR_0) || ((u32)VAR_7 & VAR_5)) {
   VAR_1 = VAR_7 + 1;
   goto again;
  }
 }

 return VAR_1;
}
