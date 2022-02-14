
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int FUNC_0 (int) ;
 int * FUNC_1 (size_t,int) ;
 int FUNC_2 (int const*) ;
 size_t FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *,int const*,size_t) ;

__attribute__((used)) static void
FUNC_5(const wchar_t *VAR_0)
{
 wchar_t *VAR_1;
 size_t VAR_2, VAR_3, VAR_4;
 int VAR_5;

 VAR_2 = FUNC_2(VAR_0) + 1;
 for (VAR_5 = 0; VAR_5 <= 1; VAR_5++) {
  for (VAR_4 = 0; VAR_4 <= VAR_2 + 10; VAR_4++) {
   VAR_1 = FUNC_1(VAR_4 * sizeof(wchar_t), VAR_5);
   FUNC_4(VAR_1, VAR_0, VAR_4 <= VAR_2 ? VAR_4 : VAR_2);
   VAR_3 = (VAR_2 > VAR_4) ? VAR_4 : VAR_2 - 1;
   FUNC_0(FUNC_3(VAR_1, VAR_4) == VAR_3);
  }
 }
}
