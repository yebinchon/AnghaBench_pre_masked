
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int valueT ;
struct alpha_operand {int dummy; } ;
typedef int segT ;
typedef int offsetT ;
struct TYPE_5__ {int fx_where; int fx_r_type; int fx_offset; int fx_done; scalar_t__ fx_addsy; scalar_t__ fx_pcrel; int fx_line; int fx_file; int fx_subsy; TYPE_1__* fx_frag; struct TYPE_5__* fx_next; } ;
typedef TYPE_2__ fixS ;
struct TYPE_4__ {char* fr_literal; int fr_address; } ;



 int VAR_0 ;


 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct alpha_operand* VAR_8 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 unsigned int FUNC_8 (char* const) ;
 unsigned int FUNC_9 (unsigned int,struct alpha_operand const*,int ,int ,int ) ;
 int FUNC_10 (char* const,unsigned int,int) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int) ;

void
FUNC_13 (fixS *VAR_9, valueT * VAR_10, segT VAR_11)
{
  char * const VAR_12 = VAR_9->fx_frag->fr_literal + VAR_9->fx_where;
  valueT VAR_13 = * VAR_10;
  unsigned VAR_14, VAR_15;

  switch (VAR_9->fx_r_type)
    {




    case 144:
      {
 fixS *VAR_16 = VAR_9->fx_next;




 if (VAR_16)
   VAR_9->fx_offset = (VAR_16->fx_frag->fr_address + VAR_16->fx_where
        - VAR_9->fx_frag->fr_address - VAR_9->fx_where);

 VAR_13 = (VAR_13 - FUNC_12 (VAR_13)) >> 16;
      }



      goto do_reloc_gp;

    case 143:
      VAR_13 = FUNC_12 (VAR_13);
      VAR_9->fx_offset = 0;




    do_reloc_gp:
      VAR_9->fx_addsy = FUNC_11 (VAR_11);
      FUNC_10 (VAR_12, VAR_13, 2);
      break;

    case 156:
      if (VAR_9->fx_pcrel)
 VAR_9->fx_r_type = VAR_0;
      VAR_15 = 2;
      goto do_reloc_xx;

    case 154:
      if (VAR_9->fx_pcrel)
 VAR_9->fx_r_type = VAR_1;
      VAR_15 = 4;
      goto do_reloc_xx;

    case 153:
      if (VAR_9->fx_pcrel)
 VAR_9->fx_r_type = VAR_2;
      VAR_15 = 8;

    do_reloc_xx:
      if (VAR_9->fx_pcrel == 0 && VAR_9->fx_addsy == 0)
 {
   FUNC_10 (VAR_12, VAR_13, VAR_15);
   goto done;
 }
      return;
    case 130:

    case 131:
    case 142:
    case 141:
      return;

    case 155:
      if (VAR_9->fx_pcrel == 0 && VAR_9->fx_addsy == 0)
 {
   VAR_14 = FUNC_8 (VAR_12);
   VAR_14 = (VAR_14 & ~0x1FFFFF) | ((VAR_13 >> 2) & 0x1FFFFF);
   goto write_done;
 }
      return;

    case 140:
      if (VAR_9->fx_pcrel == 0 && VAR_9->fx_addsy == 0)
 {
   VAR_14 = FUNC_8 (VAR_12);
   VAR_14 = (VAR_14 & ~0x3FFF) | ((VAR_13 >> 2) & 0x3FFF);
   goto write_done;
 }
      return;
    case 147:
    case 137:
    case 139:
    case 151:
      return;

    case 128:
    case 129:
      return;

    default:
      {
 const struct alpha_operand *VAR_17;

 if ((int) VAR_9->fx_r_type >= 0)
   FUNC_4 (FUNC_2("unhandled relocation type %s"),
      FUNC_7 (VAR_9->fx_r_type));

 FUNC_6 (-(int) VAR_9->fx_r_type < (int) VAR_7);
 VAR_17 = &VAR_8[-(int) VAR_9->fx_r_type];





 if (VAR_9->fx_addsy != 0
     && FUNC_0 (VAR_9->fx_addsy) != VAR_4)
   FUNC_3 (VAR_9->fx_file, VAR_9->fx_line,
   FUNC_2("non-absolute expression in constant field"));

 VAR_14 = FUNC_8 (VAR_12);
 VAR_14 = FUNC_9 (VAR_14, VAR_17, (offsetT) VAR_13,
    VAR_9->fx_file, VAR_9->fx_line);
      }
      goto write_done;
    }

  if (VAR_9->fx_addsy != 0 || VAR_9->fx_pcrel != 0)
    return;
  else
    {
      FUNC_5 (VAR_9->fx_file, VAR_9->fx_line,
       FUNC_2("type %d reloc done?\n"), (int) VAR_9->fx_r_type);
      goto done;
    }

write_done:
  FUNC_10 (VAR_12, VAR_14, 4);

done:
  VAR_9->fx_done = 1;
}
