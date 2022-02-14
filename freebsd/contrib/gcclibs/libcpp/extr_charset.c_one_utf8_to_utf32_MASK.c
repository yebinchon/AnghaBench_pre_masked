
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar ;
typedef scalar_t__ iconv_t ;
typedef int cppchar_t ;


 int VAR_0 ;
 int FUNC_0 (int const**,size_t*,int*) ;

__attribute__((used)) static inline int
FUNC_1 (iconv_t VAR_1, const uchar **VAR_2, size_t *VAR_3,
     uchar **VAR_4, size_t *VAR_5)
{
  uchar *VAR_6;
  cppchar_t VAR_7 = 0;
  int VAR_8;


  if (*VAR_5 < 4)
    return VAR_0;

  VAR_8 = FUNC_0 (VAR_2, VAR_3, &VAR_7);
  if (VAR_8)
    return VAR_8;

  VAR_6 = *VAR_4;
  VAR_6[VAR_1 ? 3 : 0] = (VAR_7 & 0x000000FF);
  VAR_6[VAR_1 ? 2 : 1] = (VAR_7 & 0x0000FF00) >> 8;
  VAR_6[VAR_1 ? 1 : 2] = (VAR_7 & 0x00FF0000) >> 16;
  VAR_6[VAR_1 ? 0 : 3] = (VAR_7 & 0xFF000000) >> 24;

  *VAR_4 += 4;
  *VAR_5 -= 4;
  return 0;
}
