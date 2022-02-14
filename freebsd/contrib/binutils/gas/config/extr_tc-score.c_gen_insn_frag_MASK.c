
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int X_add_symbol; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_6__ exp; int pc_rel; } ;
struct score_it {int instruction; int relax_inst; scalar_t__ size; int relax_size; TYPE_2__ reloc; int type; } ;
typedef enum insn_class { ____Placeholder_insn_class } insn_class ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_7__ {int is_insn; } ;
struct TYPE_9__ {char* fr_literal; TYPE_1__ tc_frag_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int,int ,int ,int ,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,int,int,TYPE_6__*,int ,scalar_t__) ;
 int FUNC_5 (int) ;
 char* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 TYPE_3__* VAR_9 ;
 scalar_t__ FUNC_8 () ;
 char* FUNC_9 (int ,scalar_t__,int ,int ,int ,int ,int *) ;
 int FUNC_10 (TYPE_3__*) ;
 int VAR_10 ;
 int FUNC_11 (struct score_it*) ;
 int FUNC_12 (char*,int,int) ;
 int FUNC_13 (struct score_it*,struct score_it*,int) ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_14 (struct score_it *VAR_12, struct score_it *VAR_13)
{
  char *VAR_14;
  bfd_boolean VAR_15 = VAR_1;
  int VAR_16 = VAR_10;
  int VAR_17 = 0;
  struct score_it *VAR_18 = VAR_12;
  struct score_it *VAR_19 = VAR_13;
  struct score_it VAR_20;

  VAR_15 = (VAR_19) ? VAR_8 : VAR_1;
  FUNC_13 (&VAR_20, VAR_18, sizeof (struct score_it));


  if (VAR_15)
    {
      VAR_20 = ((VAR_20 & 0x7FFF) << 15)
                                  | (VAR_19->instruction & 0x7FFF);
      VAR_20 = FUNC_2 (VAR_20, VAR_4);
      VAR_20 = 0x8000;
      VAR_20 = VAR_5;
      VAR_20 = 0;
      VAR_20 = VAR_6;
    }
  else
    {
      VAR_20 = FUNC_2 (VAR_20,
         FUNC_0 (VAR_20));
    }

  if (VAR_20 != 0)
    {
      enum insn_class VAR_21;

      VAR_21 = (VAR_20 == VAR_5) ? VAR_2 : VAR_3;
      VAR_20 = FUNC_2 (VAR_20, VAR_21);
    }


  FUNC_11 (&VAR_20);



  if (FUNC_8 () != 0)
    {
      if (!VAR_9->tc_frag_data.is_insn)
 FUNC_10 (VAR_9);

      FUNC_7 (0);
    }







  FUNC_5 (20);

  VAR_14 = FUNC_6 (VAR_20);
  FUNC_12 (VAR_14, VAR_20, VAR_20);






  if (VAR_15)
    {
      if (VAR_18->reloc.type != VAR_0)
 FUNC_4 (VAR_9, VAR_14 - VAR_9->fr_literal,
         VAR_18->size, &VAR_18->reloc.exp,
         VAR_18->reloc.pc_rel, VAR_18->reloc.type);

      if (VAR_19->reloc.type != VAR_0)
 FUNC_4 (VAR_9, VAR_14 - VAR_9->fr_literal + 2,
         VAR_19->size, &VAR_19->reloc.exp, VAR_19->reloc.pc_rel, VAR_19->reloc.type);
    }
  else
    {
      if (VAR_20 != VAR_0)
 FUNC_4 (VAR_9, VAR_14 - VAR_9->fr_literal,
         VAR_20, &VAR_20,
         VAR_20, VAR_20);
    }


  VAR_16 &= (VAR_20 != 0);
  VAR_17 = VAR_16 ? VAR_20 : 0;

  VAR_14 = FUNC_9 (VAR_11, VAR_17 + VAR_7, 0,
                FUNC_1 (VAR_20, VAR_20,
                              VAR_20, 0, 0, VAR_16),
                VAR_20, 0, ((void*)0));

  if (VAR_16)
    FUNC_12 (VAR_14, VAR_20, VAR_17);

  FUNC_13 (VAR_18, &VAR_20, sizeof (struct score_it));
}
