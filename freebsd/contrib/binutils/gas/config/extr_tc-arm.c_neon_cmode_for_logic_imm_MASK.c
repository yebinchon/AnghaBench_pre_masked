
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2 (unsigned VAR_1, unsigned *VAR_2, int VAR_3)
{

  if (VAR_3 == 8)
    {



      VAR_1 |= VAR_1 << 8;
      VAR_3 = 16;
    }

  if (VAR_3 >= 32)
    {
      if (VAR_1 == (VAR_1 & 0x000000ff))
 {
   *VAR_2 = VAR_1;
   return 0x1;
 }
      else if (VAR_1 == (VAR_1 & 0x0000ff00))
 {
   *VAR_2 = VAR_1 >> 8;
   return 0x3;
 }
      else if (VAR_1 == (VAR_1 & 0x00ff0000))
 {
   *VAR_2 = VAR_1 >> 16;
   return 0x5;
 }
      else if (VAR_1 == (VAR_1 & 0xff000000))
 {
   *VAR_2 = VAR_1 >> 24;
   return 0x7;
 }
      if ((VAR_1 & 0xffff) != (VAR_1 >> 16))
 goto bad_immediate;
      VAR_1 &= 0xffff;
    }

  if (VAR_1 == (VAR_1 & 0x000000ff))
    {
      *VAR_2 = VAR_1;
      return 0x9;
    }
  else if (VAR_1 == (VAR_1 & 0x0000ff00))
    {
      *VAR_2 = VAR_1 >> 8;
      return 0xb;
    }

  bad_immediate:
  FUNC_1 (FUNC_0("immediate value out of range"));
  return VAR_0;
}
