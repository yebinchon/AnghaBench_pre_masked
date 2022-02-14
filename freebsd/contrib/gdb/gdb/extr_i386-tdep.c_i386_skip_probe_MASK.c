
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (scalar_t__,unsigned char*,int) ;
 unsigned char FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (CORE_ADDR VAR_0)
{
  unsigned char VAR_1[8];
  unsigned char VAR_2;

  VAR_2 = FUNC_1 (VAR_0, 1);

  if (VAR_2 == 0x68 || VAR_2 == 0x6a)
    {
      int VAR_3;



      if (VAR_2 == 0x68)
 VAR_3 = 5;
      else
 VAR_3 = 2;



      FUNC_0 (VAR_0 + VAR_3, VAR_1, sizeof (VAR_1));
      if (VAR_1[0] == 0xe8 && VAR_1[6] == 0xc4 && VAR_1[7] == 0x4)
 VAR_0 += VAR_3 + sizeof (VAR_1);
    }

  return VAR_0;
}
