
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ncols; scalar_t__* col_offset; scalar_t__* col_type; } ;
typedef TYPE_1__ Frame_Chunk ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__*,int,int) ;

__attribute__((used)) static void
FUNC_1 (Frame_Chunk *VAR_1, int VAR_2)
{
  int VAR_3 = VAR_1->ncols;

  if (VAR_2 < VAR_1->ncols)
    return;

  VAR_1->ncols = VAR_2 + 1;
  VAR_1->col_type = FUNC_0 (VAR_1->col_type, VAR_1->ncols, sizeof (short int));
  VAR_1->col_offset = FUNC_0 (VAR_1->col_offset, VAR_1->ncols, sizeof (int));

  while (VAR_3 < VAR_1->ncols)
    {
      VAR_1->col_type[VAR_3] = VAR_0;
      VAR_1->col_offset[VAR_3] = 0;
      VAR_3++;
    }
}
