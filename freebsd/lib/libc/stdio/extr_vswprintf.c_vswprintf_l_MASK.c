
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int mbstate_t ;
typedef int locale_t ;
typedef int __va_list ;
struct TYPE_5__ {unsigned char* _base; int _size; } ;
struct TYPE_6__ {int _flags; unsigned char* _p; int _w; TYPE_1__ _bf; } ;
typedef TYPE_2__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (int ) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_2__*,int ,int const*,int ) ;
 int VAR_9 ;
 int FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (int) ;
 size_t FUNC_4 (int*,char const**,size_t,int *,int ) ;

int
FUNC_5(wchar_t * __restrict VAR_10, size_t VAR_11, locale_t VAR_12,
  const wchar_t * __restrict VAR_13, __va_list VAR_14)
{
 static const mbstate_t VAR_15;
 mbstate_t VAR_16;
 FILE VAR_17 = VAR_4;
 char *VAR_18;
 int VAR_19, VAR_20;
 size_t VAR_21;
 FUNC_0(VAR_12);

 if (VAR_11 == 0) {
  VAR_9 = VAR_1;
  return (-1);
 }
 if (VAR_11 - 1 > VAR_5) {
  VAR_9 = VAR_3;
  *VAR_10 = L'\0';
  return (-1);
 }

 VAR_17._flags = VAR_8 | VAR_7 | VAR_6;
 VAR_17._bf._base = VAR_17._p = (unsigned char *)FUNC_3(128);
 if (VAR_17._bf._base == ((void*)0)) {
  VAR_9 = VAR_2;
  *VAR_10 = L'\0';
  return (-1);
 }
 VAR_17._bf._size = VAR_17._w = 127;
 VAR_19 = FUNC_1(&VAR_17, VAR_12, VAR_13, VAR_14);
 if (VAR_19 < 0) {
  VAR_20 = VAR_9;
  FUNC_2(VAR_17._bf._base);
  VAR_9 = VAR_20;
  *VAR_10 = L'\0';
  return (-1);
 }
 *VAR_17._p = '\0';
 VAR_18 = VAR_17._bf._base;




 VAR_16 = VAR_15;
 VAR_21 = FUNC_4(VAR_10, (const char **)&VAR_18, VAR_11, &VAR_16, VAR_12);
 FUNC_2(VAR_17._bf._base);
 if (VAR_21 == (size_t)-1) {
  VAR_9 = VAR_0;
  *VAR_10 = L'\0';
  return (-1);
 }
 if (VAR_21 == VAR_11) {
  VAR_10[VAR_11 - 1] = L'\0';
  VAR_9 = VAR_3;
  return (-1);
 }

 return (VAR_19);
}
