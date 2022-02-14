
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int X_add_number; scalar_t__ X_add_symbol; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_4__ exp; int pc_rel; } ;
struct score_it {int instruction; int relax_inst; char* name; int bwarn; scalar_t__ size; TYPE_2__ reloc; void* type; scalar_t__ relax_size; scalar_t__ error; } ;
struct TYPE_10__ {int is_insn; } ;
struct TYPE_14__ {int fr_literal; TYPE_1__ tc_frag_data; } ;
struct TYPE_12__ {int value; int template; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (scalar_t__,scalar_t__,void*,int ,int,int ) ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,TYPE_4__,int ) ;
 int FUNC_5 (char**,int,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_5__*,char*,scalar_t__,TYPE_4__*,int ,scalar_t__) ;
 int FUNC_11 (int) ;
 char* FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ) ;
 TYPE_5__* VAR_15 ;
 scalar_t__ FUNC_14 () ;
 char* FUNC_15 (int ,scalar_t__,int ,int ,scalar_t__,int ,int *) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (struct score_it*,int *) ;
 int FUNC_18 (struct score_it*) ;
 struct score_it VAR_16 ;
 int FUNC_19 (char*,int,scalar_t__) ;
 int FUNC_20 (struct score_it*,struct score_it*,int) ;
 int FUNC_21 (TYPE_4__*,char**) ;
 int FUNC_22 (scalar_t__,int) ;
 int VAR_17 ;
 int FUNC_23 (char**,int,int ) ;
 int VAR_18 ;
 TYPE_3__* VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_24 (char**) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (char*,char*,char*,...) ;
 int FUNC_27 (char*,char*) ;
 int FUNC_28 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_29 (char *VAR_21)
{
  int VAR_22;
  int VAR_23 = 0;
  int VAR_24;
  int VAR_25;
  char *VAR_26;
  char *VAR_27;
  char *VAR_28;
  char VAR_29[3][VAR_6];
  char VAR_30[VAR_6];
  struct score_it VAR_31;
  struct score_it VAR_32[3];
  struct score_it VAR_33;

  FUNC_20 (&VAR_31, &VAR_16, sizeof (struct score_it));
  FUNC_27 (VAR_30, VAR_21);
  VAR_26 = VAR_30;

  FUNC_25 (VAR_26);
  if ((VAR_24 = FUNC_23 (&VAR_26, -1, VAR_9)) == (int) VAR_2)
    return;

  if (FUNC_24 (&VAR_26) == (int) VAR_2)
    return;

  VAR_27 = VAR_26;


  if (*VAR_26 == '[')
    {
      VAR_16.type = VAR_12;
      FUNC_6 (VAR_21);
      return;
    }


  VAR_28 = VAR_26;
  VAR_16.type = VAR_11;
  if ((FUNC_21 (&VAR_16.reloc.exp, &VAR_26) == (int) VAR_2)
      || (FUNC_28 (VAR_16.reloc.exp.X_add_number, VAR_14, 0) == (int) VAR_2)
      || (FUNC_8 (VAR_26) == (int) VAR_2))
    {
      return;
    }
  else
    {
      if (VAR_16.reloc.exp.X_add_symbol == 0)
        {
          FUNC_20 (&VAR_16, &VAR_31, sizeof (struct score_it));
          FUNC_9 (VAR_21);
          return;
        }
    }


  VAR_16.type = VAR_11;
  VAR_26 = VAR_28;
  if ((FUNC_5 (&VAR_26, 1, VAR_13) == (int) VAR_2)
      || (FUNC_8 (VAR_26) == (int) VAR_2))
    {
      return;
    }
  else
    {
      if (VAR_16.reloc.exp.X_add_symbol == 0)
        {
          if (!VAR_16.error)
     VAR_16.error = VAR_0;

          return;
        }

      if (VAR_20 == VAR_8)
        {
          int VAR_34 = 0;
          VAR_34 = VAR_16.instruction & VAR_7;
          FUNC_4 (VAR_24, VAR_16.reloc.exp, VAR_19[VAR_34 * 3 + 0].template);
          return;
        }
      else
 {
          if ((VAR_16.reloc.exp.X_add_number <= 0x3fff)
               && (VAR_16.reloc.exp.X_add_number >= -0x4000)
               && (!FUNC_22 (VAR_16.reloc.exp.X_add_symbol, 1)))
     {
              int VAR_35 = 0;


              VAR_35 = VAR_16.instruction & VAR_7;
              VAR_16.instruction &= ~VAR_7;
              VAR_16.instruction |= VAR_19[VAR_35 * 3 + 0].value;
              VAR_16.instruction |= VAR_24 << 20;
              VAR_16.instruction |= VAR_4 << 15;
              VAR_16.relax_inst = 0x8000;
              VAR_16.relax_size = 0;
              VAR_23 = 1;
     }
 }
    }


  FUNC_20 (&VAR_33, &VAR_16, sizeof (struct score_it));
  VAR_25 = VAR_17;
  VAR_17 = 0;


  FUNC_26 (VAR_29[0], "ld_i32hi r1, %s", VAR_27);
  FUNC_26 (VAR_29[1], "ld_i32lo r1, %s", VAR_27);
  FUNC_26 (VAR_29[2], "%s r%d, [r1, 0]", VAR_31.name, VAR_24);




  for (VAR_22 = 0; VAR_22 < 3; VAR_22++)
    {
      if (FUNC_3 (VAR_29[VAR_22], VAR_3) == (int) VAR_2)
 return;

      FUNC_20 (&VAR_32[VAR_22], &VAR_16, sizeof (struct score_it));
    }

  if (VAR_23)
    {
      char *VAR_36;


      VAR_33.instruction = FUNC_2 (VAR_33.instruction, FUNC_0 (VAR_33.type));
      VAR_33.relax_size = VAR_32[0].size + VAR_32[1].size + VAR_32[2].size;
      VAR_33.type = VAR_5;

      for (VAR_22 = 0; VAR_22 < 3; VAR_22++)
 VAR_32[VAR_22].instruction = FUNC_2 (VAR_32[VAR_22].instruction
             , FUNC_0 (VAR_32[VAR_22].type));


      FUNC_18 (&VAR_33);


      if (FUNC_14 () != 0)
        {
          if (!VAR_15->tc_frag_data.is_insn)
     FUNC_16 (VAR_15);

          FUNC_13 (0);
        }
      FUNC_11 (20);


      VAR_36 = FUNC_12 (VAR_33.size);
      FUNC_19 (VAR_36, VAR_33.instruction, VAR_33.size);

      if (VAR_33.reloc.type != VAR_1)
        {
          FUNC_10 (VAR_15, VAR_36 - VAR_15->fr_literal, VAR_33.size,
                         &VAR_33.reloc.exp, VAR_33.reloc.pc_rel, VAR_33.reloc.type);
        }







      VAR_36 = FUNC_15 (VAR_18, VAR_33.relax_size + VAR_10, 0,
                    FUNC_1 (VAR_33.size, VAR_33.relax_size, VAR_33.type, 0, 4, 0),
                    VAR_33.reloc.exp.X_add_symbol, 0, ((void*)0));



      FUNC_19 (VAR_36, VAR_32[0].instruction, VAR_32[0].size);
      VAR_36 += VAR_32[0].size;
      FUNC_19 (VAR_36, VAR_32[1].instruction, VAR_32[1].size);
      VAR_36 += VAR_32[1].size;
      FUNC_19 (VAR_36, VAR_32[2].instruction, VAR_32[2].size);
    }
  else
    {
      FUNC_17 (&VAR_32[0], ((void*)0));
      FUNC_17 (&VAR_32[1], ((void*)0));
      FUNC_17 (&VAR_32[2], ((void*)0));
    }
  VAR_17 = VAR_25;


  VAR_16.bwarn = -1;
}
