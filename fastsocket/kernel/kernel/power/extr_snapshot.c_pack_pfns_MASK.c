
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_bitmap {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct memory_bitmap*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline void
FUNC_2(unsigned long *VAR_2, struct memory_bitmap *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1 / sizeof(long); VAR_4++) {
  VAR_2[VAR_4] = FUNC_0(VAR_3);
  if (FUNC_1(VAR_2[VAR_4] == VAR_0))
   break;
 }
}
