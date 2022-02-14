
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uchar ;
struct _cpp_strbuf {int dummy; } ;
typedef char cppchar_t ;
typedef int cpp_reader ;


 int VAR_0 ;
 size_t FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,char,struct _cpp_strbuf*,int) ;
 int VAR_2 ;
 size_t FUNC_3 (size_t) ;

__attribute__((used)) static const uchar *
FUNC_4 (cpp_reader *VAR_3, const uchar *VAR_4, const uchar *VAR_5,
      struct _cpp_strbuf *VAR_6, bool VAR_7)
{
  size_t VAR_8 = 0;
  cppchar_t VAR_9, VAR_10 = 0;
  size_t VAR_11 = (VAR_7 ? FUNC_0 (VAR_3, VAR_2)
    : FUNC_0 (VAR_3, VAR_1));
  size_t VAR_12 = FUNC_3 (VAR_11);
  bool VAR_13 = 0;

  while (VAR_4 < VAR_5 && VAR_8++ < 3)
    {
      VAR_9 = *VAR_4;
      if (VAR_9 < '0' || VAR_9 > '7')
 break;
      VAR_4++;
      VAR_13 |= VAR_10 ^ (VAR_10 << 3 >> 3);
      VAR_10 = (VAR_10 << 3) + VAR_9 - '0';
    }

  if (VAR_10 != (VAR_10 & VAR_12))
    {
      FUNC_1 (VAR_3, VAR_0,
   "octal escape sequence out of range");
      VAR_10 &= VAR_12;
    }

  FUNC_2 (VAR_3, VAR_10, VAR_6, VAR_7);

  return VAR_4;
}
