
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ valueT ;
typedef scalar_t__ offsetT ;
struct TYPE_11__ {scalar_t__ X_op; scalar_t__ X_add_number; } ;
struct TYPE_10__ {int fr_literal; } ;
struct TYPE_7__ {int name; int base_opcode; } ;
struct TYPE_9__ {scalar_t__ prefixes; TYPE_2__* op; TYPE_1__ tm; int * reloc; int * prefix; } ;
struct TYPE_8__ {TYPE_6__* imms; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_4__*,char*,int,TYPE_6__*,int ,int ) ;
 scalar_t__ VAR_6 ;
 char* FUNC_6 (int) ;
 TYPE_4__* VAR_7 ;
 TYPE_3__ VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (char*,scalar_t__,int) ;
 int FUNC_8 (int,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_9 (void)
{
  char *VAR_10;
  int VAR_11;
  int VAR_12;
  int VAR_13;

  VAR_13 = 0;
  if (VAR_6 == VAR_1)
    VAR_13 = VAR_0;

  VAR_12 = 0;
  if (VAR_8.prefix[VAR_2] != 0)
    {
      VAR_12 = 1;
      VAR_8.prefixes -= 1;
      VAR_13 ^= VAR_0;
    }
  if (VAR_8.prefix[VAR_5] != 0)
    {
      VAR_12++;
      VAR_8.prefixes -= 1;
    }

  VAR_11 = 4;
  if (VAR_13)
    VAR_11 = 2;

  if (VAR_8.prefixes != 0 && !VAR_9)
    FUNC_2 (FUNC_0("skipping prefixes on this instruction"));


  VAR_10 = FUNC_6 (VAR_12 + 1 + 2 + VAR_11);

  if (VAR_8.prefix[VAR_2] != 0)
    *VAR_10++ = VAR_3;

  if (VAR_8.prefix[VAR_5] != 0)
    *VAR_10++ = VAR_8.prefix[VAR_5];

  *VAR_10++ = VAR_8.tm.base_opcode;
  if (VAR_8.op[1].imms->X_op == VAR_4)
    {
      offsetT VAR_14 = VAR_8.op[1].imms->X_add_number;

      if (VAR_11 == 2
   && !FUNC_4 (VAR_14)
   && !FUNC_3 (VAR_14))
 {
   FUNC_1 (FUNC_0("16-bit jump out of range"));
   return;
 }
      FUNC_7 (VAR_10, VAR_14, VAR_11);
    }
  else
    FUNC_5 (VAR_7, VAR_10 - VAR_7->fr_literal, VAR_11,
   VAR_8.op[1].imms, 0, FUNC_8 (VAR_11, 0, 0, VAR_8.reloc[1]));
  if (VAR_8.op[0].imms->X_op != VAR_4)
    FUNC_1 (FUNC_0("can't handle non absolute segment in `%s'"),
     VAR_8.tm.name);
  FUNC_7 (VAR_10 + VAR_11, (valueT) VAR_8.op[0].imms->X_add_number, 2);
}
