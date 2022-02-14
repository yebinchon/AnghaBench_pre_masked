
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int *,char*,char*,char*) ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (char*,scalar_t__,int) ;
 int FUNC_8 (char*,scalar_t__,int) ;
 int FUNC_9 (char,int *) ;

void
FUNC_10 (FILE *VAR_1, rtx VAR_2)
{
  char VAR_3[VAR_0 + 32];
  rtx VAR_4;

  FUNC_7 (VAR_3, VAR_2, 1);
  FUNC_6 (VAR_3, VAR_1);
  FUNC_9 ('\n', VAR_1);
  if (FUNC_1 (VAR_2) && FUNC_2 (VAR_2))
    for (VAR_4 = FUNC_2 (VAR_2); VAR_4; VAR_4 = FUNC_4 (VAR_4, 1))
      {
        FUNC_8 (VAR_3, FUNC_4 (VAR_4, 0), 1);
 FUNC_5 (VAR_1, "      %s: %s\n",
   FUNC_0 (FUNC_3 (VAR_4)), VAR_3);
      }
}
