
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int va_list ;
typedef int mbstate_t ;
typedef int locale_t ;
struct TYPE_5__ {unsigned char* _base; size_t _size; } ;
struct TYPE_6__ {unsigned char* _p; size_t _r; int _read; TYPE_1__ _bf; int _flags; } ;
typedef TYPE_2__ FILE ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,int const*,int ) ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int const*) ;
 size_t FUNC_5 (char*,int const**,int ,int *,int ) ;

int
FUNC_6(const wchar_t * __restrict VAR_6, locale_t VAR_7,
  const wchar_t * __restrict VAR_8, va_list VAR_9)
{
 static const mbstate_t VAR_10;
 mbstate_t VAR_11;
 FILE VAR_12 = VAR_1;
 char *VAR_13;
 size_t VAR_14;
 int VAR_15;
 const wchar_t *VAR_16;
 FUNC_0(VAR_7);





 if ((VAR_13 = FUNC_3(FUNC_4(VAR_6) * VAR_2 + 1)) == ((void*)0))
  return (VAR_0);
 VAR_11 = VAR_10;
 VAR_16 = VAR_6;
 if ((VAR_14 = FUNC_5(VAR_13, &VAR_16, VAR_3, &VAR_11, VAR_7)) == (size_t)-1) {
  FUNC_2(VAR_13);
  return (VAR_0);
 }
 VAR_12._flags = VAR_4;
 VAR_12._bf._base = VAR_12._p = (unsigned char *)VAR_13;
 VAR_12._bf._size = VAR_12._r = VAR_14;
 VAR_12._read = VAR_5;
 VAR_15 = FUNC_1(&VAR_12, VAR_7, VAR_8, VAR_9);
 FUNC_2(VAR_13);

 return (VAR_15);
}
