
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int locale_t ;
typedef int __va_list ;
struct TYPE_5__ {char* _base; int _size; } ;
struct TYPE_6__ {int _flags; char* _p; int _w; TYPE_1__ _bf; } ;
typedef TYPE_2__ FILE ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,char const*,int ) ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;

int
FUNC_4(char **VAR_6, locale_t VAR_7, const char *VAR_8, __va_list VAR_9)
{
 FILE VAR_10 = VAR_1;
 int VAR_11;
 FUNC_0(VAR_7);

 VAR_10._flags = VAR_4 | VAR_3 | VAR_2;
 VAR_10._bf._base = VAR_10._p = FUNC_3(128);
 if (VAR_10._bf._base == ((void*)0)) {
  *VAR_6 = ((void*)0);
  VAR_5 = VAR_0;
  return (-1);
 }
 VAR_10._bf._size = VAR_10._w = 127;
 VAR_11 = FUNC_1(&VAR_10, VAR_7, VAR_8, VAR_9);
 if (VAR_11 < 0) {
  FUNC_2(VAR_10._bf._base);
  *VAR_6 = ((void*)0);
  VAR_5 = VAR_0;
  return (-1);
 }
 *VAR_10._p = '\0';
 *VAR_6 = (char *)VAR_10._bf._base;
 return (VAR_11);
}
