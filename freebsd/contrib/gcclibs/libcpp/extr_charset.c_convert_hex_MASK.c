
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar ;
struct _cpp_strbuf {int dummy; } ;
typedef int cppchar_t ;
typedef int cpp_reader ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *,int,struct _cpp_strbuf*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 size_t FUNC_6 (size_t) ;

__attribute__((used)) static const uchar *
FUNC_7 (cpp_reader *VAR_5, const uchar *VAR_6, const uchar *VAR_7,
      struct _cpp_strbuf *VAR_8, bool VAR_9)
{
  cppchar_t VAR_10, VAR_11 = 0, VAR_12 = 0;
  int VAR_13 = 0;
  size_t VAR_14 = (VAR_9 ? FUNC_0 (VAR_5, VAR_4)
    : FUNC_0 (VAR_5, VAR_3));
  size_t VAR_15 = FUNC_6 (VAR_14);

  if (FUNC_1 (VAR_5))
    FUNC_2 (VAR_5, VAR_2,
        "the meaning of '\\x' is different in traditional C");

  VAR_6++;
  while (VAR_6 < VAR_7)
    {
      VAR_10 = *VAR_6;
      if (! FUNC_4 (VAR_10))
 break;
      VAR_6++;
      VAR_12 |= VAR_11 ^ (VAR_11 << 4 >> 4);
      VAR_11 = (VAR_11 << 4) + FUNC_5 (VAR_10);
      VAR_13 = 1;
    }

  if (!VAR_13)
    {
      FUNC_2 (VAR_5, VAR_0,
   "\\x used with no following hex digits");
      return VAR_6;
    }

  if (VAR_12 | (VAR_11 != (VAR_11 & VAR_15)))
    {
      FUNC_2 (VAR_5, VAR_1,
   "hex escape sequence out of range");
      VAR_11 &= VAR_15;
    }

  FUNC_3 (VAR_5, VAR_11, VAR_8, VAR_9);

  return VAR_6;
}
