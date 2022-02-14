
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wint_t ;
typedef int wchar_t ;
typedef int mbstate_t ;


 size_t FUNC_0 (int *,char const*,size_t,int *) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static __inline size_t
FUNC_2(wint_t *VAR_0, const char *VAR_1, size_t VAR_2, mbstate_t *VAR_3, wint_t VAR_4)
{
 size_t VAR_5;
 wchar_t VAR_6;

 VAR_5 = FUNC_0(&VAR_6, VAR_1, VAR_2, VAR_3);
 if (VAR_0 != ((void*)0))
  *VAR_0 = VAR_6;
 if (VAR_5 == 0)
  return (1);
 else if (VAR_5 == (size_t)-1 || VAR_5 == (size_t)-2) {
  FUNC_1(VAR_3, 0, sizeof(*VAR_3));
  if (VAR_0 != ((void*)0))
   *VAR_0 = VAR_4;
  return (1);
 } else
                return (VAR_5);
}
