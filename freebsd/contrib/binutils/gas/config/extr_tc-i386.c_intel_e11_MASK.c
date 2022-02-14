
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_7__ {int reg_type; char* reg_name; int reg_num; } ;
typedef TYPE_2__ reg_entry ;
struct TYPE_10__ {int code; char* str; TYPE_2__* reg; } ;
struct TYPE_9__ {size_t mem_operands; int* types; TYPE_2__ const* index_reg; int reg_operands; TYPE_1__* op; TYPE_2__ const* base_reg; int ** seg; } ;
struct TYPE_8__ {char* disp; int is_mem; int in_bracket; int in_offset; TYPE_2__* reg; } ;
struct TYPE_6__ {TYPE_2__ const* regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;





 int const VAR_6 ;





 int FUNC_1 (char*) ;
 int VAR_7 ;
 int FUNC_2 (int ,...) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 TYPE_5__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_4__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int const) ;
 TYPE_3__ VAR_16 ;
 int FUNC_9 () ;
 int VAR_17 ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (char*) ;
 int * FUNC_13 (char*) ;
 size_t VAR_18 ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15 (void)
{
  switch (VAR_9.code)
    {

    case '(':
      FUNC_8 ('(');
      FUNC_10 (VAR_16.disp, "(");

      if (FUNC_7 () && FUNC_8 (')'))
 {
   FUNC_10 (VAR_16.disp, ")");
   return 1;
 }
      return 0;


    case '[':
      return FUNC_6 ();



    case '.':
      FUNC_10 (VAR_16.disp, VAR_9.str);
      FUNC_8 (VAR_9.code);



      if (!VAR_16.in_offset)
 VAR_16.is_mem = 1;

      return 1;


    case 131:
      {
 const reg_entry *VAR_19 = VAR_16.reg = VAR_9.reg;

 FUNC_8 (131);


 if (VAR_9.code == ':')
   {
     if (!(VAR_19->reg_type & (VAR_4 | VAR_5)))
       {
  FUNC_2 (FUNC_1("`%s' is not a valid segment register"),
   VAR_19->reg_name);
  return 0;
       }
     else if (VAR_14.seg[VAR_14.mem_operands])
       FUNC_3 (FUNC_1("Extra segment override ignored"));
     else
       {
  if (!VAR_16.in_offset)
    VAR_16.is_mem = 1;
  switch (VAR_19->reg_num)
    {
    case 0:
      VAR_14.seg[VAR_14.mem_operands] = &VAR_11;
      break;
    case 1:
      VAR_14.seg[VAR_14.mem_operands] = &VAR_8;
      break;
    case 2:
      VAR_14.seg[VAR_14.mem_operands] = &VAR_17;
      break;
    case 3:
      VAR_14.seg[VAR_14.mem_operands] = &VAR_10;
      break;
    case 4:
      VAR_14.seg[VAR_14.mem_operands] = &VAR_12;
      break;
    case 5:
      VAR_14.seg[VAR_14.mem_operands] = &VAR_13;
      break;
    }
       }
   }


 else if (VAR_9.code == '*')
   {
     if (!VAR_16.in_bracket)
       {
  FUNC_2 (FUNC_1("Register scaling only allowed in memory operands"));
  return 0;
       }

     if (VAR_19->reg_type & VAR_3)
       VAR_19 = VAR_15 + VAR_1 + 4;
     else if (VAR_14.index_reg)
       VAR_19 = VAR_15 + VAR_2 + 4;


     FUNC_8 ('*');
     VAR_14.index_reg = VAR_19;
     VAR_14.types[VAR_18] |= VAR_0;



     if (VAR_9.code == '+' || VAR_9.code == '-')
       {
  char *VAR_20, VAR_21 = VAR_9.code;
  FUNC_8 (VAR_9.code);
  if (VAR_9.code != 136)
    {
      FUNC_2 (FUNC_1("Syntax error: Expecting a constant, got `%s'"),
       VAR_9.str);
      return 0;
    }
  VAR_20 = (char *) FUNC_14 (FUNC_12 (VAR_9.str) + 2);
  FUNC_11 (VAR_20 + 1, VAR_9.str);
  *VAR_20 = VAR_21;
  if (!FUNC_5 (VAR_20))
    return 0;
  FUNC_4 (VAR_20);
       }
     else if (!FUNC_5 (VAR_9.str))
       return 0;
     FUNC_8 (VAR_9.code);
   }




 else if (VAR_16.in_bracket)
   {

     if (!VAR_14.base_reg)
       VAR_14.base_reg = VAR_19;
     else if (!VAR_14.index_reg)
       VAR_14.index_reg = VAR_19;
     else
       {
  FUNC_2 (FUNC_1("Too many register references in memory operand"));
  return 0;
       }

     VAR_14.types[VAR_18] |= VAR_0;
   }


 else if (!VAR_16.in_offset && !VAR_16.is_mem)
   {
     VAR_14.types[VAR_18] |= VAR_19->reg_type & ~VAR_0;
     VAR_14.op[VAR_18].regs = VAR_19;
     VAR_14.reg_operands++;
   }
 else
   {
     FUNC_2 (FUNC_1("Invalid use of register"));
     return 0;
   }




 if (*VAR_16.disp != '\0'
     && !VAR_16.in_offset)
   {
     char *VAR_22 = VAR_16.disp;
     VAR_22 += FUNC_12 (VAR_22) - 1;
     if (*VAR_22 == '+')
       *VAR_22 = '\0';
   }

 return 1;
      }
    case 137:
    case 129:
    case 135:
    case 134:
    case 132:
    case 130:
    case 128:
      FUNC_8 (VAR_9.code);

      if (VAR_9.code == VAR_6)
 return 1;


      FUNC_9 ();
      VAR_9.code = 133;




    case 133:
      if (!VAR_16.in_offset && VAR_16.is_mem <= 0)
 {
   symbolS *VAR_23;



   VAR_23 = FUNC_13(VAR_9.str);
   if (!VAR_23 || FUNC_0(VAR_23) != VAR_7)
     VAR_16.is_mem = 1;
 }


    case 136:
    case '-':
    case '+':
      {
 char *VAR_24, VAR_25 = 0;


 if (VAR_9.code == '-' || VAR_9.code == '+')
   {
     VAR_25 = VAR_9.code;
     FUNC_8 (VAR_9.code);
     if (VAR_9.code != 136)
       {
  FUNC_2 (FUNC_1("Syntax error: Expecting a constant, got `%s'"),
   VAR_9.str);
  return 0;
       }
   }

 VAR_24 = (char *) FUNC_14 (FUNC_12 (VAR_9.str) + 2);
 FUNC_11 (VAR_24 + !!VAR_25, VAR_9.str);
 if (VAR_25)
   *VAR_24 = VAR_25;


 FUNC_8 (VAR_9.code);



 if (VAR_9.code == '*')
   {
     if (FUNC_8 ('*') && VAR_9.code == 131)
       {
  const reg_entry *VAR_26 = VAR_9.reg;

  if (!VAR_16.in_bracket)
    {
      FUNC_2 (FUNC_1("Register scaling only allowed "
         "in memory operands"));
      return 0;
    }



  if (VAR_26->reg_type & VAR_3)
    VAR_26 = VAR_15 + VAR_1 + 4;
  else if (VAR_14.index_reg)
    VAR_26 = VAR_15 + VAR_2 + 4;



  VAR_14.index_reg = VAR_26;
  VAR_14.types[VAR_18] |= VAR_0;



  if (!FUNC_5 (VAR_24))
    return 0;
  FUNC_8 (131);




  if (*VAR_16.disp != '\0')
    {
      char *VAR_27 = VAR_16.disp;
      VAR_27 += FUNC_12 (VAR_27) - 1;
      if (*VAR_27 == '+')
        *VAR_27 = '\0';
    }

  FUNC_4 (VAR_24);

  return 1;
       }




     FUNC_9 ();
   }


 FUNC_10 (VAR_16.disp, VAR_24);
 FUNC_4 (VAR_24);

 return 1;
      }
    }

  FUNC_2 (FUNC_1("Unrecognized token '%s'"), VAR_9.str);
  return 0;
}
