
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long FUNC_0 (int ,unsigned long) ;

__attribute__((used)) static unsigned long
FUNC_1 (unsigned long VAR_1, int VAR_2)
{
  unsigned long VAR_3 = 0;



  if ((VAR_1 & 1) && !(VAR_1 & 0x80) && VAR_2 >= 0 && VAR_2 < 1024)
    {
      VAR_1 &= ~0xfff;
      VAR_3 = FUNC_0 (VAR_0, VAR_1 + 4*VAR_2);
    }
  return VAR_3;
}
