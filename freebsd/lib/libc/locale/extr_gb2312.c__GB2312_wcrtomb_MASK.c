
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
typedef int mbstate_t ;
struct TYPE_2__ {scalar_t__ count; } ;
typedef TYPE_1__ _GB2312State ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static size_t
FUNC_0(char * __restrict VAR_2, wchar_t VAR_3, mbstate_t * __restrict VAR_4)
{
 _GB2312State *VAR_5;

 VAR_5 = (_GB2312State *)VAR_4;

 if (VAR_5->count != 0) {
  VAR_1 = VAR_0;
  return ((size_t)-1);
 }

 if (VAR_2 == ((void*)0))

  return (1);
 if (VAR_3 & 0x8000) {
  *VAR_2++ = (VAR_3 >> 8) & 0xff;
  *VAR_2 = VAR_3 & 0xff;
  return (2);
 }
 *VAR_2 = VAR_3 & 0xff;
 return (1);
}
