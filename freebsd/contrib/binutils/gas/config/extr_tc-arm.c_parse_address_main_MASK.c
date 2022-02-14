
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct group_reloc_table_entry {scalar_t__ ldr_code; scalar_t__ ldrs_code; scalar_t__ ldc_code; } ;
typedef int parse_operand_result ;
typedef int group_reloc_type ;
struct TYPE_8__ {scalar_t__ X_op; int X_add_number; } ;
typedef TYPE_3__ expressionS ;
struct TYPE_6__ {int pc_rel; scalar_t__ type; TYPE_3__ exp; } ;
struct TYPE_9__ {TYPE_1__ reloc; TYPE_2__* operands; void* error; } ;
struct TYPE_7__ {int reg; int isreg; int preind; int negative; int imm; int immisreg; int immisalign; int writeback; int postind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (char**,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char**,struct group_reloc_table_entry**) ;
 TYPE_5__ VAR_12 ;
 scalar_t__ FUNC_4 (TYPE_3__*,char**,int ) ;
 int FUNC_5 (char**,int*,int ,int,int ) ;
 int FUNC_6 (char**,int,int ) ;
 char** VAR_13 ;
 int FUNC_7 (char**,char) ;
 int FUNC_8 (char**) ;

__attribute__((used)) static parse_operand_result
FUNC_9 (char **VAR_14, int VAR_15, int VAR_16,
                    group_reloc_type VAR_17)
{
  char *VAR_18 = *VAR_14;
  int VAR_19;

  if (FUNC_7 (&VAR_18, '[') == VAR_0)
    {
      if (FUNC_7 (&VAR_18, '=') == VAR_0)
 {

   VAR_12.reloc.pc_rel = 1;
   VAR_12.operands[VAR_15].reg = VAR_7;
   VAR_12.operands[VAR_15].isreg = 1;
   VAR_12.operands[VAR_15].preind = 1;
 }


      if (FUNC_4 (&VAR_12.reloc.exp, &VAR_18, VAR_2))
 return VAR_4;

      *VAR_14 = VAR_18;
      return VAR_6;
    }

  if ((VAR_19 = FUNC_1 (&VAR_18, VAR_8)) == VAR_0)
    {
      VAR_12.error = FUNC_0(VAR_13[VAR_8]);
      return VAR_4;
    }
  VAR_12.operands[VAR_15].reg = VAR_19;
  VAR_12.operands[VAR_15].isreg = 1;

  if (FUNC_8 (&VAR_18) == VAR_10)
    {
      VAR_12.operands[VAR_15].preind = 1;

      if (*VAR_18 == '+') VAR_18++;
      else if (*VAR_18 == '-') VAR_18++, VAR_12.operands[VAR_15].negative = 1;

      if ((VAR_19 = FUNC_1 (&VAR_18, VAR_8)) != VAR_0)
 {
   VAR_12.operands[VAR_15].imm = VAR_19;
   VAR_12.operands[VAR_15].immisreg = 1;

   if (FUNC_8 (&VAR_18) == VAR_10)
     if (FUNC_6 (&VAR_18, VAR_15, VAR_9) == VAR_0)
       return VAR_4;
 }
      else if (FUNC_7 (&VAR_18, ':') == VAR_10)
        {



          expressionS VAR_20;
          FUNC_4 (&VAR_20, &VAR_18, VAR_2);
          if (VAR_20.X_op != VAR_3)
            {
              VAR_12.error = FUNC_0("alignment must be constant");
              return VAR_4;
            }
          VAR_12.operands[VAR_15].imm = VAR_20.X_add_number << 8;
          VAR_12.operands[VAR_15].immisalign = 1;

          VAR_12.operands[VAR_15].preind = 0;
        }
      else
 {
   if (VAR_12.operands[VAR_15].negative)
     {
       VAR_12.operands[VAR_15].negative = 0;
       VAR_18--;
     }

   if (VAR_16 &&
              ((*VAR_18 == '#' && *(VAR_18 + 1) == ':') || *VAR_18 == ':'))

     {
       struct group_reloc_table_entry *VAR_21;


              if (*VAR_18 == '#')
                VAR_18 += 2;
              else
                VAR_18++;



       if (FUNC_3 (&VAR_18, &VAR_21) == VAR_0)
  {
    VAR_12.error = FUNC_0("unknown group relocation");
    return VAR_5;
  }




       if (FUNC_4 (&VAR_12.reloc.exp, &VAR_18, VAR_2))
  return VAR_5;


              switch (VAR_17)
                {
                  case 129:
             VAR_12.reloc.type = VAR_21->ldr_code;
                    break;

                  case 128:
             VAR_12.reloc.type = VAR_21->ldrs_code;
                    break;

                  case 130:
             VAR_12.reloc.type = VAR_21->ldc_code;
                    break;

                  default:
                    FUNC_2 (0);
                }

              if (VAR_12.reloc.type == 0)
  {
    VAR_12.error = FUNC_0("this group relocation is not allowed on this instruction");
    return VAR_5;
  }
            }
          else
     if (FUNC_4 (&VAR_12.reloc.exp, &VAR_18, VAR_1))
       return VAR_4;
 }
    }
  else if (FUNC_7 (&VAR_18, ':') == VAR_10)
    {



      expressionS VAR_22;
      FUNC_4 (&VAR_22, &VAR_18, VAR_2);
      if (VAR_22.X_op != VAR_3)
        {
          VAR_12.error = FUNC_0("alignment must be constant");
          return VAR_4;
        }
      VAR_12.operands[VAR_15].imm = VAR_22.X_add_number << 8;
      VAR_12.operands[VAR_15].immisalign = 1;

      VAR_12.operands[VAR_15].preind = 0;
    }

  if (FUNC_7 (&VAR_18, ']') == VAR_0)
    {
      VAR_12.error = FUNC_0("']' expected");
      return VAR_4;
    }

  if (FUNC_7 (&VAR_18, '!') == VAR_10)
    VAR_12.operands[VAR_15].writeback = 1;

  else if (FUNC_8 (&VAR_18) == VAR_10)
    {
      if (FUNC_7 (&VAR_18, '{') == VAR_10)
 {

   if (FUNC_5 (&VAR_18, &VAR_12.operands[VAR_15].imm,
          0, 255, VAR_11) == VAR_0)
     return VAR_4;

   if (FUNC_7 (&VAR_18, '}') == VAR_0)
     {
       VAR_12.error = FUNC_0("'}' expected at end of 'option' field");
       return VAR_4;
     }
   if (VAR_12.operands[VAR_15].preind)
     {
       VAR_12.error = FUNC_0("cannot combine index with option");
       return VAR_4;
     }
   *VAR_14 = VAR_18;
   return VAR_6;
 }
      else
 {
   VAR_12.operands[VAR_15].postind = 1;
   VAR_12.operands[VAR_15].writeback = 1;

   if (VAR_12.operands[VAR_15].preind)
     {
       VAR_12.error = FUNC_0("cannot combine pre- and post-indexing");
       return VAR_4;
     }

   if (*VAR_18 == '+') VAR_18++;
   else if (*VAR_18 == '-') VAR_18++, VAR_12.operands[VAR_15].negative = 1;

   if ((VAR_19 = FUNC_1 (&VAR_18, VAR_8)) != VAR_0)
     {


              if (VAR_12.operands[VAR_15].immisalign)
         VAR_12.operands[VAR_15].imm |= VAR_19;
              else
                VAR_12.operands[VAR_15].imm = VAR_19;
       VAR_12.operands[VAR_15].immisreg = 1;

       if (FUNC_8 (&VAR_18) == VAR_10)
  if (FUNC_6 (&VAR_18, VAR_15, VAR_9) == VAR_0)
    return VAR_4;
     }
   else
     {
       if (VAR_12.operands[VAR_15].negative)
  {
    VAR_12.operands[VAR_15].negative = 0;
    VAR_18--;
  }
       if (FUNC_4 (&VAR_12.reloc.exp, &VAR_18, VAR_1))
  return VAR_4;
     }
 }
    }



  if (VAR_12.operands[VAR_15].preind == 0 && VAR_12.operands[VAR_15].postind == 0)
    {
      VAR_12.operands[VAR_15].preind = 1;
      VAR_12.reloc.exp.X_op = VAR_3;
      VAR_12.reloc.exp.X_add_number = 0;
    }
  *VAR_14 = VAR_18;
  return VAR_6;
}
