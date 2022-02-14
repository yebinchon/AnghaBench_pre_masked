
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int locale_t ;
typedef int __va_list ;
struct TYPE_5__ {unsigned char* _base; int _size; } ;
struct TYPE_6__ {unsigned char* _p; int _read; int _r; TYPE_1__ _bf; int _flags; } ;
typedef TYPE_2__ FILE ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,char const*,int ) ;
 int VAR_2 ;
 int FUNC_2 (char const*) ;

int
FUNC_3(const char * __restrict VAR_3, locale_t VAR_4,
  const char * __restrict VAR_5, __va_list VAR_6)
{
 FILE VAR_7 = VAR_0;
 FUNC_0(VAR_4);

 VAR_7._flags = VAR_1;
 VAR_7._bf._base = VAR_7._p = (unsigned char *)VAR_3;
 VAR_7._bf._size = VAR_7._r = FUNC_2(VAR_3);
 VAR_7._read = VAR_2;
 return (FUNC_1(&VAR_7, VAR_4, VAR_5, VAR_6));
}
