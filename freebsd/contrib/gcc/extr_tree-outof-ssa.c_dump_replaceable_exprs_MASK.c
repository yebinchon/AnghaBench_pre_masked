
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_5 (FILE *VAR_4, tree *VAR_5)
{
  tree VAR_6, VAR_7;
  int VAR_8;
  FUNC_2 (VAR_4, "\nReplacing Expressions\n");
  for (VAR_8 = 0; VAR_8 < (int)VAR_3 + 1; VAR_8++)
    if (VAR_5[VAR_8])
      {
        VAR_6 = VAR_5[VAR_8];
 VAR_7 = FUNC_0 (VAR_6, VAR_1);
 FUNC_3 (VAR_7 != VAR_0);
 FUNC_4 (VAR_4, VAR_7, VAR_2);
 FUNC_2 (VAR_4, " replace with --> ");
 FUNC_4 (VAR_4, FUNC_1 (VAR_6, 1), VAR_2);
 FUNC_2 (VAR_4, "\n");
      }
  FUNC_2 (VAR_4, "\n");
}
