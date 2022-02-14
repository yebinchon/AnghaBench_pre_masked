
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int fx_signed; } ;
typedef TYPE_3__ fixS ;
struct TYPE_12__ {int fr_literal; } ;
struct TYPE_8__ {int opcode_modifier; int base_opcode; } ;
struct TYPE_11__ {scalar_t__* prefix; scalar_t__ prefixes; int * reloc; TYPE_2__* op; TYPE_1__ tm; } ;
struct TYPE_9__ {int disps; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (TYPE_5__*,char*,int,int ,int,int ) ;
 scalar_t__ VAR_11 ;
 char* FUNC_4 (int) ;
 TYPE_5__* VAR_12 ;
 TYPE_4__ VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int,int,int,int ) ;

__attribute__((used)) static void
FUNC_6 (void)
{
  char *VAR_15;
  int VAR_16;
  fixS *VAR_17;

  if (VAR_13.tm.opcode_modifier & VAR_8)
    {

      VAR_16 = 1;
      if (VAR_13.prefix[VAR_0] != 0)
 {
   FUNC_0 (VAR_1);
   VAR_13.prefixes -= 1;
 }

      if (VAR_13.prefix[VAR_10] == VAR_4
   || VAR_13.prefix[VAR_10] == VAR_7 )
 {
   FUNC_0 (VAR_13.prefix[VAR_10]);
   VAR_13.prefixes--;
 }
    }
  else
    {
      int VAR_18;

      VAR_18 = 0;
      if (VAR_11 == VAR_3)
 VAR_18 = VAR_2;

      if (VAR_13.prefix[VAR_5] != 0)
 {
   FUNC_0 (VAR_6);
   VAR_13.prefixes -= 1;
   VAR_18 ^= VAR_2;
 }

      VAR_16 = 4;
      if (VAR_18)
 VAR_16 = 2;
    }

  if (VAR_13.prefix[VAR_9] != 0)
    {
      FUNC_0 (VAR_13.prefix[VAR_9]);
      VAR_13.prefixes -= 1;
    }

  if (VAR_13.prefixes != 0 && !VAR_14)
    FUNC_2 (FUNC_1("skipping prefixes on this instruction"));

  VAR_15 = FUNC_4 (1 + VAR_16);
  *VAR_15++ = VAR_13.tm.base_opcode;

  VAR_17 = FUNC_3 (VAR_12, VAR_15 - VAR_12->fr_literal, VAR_16,
        VAR_13.op[0].disps, 1, FUNC_5 (VAR_16, 1, 1, VAR_13.reloc[0]));




  if (VAR_16 == 1)
    VAR_17->fx_signed = 1;
}
