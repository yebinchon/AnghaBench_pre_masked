
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar ;
typedef scalar_t__ iconv_t ;
typedef int cppchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const**,size_t*,int*) ;

__attribute__((used)) static inline int
FUNC_1 (iconv_t VAR_2, const uchar **VAR_3, size_t *VAR_4,
     uchar **VAR_5, size_t *VAR_6)
{
  int VAR_7;
  cppchar_t VAR_8 = 0;
  const uchar *VAR_9 = *VAR_3;
  size_t VAR_10 = *VAR_4;
  uchar *VAR_11 = *VAR_5;

  VAR_7 = FUNC_0 (VAR_3, VAR_4, &VAR_8);
  if (VAR_7)
    return VAR_7;

  if (VAR_8 > 0x0010FFFF)
    {
      *VAR_3 = VAR_9;
      *VAR_4 = VAR_10;
      return VAR_1;
    }

  if (VAR_8 < 0xFFFF)
    {
      if (*VAR_6 < 2)
 {
   *VAR_3 = VAR_9;
   *VAR_4 = VAR_10;
   return VAR_0;
 }
      VAR_11[VAR_2 ? 1 : 0] = (VAR_8 & 0x00FF);
      VAR_11[VAR_2 ? 0 : 1] = (VAR_8 & 0xFF00) >> 8;

      *VAR_5 += 2;
      *VAR_6 -= 2;
      return 0;
    }
  else
    {
      cppchar_t VAR_12, VAR_13;

      if (*VAR_6 < 4)
 {
   *VAR_3 = VAR_9;
   *VAR_4 = VAR_10;
   return VAR_0;
 }

      VAR_12 = (VAR_8 - 0x10000) / 0x400 + 0xD800;
      VAR_13 = (VAR_8 - 0x10000) % 0x400 + 0xDC00;



      VAR_11[VAR_2 ? 1 : 0] = (VAR_12 & 0x00FF);
      VAR_11[VAR_2 ? 0 : 1] = (VAR_12 & 0xFF00) >> 8;
      VAR_11[VAR_2 ? 3 : 2] = (VAR_13 & 0x00FF);
      VAR_11[VAR_2 ? 2 : 3] = (VAR_13 & 0xFF00) >> 8;

      *VAR_5 += 4;
      *VAR_6 -= 4;
      return 0;
    }
}
