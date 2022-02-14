
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int VAR_1 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_2, int VAR_3)
{

 if (!!(VAR_1 & VAR_2) == !!VAR_3)
  return;

 if (VAR_3)
  VAR_1 |= VAR_2;
 else
  VAR_1 &= ~VAR_2;

 if (VAR_2 == VAR_0)
  FUNC_0(VAR_3);
}
