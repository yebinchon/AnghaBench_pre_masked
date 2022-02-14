
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
typedef int mbstate_t ;
struct TYPE_2__ {scalar_t__ want; } ;
typedef TYPE_1__ _UTF8State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static size_t
FUNC_0(char * __restrict VAR_3, wchar_t VAR_4, mbstate_t * __restrict VAR_5)
{
 _UTF8State *VAR_6;
 unsigned char VAR_7;
 int VAR_8, VAR_9;

 VAR_6 = (_UTF8State *)VAR_5;

 if (VAR_6->want != 0) {
  VAR_2 = VAR_1;
  return ((size_t)-1);
 }

 if (VAR_3 == ((void*)0))

  return (1);







 if ((VAR_4 & ~0x7f) == 0) {

  *VAR_3 = (char)VAR_4;
  return (1);
 } else if ((VAR_4 & ~0x7ff) == 0) {
  VAR_7 = 0xc0;
  VAR_9 = 2;
 } else if ((VAR_4 & ~0xffff) == 0) {
  if (VAR_4 >= 0xd800 && VAR_4 <= 0xdfff) {
   VAR_2 = VAR_0;
   return ((size_t)-1);
  }
  VAR_7 = 0xe0;
  VAR_9 = 3;
 } else if (VAR_4 >= 0 && VAR_4 <= 0x10ffff) {
  VAR_7 = 0xf0;
  VAR_9 = 4;
 } else {
  VAR_2 = VAR_0;
  return ((size_t)-1);
 }







 for (VAR_8 = VAR_9 - 1; VAR_8 > 0; VAR_8--) {
  VAR_3[VAR_8] = (VAR_4 & 0x3f) | 0x80;
  VAR_4 >>= 6;
 }
 *VAR_3 = (VAR_4 & 0xff) | VAR_7;

 return (VAR_9);
}
