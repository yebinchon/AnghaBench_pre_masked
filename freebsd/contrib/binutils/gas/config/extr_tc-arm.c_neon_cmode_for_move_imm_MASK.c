
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum neon_el_type { ____Placeholder_neon_el_type } neon_el_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static int
FUNC_4 (unsigned VAR_2, unsigned VAR_3, int VAR_4,
    unsigned *VAR_5, int *VAR_6, int VAR_7,
    enum neon_el_type VAR_8)
{


  if (VAR_8 == VAR_1 && !VAR_4)
    return VAR_0;

  if (VAR_8 == VAR_1 && FUNC_0 (VAR_2) && VAR_3 == 0)
    {
      if (VAR_7 != 32 || *VAR_6 == 1)
        return VAR_0;
      *VAR_5 = FUNC_2 (VAR_2);
      return 0xf;
    }

  if (VAR_7 == 64)
    {
      if (FUNC_1 (VAR_3)
   && FUNC_1 (VAR_2))
 {
   if (*VAR_6 == 1)
     return VAR_0;
   *VAR_5 = (FUNC_3 (VAR_3) << 4)
       | FUNC_3 (VAR_2);
   *VAR_6 = 1;
   return 0xe;
 }

      if (VAR_3 != VAR_2)
 return VAR_0;
    }

  if (VAR_7 >= 32)
    {
      if (VAR_2 == (VAR_2 & 0x000000ff))
 {
   *VAR_5 = VAR_2;
   return 0x0;
 }
      else if (VAR_2 == (VAR_2 & 0x0000ff00))
 {
   *VAR_5 = VAR_2 >> 8;
   return 0x2;
 }
      else if (VAR_2 == (VAR_2 & 0x00ff0000))
 {
   *VAR_5 = VAR_2 >> 16;
   return 0x4;
 }
      else if (VAR_2 == (VAR_2 & 0xff000000))
 {
   *VAR_5 = VAR_2 >> 24;
   return 0x6;
 }
      else if (VAR_2 == ((VAR_2 & 0x0000ff00) | 0x000000ff))
 {
   *VAR_5 = (VAR_2 >> 8) & 0xff;
   return 0xc;
 }
      else if (VAR_2 == ((VAR_2 & 0x00ff0000) | 0x0000ffff))
 {
   *VAR_5 = (VAR_2 >> 16) & 0xff;
   return 0xd;
 }

      if ((VAR_2 & 0xffff) != (VAR_2 >> 16))
 return VAR_0;
      VAR_2 &= 0xffff;
    }

  if (VAR_7 >= 16)
    {
      if (VAR_2 == (VAR_2 & 0x000000ff))
 {
   *VAR_5 = VAR_2;
   return 0x8;
 }
      else if (VAR_2 == (VAR_2 & 0x0000ff00))
 {
   *VAR_5 = VAR_2 >> 8;
   return 0xa;
 }

      if ((VAR_2 & 0xff) != (VAR_2 >> 8))
 return VAR_0;
      VAR_2 &= 0xff;
    }

  if (VAR_2 == (VAR_2 & 0x000000ff))
    {

      if (*VAR_6 == 1)
 return VAR_0;
      *VAR_5 = VAR_2;
      return 0xe;
    }

  return VAR_0;
}
