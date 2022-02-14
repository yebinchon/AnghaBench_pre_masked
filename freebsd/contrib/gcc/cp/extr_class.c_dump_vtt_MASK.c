
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,char*,...) ;
 char* FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5 (tree VAR_3, tree VAR_4)
{
  int VAR_5;
  FILE *VAR_6 = FUNC_1 (VAR_1, &VAR_5);

  if (!VAR_6)
    return;

  if (!(VAR_5 & VAR_0))
    {
      FUNC_3 (VAR_6, "VTT for %s\n",
        FUNC_4 (VAR_3, VAR_2));
      FUNC_0 (VAR_6, VAR_4);
      FUNC_3 (VAR_6, "\n");
    }

  FUNC_2 (VAR_1, VAR_6);
}
