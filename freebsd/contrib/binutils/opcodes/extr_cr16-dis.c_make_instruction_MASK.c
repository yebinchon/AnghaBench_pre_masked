
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int size; int type; } ;
typedef TYPE_2__ argument ;
typedef int a ;
struct TYPE_10__ {int nargs; int size; TYPE_2__* arg; } ;
struct TYPE_9__ {int size; TYPE_1__* operands; } ;
struct TYPE_7__ {unsigned int shift; int op_type; } ;


 TYPE_6__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_5__* VAR_1 ;
 int FUNC_2 (TYPE_2__*,unsigned int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  int VAR_3;
  unsigned int VAR_4;

  for (VAR_3 = 0; VAR_3 < VAR_0.nargs; VAR_3++)
    {
      argument VAR_5;

      FUNC_3 (&VAR_5, 0, sizeof (VAR_5));
      VAR_5.type = FUNC_0 (VAR_1->operands[VAR_3].op_type);
      VAR_5.size = FUNC_1 (VAR_1->operands[VAR_3].op_type);
      VAR_4 = VAR_1->operands[VAR_3].shift;

      FUNC_2 (&VAR_5, VAR_4);
      VAR_0.arg[VAR_3] = VAR_5;
    }


  VAR_0.size = VAR_1->size + (VAR_2 ? 1 : 0);

  VAR_0.size *= 2;
}
