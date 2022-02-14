
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int wint_t ;
typedef int wchar_t ;
typedef int locale_t ;
struct TYPE_9__ {size_t _size; scalar_t__ _base; } ;
struct TYPE_10__ {int _flags; TYPE_1__ _lb; } ;
typedef TYPE_2__ FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 size_t VAR_0 ;
 int FUNC_3 (TYPE_2__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,size_t) ;

wchar_t *
FUNC_7(FILE * __restrict VAR_3, size_t *VAR_4, locale_t VAR_5)
{
 wchar_t *VAR_6;
 wint_t VAR_7;
 size_t VAR_8;
 int VAR_9;

 FUNC_0(VAR_5);

 FUNC_1(VAR_3);
 FUNC_3(VAR_3, 1);

 VAR_9 = VAR_3->_flags & VAR_2;
 VAR_3->_flags &= ~VAR_2;

 VAR_8 = 0;
 while ((VAR_7 = FUNC_4(VAR_3, VAR_5)) != VAR_1) {

  if (VAR_8 * sizeof(wchar_t) >= VAR_3->_lb._size &&
      FUNC_6(VAR_3, (VAR_8 + 512) * sizeof(wchar_t))) {
   VAR_3->_flags |= VAR_2;
   goto error;
  }
  *((wchar_t *)VAR_3->_lb._base + VAR_8++) = VAR_7;
  if (VAR_7 == L'\n')
   break;
 }

 if (FUNC_5(VAR_3))
  goto error;

 VAR_3->_flags |= VAR_9;
 if (VAR_8 == 0)
  goto error;

 *VAR_4 = VAR_8;
 VAR_6 = (wchar_t *)VAR_3->_lb._base;
end:
 FUNC_2();
 return (VAR_6);

error:
 *VAR_4 = 0;
 VAR_6 = ((void*)0);
 goto end;
}
