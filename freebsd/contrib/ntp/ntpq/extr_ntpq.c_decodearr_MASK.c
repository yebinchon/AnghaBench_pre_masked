
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int l_fp ;
typedef int buf ;


 int FUNC_0 (char*,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(
 char *VAR_0,
 int *VAR_1,
 l_fp *VAR_2,
 int VAR_3
 )
{
 char *VAR_4;
 char VAR_5[60];

 *VAR_1 = 0;

 while (*VAR_1 < VAR_3 && *VAR_0) {
  if (FUNC_1(FUNC_2(VAR_0))) {
   do
    ++VAR_0;
   while (*VAR_0 && FUNC_1(FUNC_2(VAR_0)));
  } else {
   VAR_4 = VAR_5;
   do {
    if (VAR_4 != (VAR_5 + sizeof(VAR_5) - 1))
     *VAR_4++ = *VAR_0;
    ++VAR_0;
   } while (*VAR_0 && !FUNC_1(FUNC_2(VAR_0)));
   *VAR_4 = '\0';

   if (!FUNC_0(VAR_5, VAR_2))
    return 0;
   ++(*VAR_1);
   ++VAR_2;
  }
 }
 return 1;
}
