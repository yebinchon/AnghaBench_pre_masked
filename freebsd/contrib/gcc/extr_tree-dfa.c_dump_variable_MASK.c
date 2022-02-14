
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* var_ann_t ;
typedef scalar_t__ tree ;
struct TYPE_3__ {scalar_t__ symbol_mem_tag; unsigned int escape_mask; scalar_t__ is_aliased; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_12 ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (int *,char*,...) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (int *,scalar_t__,int) ;
 TYPE_1__* FUNC_17 (scalar_t__) ;

void
FUNC_18 (FILE *VAR_13, tree VAR_14)
{
  var_ann_t VAR_15;

  if (FUNC_4 (VAR_14) == VAR_10)
    {
      if (FUNC_1 (FUNC_6 (VAR_14)))
 FUNC_9 (VAR_13, VAR_14);
      VAR_14 = FUNC_2 (VAR_14);
    }

  if (VAR_14 == VAR_9)
    {
      FUNC_11 (VAR_13, "<nil>");
      return;
    }

  FUNC_16 (VAR_13, VAR_14, VAR_12);

  VAR_15 = FUNC_17 (VAR_14);

  FUNC_11 (VAR_13, ", UID %u", (unsigned) FUNC_0 (VAR_14));

  FUNC_11 (VAR_13, ", ");
  FUNC_16 (VAR_13, FUNC_6 (VAR_14), VAR_12);

  if (VAR_15 && VAR_15->symbol_mem_tag)
    {
      FUNC_11 (VAR_13, ", symbol memory tag: ");
      FUNC_16 (VAR_13, VAR_15->symbol_mem_tag, VAR_12);
    }

  if (VAR_15 && VAR_15->is_aliased)
    FUNC_11 (VAR_13, ", is aliased");

  if (FUNC_3 (VAR_14))
    FUNC_11 (VAR_13, ", is addressable");

  if (FUNC_14 (VAR_14))
    FUNC_11 (VAR_13, ", is global");

  if (FUNC_5 (VAR_14))
    FUNC_11 (VAR_13, ", is volatile");

  if (FUNC_13 (VAR_14))
    {
      FUNC_11 (VAR_13, ", call clobbered");
      if (VAR_12 & VAR_11)
 {
   var_ann_t VAR_16 = FUNC_17 (VAR_14);
   unsigned int VAR_17 = VAR_16->escape_mask;

   FUNC_11 (VAR_13, " (");
   if (VAR_17 & VAR_3)
     FUNC_11 (VAR_13, ", stored in global");
   if (VAR_17 & VAR_4)
     FUNC_11 (VAR_13, ", goes through ASM");
   if (VAR_17 & VAR_5)
     FUNC_11 (VAR_13, ", passed to call");
   if (VAR_17 & VAR_0)
     FUNC_11 (VAR_13, ", bad cast");
   if (VAR_17 & VAR_7)
     FUNC_11 (VAR_13, ", returned from func");
   if (VAR_17 & VAR_6)
     FUNC_11 (VAR_13, ", passed to pure/const");
   if (VAR_17 & VAR_1)
     FUNC_11 (VAR_13, ", is global var");
   if (VAR_17 & VAR_2)
     FUNC_11 (VAR_13, ", is incoming pointer");
   if (VAR_17 & VAR_8)
     FUNC_11 (VAR_13, ", unknown escape");
   FUNC_11 (VAR_13, " )");
 }
    }

  if (FUNC_7 (VAR_14))
    {
      FUNC_11 (VAR_13, ", default def: ");
      FUNC_16 (VAR_13, FUNC_7 (VAR_14), VAR_12);
    }

  if (FUNC_15 (VAR_14))
    {
      FUNC_11 (VAR_13, ", may aliases: ");
      FUNC_8 (VAR_13, VAR_14);
    }

  if (FUNC_12 (VAR_14))
    {
      FUNC_11 (VAR_13, ", sub-vars: ");
      FUNC_10 (VAR_13, VAR_14);
    }

  FUNC_11 (VAR_13, "\n");
}
