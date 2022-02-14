
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

void FUNC_1(unsigned long *VAR_0, const unsigned long *VAR_1,
    const unsigned long *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5 = FUNC_0(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  VAR_0[VAR_4] = VAR_1[VAR_4] ^ VAR_2[VAR_4];
}
