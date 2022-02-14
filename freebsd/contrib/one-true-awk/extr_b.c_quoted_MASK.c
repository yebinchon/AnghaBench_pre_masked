
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uschar ;


 int FUNC_0 (int**) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(uschar **VAR_0)

{
 uschar *VAR_1 = *VAR_0;
 int VAR_2;

 if ((VAR_2 = *VAR_1++) == 't')
  VAR_2 = '\t';
 else if (VAR_2 == 'n')
  VAR_2 = '\n';
 else if (VAR_2 == 'f')
  VAR_2 = '\f';
 else if (VAR_2 == 'r')
  VAR_2 = '\r';
 else if (VAR_2 == 'b')
  VAR_2 = '\b';
 else if (VAR_2 == '\\')
  VAR_2 = '\\';
 else if (VAR_2 == 'x') {
  VAR_2 = FUNC_0(&VAR_1);
 } else if (FUNC_1(VAR_2)) {
  int VAR_3 = VAR_2 - '0';
  if (FUNC_1(*VAR_1)) {
   VAR_3 = 8 * VAR_3 + *VAR_1++ - '0';
   if (FUNC_1(*VAR_1))
    VAR_3 = 8 * VAR_3 + *VAR_1++ - '0';
  }
  VAR_2 = VAR_3;
 }

 *VAR_0 = VAR_1;
 return VAR_2;
}
