
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int freqs ;


 int FUNC_0 (unsigned int*,unsigned int*,unsigned int) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_0[], unsigned int VAR_1,
     unsigned int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_0[VAR_3] == VAR_2)
   break;
 }
 if (VAR_3 == 0 || VAR_3 >= VAR_1)
  return;
 FUNC_0(&VAR_0[1], &VAR_0[0], VAR_3 * sizeof(VAR_0[0]));
 VAR_0[0] = VAR_2;
}
