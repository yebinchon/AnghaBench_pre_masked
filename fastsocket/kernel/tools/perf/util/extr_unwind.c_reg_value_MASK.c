
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unw_word_t ;
typedef int u64 ;
struct regs_dump {int * regs; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(unw_word_t *VAR_1, struct regs_dump *VAR_2, int VAR_3,
       u64 VAR_4)
{
 int VAR_5, VAR_6 = 0;

 if (!(VAR_4 & (1 << VAR_3)))
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_4 & (1 << VAR_5))
   VAR_6++;
 }

 *VAR_1 = VAR_2->regs[VAR_6];
 return 0;
}
