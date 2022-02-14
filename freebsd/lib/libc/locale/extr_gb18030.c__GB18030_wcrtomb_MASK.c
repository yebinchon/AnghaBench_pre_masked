
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
typedef int mbstate_t ;
struct TYPE_2__ {scalar_t__ count; } ;
typedef TYPE_1__ _GB18030State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static size_t
FUNC_0(char * __restrict VAR_3, wchar_t VAR_4, mbstate_t * __restrict VAR_5)
{
 _GB18030State *VAR_6;
 size_t VAR_7;
 int VAR_8;

 VAR_6 = (_GB18030State *)VAR_5;

 if (VAR_6->count != 0) {
  VAR_2 = VAR_1;
  return ((size_t)-1);
 }

 if (VAR_3 == ((void*)0))

  return (1);
 if ((VAR_4 & ~0x7fffffff) != 0)
  goto ilseq;
 if (VAR_4 & 0x7f000000) {

  VAR_4 |= 0x80000000;
  VAR_8 = (VAR_4 >> 24) & 0xff;
  if (VAR_8 < 0x81 || VAR_8 > 0xfe)
   goto ilseq;
  *VAR_3++ = VAR_8;
  VAR_8 = (VAR_4 >> 16) & 0xff;
  if (VAR_8 < 0x30 || VAR_8 > 0x39)
   goto ilseq;
  *VAR_3++ = VAR_8;
  VAR_8 = (VAR_4 >> 8) & 0xff;
  if (VAR_8 < 0x81 || VAR_8 > 0xfe)
   goto ilseq;
  *VAR_3++ = VAR_8;
  VAR_8 = VAR_4 & 0xff;
  if (VAR_8 < 0x30 || VAR_8 > 0x39)
   goto ilseq;
  *VAR_3++ = VAR_8;
  VAR_7 = 4;
 } else if (VAR_4 & 0x00ff0000)
  goto ilseq;
 else if (VAR_4 & 0x0000ff00) {
  VAR_8 = (VAR_4 >> 8) & 0xff;
  if (VAR_8 < 0x81 || VAR_8 > 0xfe)
   goto ilseq;
  *VAR_3++ = VAR_8;
  VAR_8 = VAR_4 & 0xff;
  if (VAR_8 < 0x40 || VAR_8 == 0x7f || VAR_8 == 0xff)
   goto ilseq;
  *VAR_3++ = VAR_8;
  VAR_7 = 2;
 } else if (VAR_4 <= 0x7f) {
  *VAR_3++ = VAR_4;
  VAR_7 = 1;
 } else
  goto ilseq;

 return (VAR_7);
ilseq:
 VAR_2 = VAR_0;
 return ((size_t)-1);
}
