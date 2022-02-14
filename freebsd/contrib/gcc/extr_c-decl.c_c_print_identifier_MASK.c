
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int FILE ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (scalar_t__) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,char*,void*,char*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,char*,int ,int) ;
 scalar_t__* VAR_0 ;

void
FUNC_9 (FILE *VAR_1, tree VAR_2, int VAR_3)
{
  FUNC_8 (VAR_1, "symbol", FUNC_4 (VAR_2), VAR_3 + 4);
  FUNC_8 (VAR_1, "tag", FUNC_5 (VAR_2), VAR_3 + 4);
  FUNC_8 (VAR_1, "label", FUNC_3 (VAR_2), VAR_3 + 4);
  if (FUNC_0 (VAR_2))
    {
      tree VAR_4 = VAR_0[FUNC_1 (VAR_2)];
      FUNC_7 (VAR_1, VAR_3 + 4);
      FUNC_6 (VAR_1, "rid %p \"%s\"",
        (void *) VAR_4, FUNC_2 (VAR_4));
    }
}
