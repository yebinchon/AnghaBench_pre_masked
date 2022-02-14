
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ncols; int* col_type; int ra; int cfa_reg; int* col_offset; int cfa_offset; scalar_t__ cfa_exp; int pc_begin; } ;
typedef TYPE_1__ Frame_Chunk ;







 int VAR_0 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char*,int,...) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3 (Frame_Chunk *VAR_1, int *VAR_2, int *VAR_3)
{
  int VAR_4;
  char VAR_5[100];

  if (*VAR_3 < VAR_1->ncols)
    *VAR_3 = VAR_1->ncols;

  if (*VAR_2)
    {
      *VAR_2 = 0;

      FUNC_0 ("   LOC   CFA      ");

      for (VAR_4 = 0; VAR_4 < *VAR_3; VAR_4++)
 if (VAR_1->col_type[VAR_4] != VAR_0)
   {
     if (VAR_4 == VAR_1->ra)
       FUNC_0 ("ra   ");
     else
       FUNC_0 ("r%-4d", VAR_4);
   }

      FUNC_0 ("\n");
    }

  FUNC_0 ("%08lx ", VAR_1->pc_begin);
  if (VAR_1->cfa_exp)
    FUNC_2 (VAR_5, "exp");
  else
    FUNC_1 (VAR_5, "r%d%+d", VAR_1->cfa_reg, VAR_1->cfa_offset);
  FUNC_0 ("%-8s ", VAR_5);

  for (VAR_4 = 0; VAR_4 < VAR_1->ncols; VAR_4++)
    {
      if (VAR_1->col_type[VAR_4] != VAR_0)
 {
   switch (VAR_1->col_type[VAR_4])
     {
     case 130:
       FUNC_2 (VAR_5, "u");
       break;
     case 131:
       FUNC_2 (VAR_5, "s");
       break;
     case 133:
       FUNC_1 (VAR_5, "c%+d", VAR_1->col_offset[VAR_4]);
       break;
     case 128:
       FUNC_1 (VAR_5, "v%+d", VAR_1->col_offset[VAR_4]);
       break;
     case 132:
       FUNC_1 (VAR_5, "r%d", VAR_1->col_offset[VAR_4]);
       break;
     case 134:
       FUNC_2 (VAR_5, "exp");
       break;
     case 129:
       FUNC_2 (VAR_5, "vexp");
       break;
     default:
       FUNC_2 (VAR_5, "n/a");
       break;
     }
   FUNC_0 ("%-5s", VAR_5);
 }
    }
  FUNC_0 ("\n");
}
