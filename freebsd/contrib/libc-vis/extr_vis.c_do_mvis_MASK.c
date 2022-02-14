
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wint_t ;
typedef int wchar_t ;


 void* FUNC_0 (unsigned int) ;
 int * FUNC_1 (int *,int,int,int,int const*) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (char*,int) ;

__attribute__((used)) static wchar_t *
FUNC_4(wchar_t *VAR_0, wint_t VAR_1, int VAR_2, wint_t VAR_3, const wchar_t *VAR_4)
{
 if ((VAR_1 != L'\n') &&

     ((FUNC_2(VAR_1) && (VAR_3 == L'\r' || VAR_3 == L'\n')) ||

     (!FUNC_2(VAR_1) && (VAR_1 < 33 || (VAR_1 > 60 && VAR_1 < 62) || VAR_1 > 126)) ||

     FUNC_3(L"#$@[\\]^`{|}~", VAR_1) != ((void*)0))) {
  *VAR_0++ = L'=';
  *VAR_0++ = FUNC_0(((unsigned int)VAR_1 >> 4) & 0xf);
  *VAR_0++ = FUNC_0((unsigned int)VAR_1 & 0xf);
 } else
  VAR_0 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 return VAR_0;
}
