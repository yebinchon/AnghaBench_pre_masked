
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wmsk ;
typedef int wint_t ;
typedef int wchar_t ;
typedef int uint64_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int,int,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int * FUNC_4 (int const*,int) ;

__attribute__((used)) static wchar_t *
FUNC_5(wchar_t *VAR_2, wint_t VAR_3, int VAR_4, wint_t VAR_5, const wchar_t *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 uint64_t VAR_10, VAR_11;

 VAR_7 = FUNC_4(VAR_6, VAR_3) != ((void*)0);
 if (!VAR_7 && (FUNC_0(VAR_4, VAR_3) || FUNC_3(VAR_3) ||
     ((VAR_4 & VAR_1) && FUNC_2(VAR_3)))) {
  *VAR_2++ = VAR_3;
  return VAR_2;
 }


 VAR_11 = 0;
 for (VAR_8 = sizeof(VAR_11) - 1; VAR_8 >= 0; VAR_8--) {
  VAR_9 = VAR_8 * VAR_0;
  VAR_10 = (uint64_t)0xffLL << VAR_9;
  VAR_11 |= VAR_10;
  if ((VAR_3 & VAR_11) || VAR_8 == 0)
   VAR_2 = FUNC_1(VAR_2, (wint_t)(
       (uint64_t)(VAR_3 & VAR_10) >> VAR_9),
       VAR_4, VAR_5, VAR_7);
 }

 return VAR_2;
}
