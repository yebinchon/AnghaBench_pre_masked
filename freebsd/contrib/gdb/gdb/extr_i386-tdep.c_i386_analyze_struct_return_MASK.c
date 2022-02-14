
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i386_frame_cache {int sp_offset; int pc_in_eax; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (scalar_t__,unsigned char*,int) ;
 unsigned char FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_3 (CORE_ADDR VAR_0, CORE_ADDR VAR_1,
       struct i386_frame_cache *VAR_2)
{
  static unsigned char VAR_3[3] = { 0x87, 0x04, 0x24 };
  static unsigned char VAR_4[4] = { 0x87, 0x44, 0x24, 0x00 };
  unsigned char VAR_5[4];
  unsigned char VAR_6;

  if (VAR_1 <= VAR_0)
    return VAR_0;

  VAR_6 = FUNC_2 (VAR_0, 1);

  if (VAR_6 != 0x58)
    return VAR_0;

  FUNC_1 (VAR_0 + 1, VAR_5, 4);
  if (FUNC_0 (VAR_5, VAR_3, 3) != 0 && FUNC_0 (VAR_5, VAR_4, 4) != 0)
    return VAR_0;

  if (VAR_1 == VAR_0)
    {
      VAR_2->sp_offset += 4;
      return VAR_1;
    }

  if (VAR_1 == VAR_0 + 1)
    {
      VAR_2->pc_in_eax = 1;
      return VAR_1;
    }

  if (VAR_5[1] == VAR_3[1])
    return VAR_0 + 4;
  else
    return VAR_0 + 5;
}
