
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintBPL_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(void *VAR_1, int VAR_2, int VAR_3)
{
 uintBPL_t *VAR_4 = ((uintBPL_t *) VAR_1) + (VAR_3 / VAR_0);
 int VAR_5 = VAR_3 & ~(VAR_0 - 1);
 unsigned long VAR_6;

 if (VAR_3 >= VAR_2)
  return VAR_2;
 VAR_2 -= VAR_5;
 VAR_3 &= (VAR_0 - 1);
 if (VAR_3) {
  VAR_6 = FUNC_1(VAR_4++);
  VAR_6 &= ~0UL << VAR_3;
  if (VAR_2 < VAR_0)
   goto found_first;
  if (VAR_6)
   goto found_middle;
  VAR_2 -= VAR_0;
  VAR_5 += VAR_0;
 }
 while (VAR_2 & ~(VAR_0 - 1)) {
  VAR_6 = FUNC_1(VAR_4++);
  if (VAR_6)
   goto found_middle;
  VAR_5 += VAR_0;
  VAR_2 -= VAR_0;
 }
 if (!VAR_2)
  return VAR_5;
 VAR_6 = FUNC_1(VAR_4);
found_first:
 VAR_6 &= ~0UL >> (VAR_0 - VAR_2);
found_middle:
 return VAR_5 + FUNC_0(~VAR_6);
}
