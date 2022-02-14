
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ X_op; int X_add_number; } ;
typedef TYPE_2__ expressionS ;
struct TYPE_7__ {TYPE_1__* operands; } ;
struct TYPE_5__ {int imm; int reg; int regisimm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int* VAR_6 ;
 TYPE_4__ VAR_7 ;
 int FUNC_1 (TYPE_2__*,char**,int ) ;

__attribute__((used)) static int
FUNC_2 (char **VAR_8, int VAR_9)
{
  expressionS VAR_10;
  char *VAR_11 = *VAR_8;

  FUNC_1 (&VAR_10, &VAR_11, VAR_1);

  if (VAR_10.X_op == VAR_4)
    {
      VAR_7.operands[VAR_9].imm = VAR_10.X_add_number & 0xffffffff;



      if ((VAR_10.X_add_number & ~0xffffffffl) != 0)
 {

   VAR_7.operands[VAR_9].reg = ((VAR_10.X_add_number >> 16) >> 16) & 0xffffffff;
   VAR_7.operands[VAR_9].regisimm = 1;
 }
    }
  else if (VAR_10.X_op == VAR_3
           && VAR_2 * VAR_10.X_add_number > 32
           && VAR_2 * VAR_10.X_add_number <= 64)
    {
      unsigned VAR_12 = 32 / VAR_2, VAR_13, VAR_14 = 0;



      FUNC_0 (VAR_12 != 0);
      VAR_7.operands[VAR_9].imm = 0;
      for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++, VAR_14++)
        VAR_7.operands[VAR_9].imm |= VAR_6[VAR_14]
                                << (VAR_2 * VAR_13);
      VAR_7.operands[VAR_9].reg = 0;
      for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++, VAR_14++)
        VAR_7.operands[VAR_9].reg |= VAR_6[VAR_14]
                                << (VAR_2 * VAR_13);
      VAR_7.operands[VAR_9].regisimm = 1;
    }
  else
    return VAR_0;

  *VAR_8 = VAR_11;

  return VAR_5;
}
