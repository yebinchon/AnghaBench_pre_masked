
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int FUNC_0 (int) ;
 int * FUNC_1 (size_t) ;
 size_t FUNC_2 (int *,char const*,size_t) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static wchar_t *
FUNC_4(const char *VAR_0)
{
 size_t VAR_1;
 wchar_t *VAR_2 = ((void*)0);

 if (VAR_0 != ((void*)0)) {
  VAR_1 = FUNC_3(VAR_0) + 1;
  VAR_2 = FUNC_1(VAR_1 * sizeof(wchar_t));
  FUNC_0(FUNC_2(VAR_2, VAR_0, VAR_1) != (size_t)-1);
 }

 return (VAR_2);
}
