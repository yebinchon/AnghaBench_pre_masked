
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long*) ;

__attribute__((used)) static unsigned long FUNC_2(unsigned long *VAR_0,
      unsigned long VAR_1,
      unsigned long VAR_2,
      unsigned int VAR_3,
      unsigned long VAR_4)
{
 unsigned long VAR_5, VAR_6, VAR_7;
again:
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);


 VAR_5 = (VAR_5 + VAR_4) & ~VAR_4;

 VAR_6 = VAR_5 + VAR_3;
 if (VAR_6 >= VAR_1)
  return -1;
 for (VAR_7 = VAR_5; VAR_7 < VAR_6; VAR_7++) {
  if (FUNC_1(VAR_7, VAR_0)) {
   VAR_2 = VAR_7+1;
   goto again;
  }
 }
 return VAR_5;
}
