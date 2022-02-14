
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int) ;

__attribute__((used)) static char *
FUNC_2(FILE *VAR_1, size_t *VAR_2)
{
 size_t VAR_3 = 256;
 int VAR_4;
 char *VAR_5 = (char *)FUNC_1(((void*)0), VAR_3), *VAR_6 = VAR_5;

 for (VAR_4 = FUNC_0(VAR_1); VAR_4 != VAR_0; VAR_4 = FUNC_0(VAR_1)) {
  if (VAR_6 == VAR_5 + VAR_3) {
   VAR_5 = (char *)FUNC_1(VAR_5, VAR_3 * 2);
   VAR_3 *= 2;
  }
  *VAR_6++ = VAR_4;
 }
 if (VAR_6 == VAR_5 + VAR_3)
  VAR_5 = (char *)FUNC_1(VAR_5, VAR_3 + 1);
 *VAR_6++ = '\0';

 *VAR_2 = VAR_6 - VAR_5;
 VAR_5 = (char *)FUNC_1(VAR_5, VAR_6 - VAR_5);
 return VAR_5;
}
