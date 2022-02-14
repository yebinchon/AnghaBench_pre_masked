
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wint_t ;
typedef scalar_t__ wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const**) ;

int
FUNC_2(int VAR_2, const char *VAR_3)
{
    if (VAR_3 != 0) {
 int VAR_4 = FUNC_1(&VAR_3);






 if (VAR_2 > 0 && VAR_2 < 256) {
     if (FUNC_0(VAR_2) == FUNC_0(VAR_4))
  return VAR_1;
 }

    }
    return VAR_0;
}
