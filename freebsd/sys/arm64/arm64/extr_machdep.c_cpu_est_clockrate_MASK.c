
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct pcpu {scalar_t__ pc_clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pcpu* FUNC_0 (int) ;

int
FUNC_1(int VAR_2, uint64_t *VAR_3)
{
 struct pcpu *VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 == ((void*)0) || VAR_3 == ((void*)0))
  return (VAR_0);

 if (VAR_4->pc_clock == 0)
  return (VAR_1);

 *VAR_3 = VAR_4->pc_clock;
 return (0);
}
