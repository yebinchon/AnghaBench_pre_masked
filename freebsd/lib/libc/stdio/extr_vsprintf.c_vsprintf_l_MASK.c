
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int locale_t ;
typedef int __va_list ;
struct TYPE_5__ {unsigned char* _base; int _size; } ;
struct TYPE_6__ {int _flags; unsigned char* _p; int _w; TYPE_1__ _bf; } ;
typedef TYPE_2__ FILE ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,char const*,int ) ;

int
FUNC_2(char * __restrict VAR_4, locale_t VAR_5,
  const char * __restrict VAR_6, __va_list VAR_7)
{
 int VAR_8;
 FILE VAR_9 = VAR_0;
 FUNC_0(VAR_5);

 VAR_9._flags = VAR_3 | VAR_2;
 VAR_9._bf._base = VAR_9._p = (unsigned char *)VAR_4;
 VAR_9._bf._size = VAR_9._w = VAR_1;
 VAR_8 = FUNC_1(&VAR_9, VAR_5, VAR_6, VAR_7);
 *VAR_9._p = 0;
 return (VAR_8);
}
