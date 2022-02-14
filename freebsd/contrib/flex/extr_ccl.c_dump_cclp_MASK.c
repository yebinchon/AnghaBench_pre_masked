
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char,int *) ;
 char* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5 (FILE* VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_3 ('[', VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  if (FUNC_0(VAR_2, VAR_3)){
   int VAR_4 = VAR_3;

   FUNC_3 (' ', VAR_1);

   FUNC_2 (FUNC_4 (VAR_3), VAR_1);

   while (++VAR_3 < VAR_0 && FUNC_0(VAR_2,VAR_3)) ;

   if (VAR_3 - 1 > VAR_4)

    FUNC_1 (VAR_1, "-%s",
      FUNC_4 (VAR_3 - 1));

   FUNC_3 (' ', VAR_1);
  }
 }

 FUNC_3 (']', VAR_1);
}
