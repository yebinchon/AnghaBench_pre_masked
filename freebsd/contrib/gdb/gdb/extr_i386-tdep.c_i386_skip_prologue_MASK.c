
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i386_frame_cache {int locals; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__,int,struct i386_frame_cache*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_3 (CORE_ADDR VAR_0)
{
  static unsigned char VAR_1[6] =
  {
    0xe8, 0, 0, 0, 0,
    0x5b,
  };
  struct i386_frame_cache VAR_2;
  CORE_ADDR VAR_3;
  unsigned char VAR_4;
  int VAR_5;

  VAR_2.locals = -1;
  VAR_3 = FUNC_0 (VAR_0, 0xffffffff, &VAR_2);
  if (VAR_2.locals < 0)
    return VAR_0;
  for (VAR_5 = 0; VAR_5 < 6; VAR_5++)
    {
      VAR_4 = FUNC_2 (VAR_3 + VAR_5, 1);
      if (VAR_1[VAR_5] != VAR_4)
 break;
    }
  if (VAR_5 == 6)
    {
      int VAR_6 = 6;

      VAR_4 = FUNC_2 (VAR_3 + VAR_6, 1);

      if (VAR_4 == 0x89)
 {
   VAR_4 = FUNC_2 (VAR_3 + VAR_6 + 1, 1);

   if (VAR_4 == 0x5d)
     VAR_6 += 3;
   else if (VAR_4 == 0x9d)
     VAR_6 += 6;
   else
     VAR_6 = 0;

   VAR_4 = FUNC_2 (VAR_3 + VAR_6, 1);
 }


      if (VAR_6 > 0 && VAR_4 == 0x81
   && FUNC_2 (VAR_3 + VAR_6 + 1, 1) == 0xc3)
 {
   VAR_3 += VAR_6 + 6;
 }
    }

  return FUNC_1 (VAR_3);
}
