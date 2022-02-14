
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wint_t ;
typedef int wchar_t ;


 int * FUNC_0 (int *,int,int,int,int const*) ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (unsigned int) ;

__attribute__((used)) static wchar_t *
FUNC_3(wchar_t *VAR_0, wint_t VAR_1, int VAR_2, wint_t VAR_3, const wchar_t *VAR_4)
{
 if (FUNC_1(VAR_1)

     || VAR_1 == L'$' || VAR_1 == L'-' || VAR_1 == L'_' || VAR_1 == L'.' || VAR_1 == L'+'

     || VAR_1 == L'!' || VAR_1 == L'*' || VAR_1 == L'\'' || VAR_1 == L'(' || VAR_1 == L')'
     || VAR_1 == L',')
  VAR_0 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 else {
  *VAR_0++ = L'%';
  *VAR_0++ = FUNC_2(((unsigned int)VAR_1 >> 4) & 0xf);
  *VAR_0++ = FUNC_2((unsigned int)VAR_1 & 0xf);
 }

 return VAR_0;
}
