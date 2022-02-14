
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (size_t) ;
 unsigned int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static void *FUNC_4(unsigned long VAR_1, unsigned VAR_2, size_t VAR_3)
{
 if (VAR_1) {
  unsigned long VAR_4 = VAR_1 + (VAR_0 << VAR_2);
  unsigned long VAR_5 = VAR_1 + FUNC_0(VAR_3);

  FUNC_2(FUNC_3((void *)VAR_1), VAR_2);
  while (VAR_5 < VAR_4) {
   FUNC_1(VAR_5);
   VAR_5 += VAR_0;
  }
 }
 return (void *)VAR_1;
}
