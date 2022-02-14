
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_2 (void)
{
   register int VAR_3;
   static int VAR_4 = 0;

   if (VAR_4)
     return;
   FUNC_1 (VAR_2, sizeof VAR_2);

   for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
     if (FUNC_0 (VAR_3))
 VAR_2[VAR_3] = VAR_1;

   VAR_2['_'] = VAR_1;

   VAR_4 = 1;
}
