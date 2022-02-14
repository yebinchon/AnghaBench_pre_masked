
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int fx_r_type; scalar_t__ fx_addsy; scalar_t__ fx_offset; int fx_line; int fx_file; scalar_t__ fx_pcrel; scalar_t__ fx_where; TYPE_1__* fx_frag; } ;
typedef TYPE_2__ fixS ;
typedef scalar_t__ bfd_reloc_code_real_type ;
typedef int asymbol ;
struct TYPE_13__ {scalar_t__ use_rela_p; } ;
typedef TYPE_3__ asection ;
struct TYPE_14__ {scalar_t__ address; int * howto; scalar_t__ addend; TYPE_8__** sym_ptr_ptr; } ;
typedef TYPE_4__ arelent ;
struct TYPE_15__ {int value; } ;
struct TYPE_11__ {scalar_t__ fr_address; } ;



 scalar_t__ VAR_0 ;

 scalar_t__ VAR_1 ;


 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,char*,...) ;
 char* FUNC_6 (scalar_t__) ;
 int * FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_3__*) ;
 int VAR_9 ;
 TYPE_8__* FUNC_9 (int *) ;
 void* FUNC_10 (int) ;

arelent *
FUNC_11 (asection *VAR_10, fixS *VAR_11)
{
  arelent * VAR_12;
  bfd_reloc_code_real_type VAR_13;

  VAR_12 = FUNC_10 (sizeof (arelent));

  VAR_12->sym_ptr_ptr = FUNC_10 (sizeof (asymbol *));
  *VAR_12->sym_ptr_ptr = FUNC_9 (VAR_11->fx_addsy);
  VAR_12->address = VAR_11->fx_frag->fr_address + VAR_11->fx_where;

  if (VAR_11->fx_pcrel)
    {
      if (VAR_10->use_rela_p)
 VAR_11->fx_offset -= FUNC_8 (VAR_11, VAR_10);
      else
 VAR_11->fx_offset = VAR_12->address;
    }
  VAR_12->addend = VAR_11->fx_offset;

  switch (VAR_11->fx_r_type)
    {
    case 204:
      if (VAR_11->fx_pcrel)
 {
   VAR_13 = VAR_2;
   break;
 }

    case 207:
      if (VAR_11->fx_pcrel)
 {
   VAR_13 = VAR_0;
   break;
 }

    case 206:
      if (VAR_11->fx_pcrel)
 {
   VAR_13 = VAR_1;
   break;
 }

    case 167:
      if (VAR_11->fx_pcrel)
 {
   VAR_13 = VAR_5;
   break;
 }

    case 168:
      if (VAR_11->fx_pcrel)
 {
   VAR_13 = VAR_4;
   break;
 }

    case 146:
      if (VAR_11->fx_pcrel)
 {
   VAR_13 = VAR_7;
   break;
 }

    case 147:
      if (VAR_11->fx_pcrel)
 {
   VAR_13 = VAR_6;
   break;
 }

    case 138:
    case 162:
    case 163:
    case 137:
    case 131:
    case 130:
    case 135:
    case 134:
    case 133:
    case 132:
    case 136:
    case 129:
    case 128:



      VAR_13 = VAR_11->fx_r_type;
      break;

    case 169:
    case 189:


      FUNC_5 (VAR_11->fx_file, VAR_11->fx_line,
      FUNC_4("literal referenced across section boundary"));
      return ((void*)0);
    case 188:
      FUNC_5 (VAR_11->fx_file, VAR_11->fx_line,
      FUNC_4("internal relocation (type: IMMEDIATE) not fixed up"));
      return ((void*)0);

    case 203:
      FUNC_5 (VAR_11->fx_file, VAR_11->fx_line,
      FUNC_4("ADRL used for a symbol not defined in the same file"));
      return ((void*)0);

    case 165:
      if (VAR_10->use_rela_p)
 {
   VAR_13 = VAR_11->fx_r_type;
   break;
 }

      if (VAR_11->fx_addsy != ((void*)0)
   && !FUNC_2 (VAR_11->fx_addsy)
   && FUNC_3 (VAR_11->fx_addsy))
 {
   FUNC_5 (VAR_11->fx_file, VAR_11->fx_line,
   FUNC_4("undefined local label `%s'"),
   FUNC_0 (VAR_11->fx_addsy));
   return ((void*)0);
 }

      FUNC_5 (VAR_11->fx_file, VAR_11->fx_line,
      FUNC_4("internal_relocation (type: OFFSET_IMM) not fixed up"));
      return ((void*)0);

    default:
      {
 char * VAR_14;

 switch (VAR_11->fx_r_type)
   {
   case 138: VAR_14 = "NONE"; break;
   case 164: VAR_14 = "OFFSET_IMM8"; break;
   case 155: VAR_14 = "SHIFT_IMM"; break;
   case 154: VAR_14 = "SMC"; break;
   case 153: VAR_14 = "SWI"; break;
   case 166: VAR_14 = "MULTI"; break;
   case 192: VAR_14 = "CP_OFF_IMM"; break;
   case 152: VAR_14 = "T32_CP_OFF_IMM"; break;
   case 149: VAR_14 = "THUMB_ADD"; break;
   case 144: VAR_14 = "THUMB_SHIFT"; break;
   case 148: VAR_14 = "THUMB_IMM"; break;
   case 145: VAR_14 = "THUMB_OFFSET"; break;
   default: VAR_14 = FUNC_4("<unknown>"); break;
   }
 FUNC_5 (VAR_11->fx_file, VAR_11->fx_line,
        FUNC_4("cannot represent %s relocation in this object file format"),
        VAR_14);
 return ((void*)0);
      }
    }
  VAR_12->howto = FUNC_7 (VAR_9, VAR_13);

  if (VAR_12->howto == ((void*)0))
    {
      FUNC_5 (VAR_11->fx_file, VAR_11->fx_line,
      FUNC_4("cannot represent %s relocation in this object file format"),
      FUNC_6 (VAR_13));
      return ((void*)0);
    }



  if (VAR_11->fx_r_type == 129)
    VAR_12->address = VAR_11->fx_offset;

  return VAR_12;
}
