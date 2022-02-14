
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int symbolS ;
typedef int relax_substateT ;
typedef scalar_t__ offsetT ;
struct TYPE_5__ {char base_opcode; } ;
struct TYPE_8__ {scalar_t__ prefixes; int * reloc; TYPE_2__* op; TYPE_1__ tm; int * prefix; } ;
struct TYPE_7__ {scalar_t__ X_op; scalar_t__ X_add_number; int * X_add_symbol; } ;
struct TYPE_6__ {TYPE_3__* disps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 unsigned char VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_3 (int) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int ,int,int ,int,int *,scalar_t__,char*) ;
 TYPE_4__ VAR_18 ;
 int VAR_19 ;
 int * FUNC_6 (TYPE_3__*) ;
 int VAR_20 ;

__attribute__((used)) static void
FUNC_7 (void)
{
  char *VAR_21;
  int VAR_22;
  int VAR_23;
  relax_substateT VAR_24;
  symbolS *VAR_25;
  offsetT VAR_26;

  VAR_22 = 0;
  if (VAR_17 == VAR_1)
    VAR_22 = VAR_0;

  VAR_23 = 0;
  if (VAR_18.prefix[VAR_6] != 0)
    {
      VAR_23 = 1;
      VAR_18.prefixes -= 1;
      VAR_22 ^= VAR_0;
    }

  if (VAR_18.prefix[VAR_13] == VAR_4
      || VAR_18.prefix[VAR_13] == VAR_8 )
    {
      VAR_23++;
      VAR_18.prefixes--;
    }
  if (VAR_18.prefix[VAR_12] != 0)
    {
      VAR_23++;
      VAR_18.prefixes--;
    }

  if (VAR_18.prefixes != 0 && !VAR_19)
    FUNC_2 (FUNC_1("skipping prefixes on this instruction"));






  FUNC_3 (VAR_23 + 2 + 4);

  VAR_21 = FUNC_4 (VAR_23 + 1);
  if (VAR_18.prefix[VAR_6] != 0)
    *VAR_21++ = VAR_7;
  if (VAR_18.prefix[VAR_13] == VAR_4
      || VAR_18.prefix[VAR_13] == VAR_8)
    *VAR_21++ = VAR_18.prefix[VAR_13];
  if (VAR_18.prefix[VAR_12] != 0)
    *VAR_21++ = VAR_18.prefix[VAR_12];
  *VAR_21 = VAR_18.tm.base_opcode;

  if ((unsigned char) *VAR_21 == VAR_9)
    VAR_24 = FUNC_0 (VAR_15, VAR_14);
  else if ((VAR_16 & VAR_5) != 0)
    VAR_24 = FUNC_0 (VAR_2, VAR_14);
  else
    VAR_24 = FUNC_0 (VAR_3, VAR_14);
  VAR_24 |= VAR_22;

  VAR_25 = VAR_18.op[0].disps->X_add_symbol;
  VAR_26 = VAR_18.op[0].disps->X_add_number;

  if (VAR_18.op[0].disps->X_op != VAR_10
      && VAR_18.op[0].disps->X_op != VAR_11)
    {

      VAR_25 = FUNC_6 (VAR_18.op[0].disps);
      VAR_26 = 0;
    }



  FUNC_5 (VAR_20, 5, VAR_18.reloc[0], VAR_24, VAR_25, VAR_26, VAR_21);
}
