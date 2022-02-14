
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i386_frame_cache {scalar_t__ locals; int sp_offset; scalar_t__* saved_regs; } ;
typedef scalar_t__ CORE_ADDR ;


 unsigned char FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_1 (CORE_ADDR VAR_0, CORE_ADDR VAR_1,
        struct i386_frame_cache *VAR_2)
{
  CORE_ADDR VAR_3 = 0;
  unsigned char VAR_4;
  int VAR_5;

  if (VAR_2->locals > 0)
    VAR_3 -= VAR_2->locals;
  for (VAR_5 = 0; VAR_5 < 8 && VAR_0 < VAR_1; VAR_5++)
    {
      VAR_4 = FUNC_0 (VAR_0, 1);
      if (VAR_4 < 0x50 || VAR_4 > 0x57)
 break;

      VAR_3 -= 4;
      VAR_2->saved_regs[VAR_4 - 0x50] = VAR_3;
      VAR_2->sp_offset += 4;
      VAR_0++;
    }

  return VAR_0;
}
