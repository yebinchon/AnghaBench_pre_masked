
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int cmp_t ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(u_char *VAR_0, size_t VAR_1, size_t VAR_2, cmp_t VAR_3)
{
 u_char *VAR_4, *VAR_5, *VAR_6, *VAR_7, VAR_8;
 int VAR_9;

 for (VAR_4 = VAR_0+VAR_2; --VAR_1 >= 1; VAR_4 += VAR_2)
  for (VAR_6 = VAR_4; VAR_6 > VAR_0; VAR_6 -= VAR_2) {
   VAR_7 = VAR_6 - VAR_2;
   if (FUNC_0(VAR_7, VAR_6) <= 0)
    break;
   FUNC_1(VAR_7, VAR_6);
  }
}
