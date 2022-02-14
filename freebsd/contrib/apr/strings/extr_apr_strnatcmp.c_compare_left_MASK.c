
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

__attribute__((used)) static int
FUNC_1(char const *VAR_0, char const *VAR_1)
{


     for (;; VAR_0++, VAR_1++) {
   if (!FUNC_0(*VAR_0) && !FUNC_0(*VAR_1))
        break;
   else if (!FUNC_0(*VAR_0))
        return -1;
   else if (!FUNC_0(*VAR_1))
        return +1;
   else if (*VAR_0 < *VAR_1)
        return -1;
   else if (*VAR_0 > *VAR_1)
        return +1;
     }

     return 0;
}
