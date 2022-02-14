
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Char ;


 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__) ;

__attribute__((used)) static Char *
FUNC_1(Char *VAR_0, Char *VAR_1, int VAR_2, Char *VAR_3)
{
    Char VAR_4 = 0;
    VAR_0++;

    while (VAR_2--) {
        while (VAR_0 < VAR_1) {
   if (!FUNC_0(VAR_3, *VAR_0) || *(VAR_0-1) == (Char)'\\')
     break;
   VAR_0++;
        }
 while (VAR_0 < VAR_1) {
   if ((*VAR_0 == (Char)'\'' || *VAR_0 == (Char)'"')) {
     if (VAR_4 || *(VAR_0-1) != (Char)'\\') {
       if (VAR_4 == 0) VAR_4 = *VAR_0;
       else if (VAR_4 == *VAR_0) VAR_4 = 0;
     }
   }

   if (!VAR_4 && FUNC_0(VAR_3, *VAR_0) && *(VAR_0-1) != (Char)'\\')
     break;
   VAR_0++;
 }
    }

    VAR_0--;
    return(VAR_0);
}
