
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,size_t) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, size_t VAR_1, size_t VAR_2)
{
 uint8_t *VAR_3 = VAR_0;
 uint8_t *VAR_4, *VAR_5;

 FUNC_0(VAR_1 > 0, ("no channels"));
 for (VAR_4 = VAR_3+VAR_2; --VAR_1 >= 1; VAR_4 += VAR_2)
  for (VAR_5 = VAR_4; VAR_5 > VAR_3; VAR_5 -= VAR_2) {
   uint8_t *VAR_6 = VAR_5 - VAR_2;
   if (FUNC_1(VAR_6, VAR_5) <= 0)
    break;
   FUNC_2(VAR_6, VAR_5, VAR_2);
  }
}
