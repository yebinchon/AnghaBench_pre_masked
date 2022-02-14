
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_5__ {int X_op; int X_add_number; int * X_add_symbol; } ;
struct TYPE_4__ {TYPE_2__ exp; } ;
struct TYPE_6__ {int instruction; int relax; TYPE_1__ reloc; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ,int ,int ,int ,int *,int,int *) ;
 TYPE_3__ VAR_2 ;
 int * FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  char * VAR_4;
  symbolS *VAR_5;
  int VAR_6;



  FUNC_0 (0);

  switch (VAR_2.reloc.exp.X_op)
    {
    case 128:
      VAR_5 = VAR_2.reloc.exp.X_add_symbol;
      VAR_6 = VAR_2.reloc.exp.X_add_number;
      break;
    case 129:
      VAR_5 = ((void*)0);
      VAR_6 = VAR_2.reloc.exp.X_add_number;
      break;
    default:
      VAR_5 = FUNC_2 (&VAR_2.reloc.exp);
      VAR_6 = 0;
      break;
  }
  VAR_4 = FUNC_1 (VAR_3, VAR_0, VAR_1,
   VAR_2.relax, VAR_5, VAR_6, ((void*)0) );
  FUNC_3 (VAR_4, VAR_2.instruction, VAR_1);
}
