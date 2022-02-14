
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int const*,int) ;

const char *
FUNC_2(const wchar_t *VAR_0)
{
 static struct {
  char *str;
  int len;
 } VAR_1;

 int VAR_2 = FUNC_1(0, VAR_0, 0) + 1;
 if (VAR_2 > VAR_1.len) {
  VAR_1.str = FUNC_0(VAR_2);
  VAR_1.len = VAR_2;
 }
 FUNC_1(VAR_1.str, VAR_0, VAR_2);
 VAR_1.str[VAR_2 - 1] = 0;

 return VAR_1.str;
}
