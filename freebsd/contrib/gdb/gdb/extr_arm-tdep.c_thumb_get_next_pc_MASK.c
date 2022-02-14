
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (unsigned short,int,int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (char*) ;
 unsigned short FUNC_5 (int,int) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (unsigned short,int ,int) ;

CORE_ADDR
FUNC_8 (CORE_ADDR VAR_3)
{
  unsigned long VAR_4 = ((unsigned long) VAR_3) + 4;
  unsigned short VAR_5 = FUNC_5 (VAR_3, 2);
  CORE_ADDR VAR_6 = VAR_3 + 2;
  unsigned long VAR_7;

  if ((VAR_5 & 0xff00) == 0xbd00)
    {
      CORE_ADDR VAR_8;



      VAR_7 = FUNC_1 (FUNC_2 (VAR_5, 0, 7)) * VAR_2;
      VAR_8 = FUNC_6 (VAR_1);
      VAR_6 = (CORE_ADDR) FUNC_5 (VAR_8 + VAR_7, 4);
      VAR_6 = FUNC_0 (VAR_6);
      if (VAR_6 == VAR_3)
 FUNC_4 ("Infinite loop detected");
    }
  else if ((VAR_5 & 0xf000) == 0xd000)
    {
      unsigned long VAR_9 = FUNC_6 (VAR_0);
      unsigned long VAR_10 = FUNC_2 (VAR_5, 8, 11);
      if (VAR_10 != 0x0f && FUNC_3 (VAR_10, VAR_9))
 VAR_6 = VAR_4 + (FUNC_7 (VAR_5, 0, 7) << 1);
    }
  else if ((VAR_5 & 0xf800) == 0xe000)
    {
      VAR_6 = VAR_4 + (FUNC_7 (VAR_5, 0, 10) << 1);
    }
  else if ((VAR_5 & 0xf800) == 0xf000)
    {
      unsigned short VAR_11 = FUNC_5 (VAR_3 + 2, 2);
      VAR_7 = (FUNC_7 (VAR_5, 0, 10) << 12) + (FUNC_2 (VAR_11, 0, 10) << 1);
      VAR_6 = VAR_4 + VAR_7;

      if (FUNC_2 (VAR_11, 11, 12) == 1)
 VAR_6 = VAR_6 & 0xfffffffc;
    }
  else if ((VAR_5 & 0xff00) == 0x4700)
    {
      if (FUNC_2 (VAR_5, 3, 6) == 0x0f)
 VAR_6 = VAR_4;
      else
 VAR_6 = FUNC_6 (FUNC_2 (VAR_5, 3, 6));

      VAR_6 = FUNC_0 (VAR_6);
      if (VAR_6 == VAR_3)
 FUNC_4 ("Infinite loop detected");
    }

  return VAR_6;
}
