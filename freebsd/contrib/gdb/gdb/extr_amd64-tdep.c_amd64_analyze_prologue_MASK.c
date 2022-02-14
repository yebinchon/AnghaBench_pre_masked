
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd64_frame_cache {int sp_offset; scalar_t__ frameless_p; scalar_t__* saved_regs; } ;
typedef scalar_t__ CORE_ADDR ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (scalar_t__,unsigned char*,int) ;
 unsigned char FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_3 (CORE_ADDR VAR_1, CORE_ADDR VAR_2,
   struct amd64_frame_cache *VAR_3)
{
  static unsigned char VAR_4[3] = { 0x48, 0x89, 0xe5 };
  unsigned char VAR_5[3];
  unsigned char VAR_6;

  if (VAR_2 <= VAR_1)
    return VAR_2;

  VAR_6 = FUNC_2 (VAR_1, 1);

  if (VAR_6 == 0x55)
    {


      VAR_3->saved_regs[VAR_0] = 0;
      VAR_3->sp_offset += 8;


      if (VAR_2 <= VAR_1 + 1)
        return VAR_2;


      FUNC_1 (VAR_1 + 1, VAR_5, 3);
      if (FUNC_0 (VAR_5, VAR_4, 3) != 0)
 return VAR_1 + 1;


      VAR_3->frameless_p = 0;
      return VAR_1 + 4;
    }

  return VAR_1;
}
