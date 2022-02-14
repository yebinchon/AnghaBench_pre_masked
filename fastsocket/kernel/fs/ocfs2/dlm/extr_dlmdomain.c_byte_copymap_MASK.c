
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *,int ,unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int,unsigned long*) ;

__attribute__((used)) static inline void FUNC_3(u8 VAR_0[], unsigned long VAR_1[],
   unsigned int VAR_2)
{
 unsigned int VAR_3;

 if (!VAR_2)
  return;

 FUNC_1(VAR_0, 0, ((VAR_2 + 7) >> 3));
 for (VAR_3 = 0 ; VAR_3 < VAR_2; VAR_3++)
  if (FUNC_2(VAR_3, VAR_1))
   FUNC_0(VAR_3, VAR_0);
}
