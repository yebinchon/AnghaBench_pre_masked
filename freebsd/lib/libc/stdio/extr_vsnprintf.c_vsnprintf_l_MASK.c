
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int locale_t ;
typedef int __va_list ;
struct TYPE_5__ {unsigned char* _base; size_t _size; } ;
struct TYPE_6__ {int _flags; unsigned char* _p; size_t _w; TYPE_1__ _bf; } ;
typedef TYPE_2__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int ) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int ,char const*,int ) ;
 int VAR_6 ;

int
FUNC_2(char * __restrict VAR_7, size_t VAR_8, locale_t VAR_9,
  const char * __restrict VAR_10, __va_list VAR_11)
{
 size_t VAR_12;
 int VAR_13;
 char VAR_14[2];
 FILE VAR_15 = VAR_2;
 FUNC_0(VAR_9);

 VAR_12 = VAR_8;
 if (VAR_8 != 0)
  VAR_8--;
 if (VAR_8 > VAR_3) {
  VAR_6 = VAR_1;
  *VAR_7 = '\0';
  return (VAR_0);
 }

 if (VAR_8 == 0) {
  if (VAR_12 > 0)
     *VAR_7 = '\0';
  VAR_7 = VAR_14;
  VAR_8 = 1;
 }
 VAR_15._flags = VAR_5 | VAR_4;
 VAR_15._bf._base = VAR_15._p = (unsigned char *)VAR_7;
 VAR_15._bf._size = VAR_15._w = VAR_8;
 VAR_13 = FUNC_1(&VAR_15, VAR_9, VAR_10, VAR_11);
 if (VAR_12 > 0)
  *VAR_15._p = '\0';
 return (VAR_13);
}
