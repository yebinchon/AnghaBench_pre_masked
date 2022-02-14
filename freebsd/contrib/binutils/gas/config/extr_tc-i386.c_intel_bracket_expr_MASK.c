
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* start; } ;
struct TYPE_9__ {scalar_t__ index_reg; scalar_t__ base_reg; int * types; TYPE_1__* op; } ;
struct TYPE_8__ {int op_modifier; char* op_string; char* disp; int is_mem; int in_bracket; scalar_t__ in_offset; } ;
struct TYPE_7__ {int opcode_modifier; } ;
struct TYPE_6__ {scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,char const*,int,char const*) ;
 TYPE_5__* VAR_5 ;
 TYPE_4__ VAR_6 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char) ;
 TYPE_3__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 size_t VAR_9 ;

__attribute__((used)) static int
FUNC_6 (void)
{
  int VAR_10 = VAR_7.op_modifier & (1 << VAR_4);
  const char *VAR_11 = VAR_7.op_string;
  int VAR_12;

  if (VAR_6.op[VAR_9].regs)
    return FUNC_3 (VAR_3);

  FUNC_3 ('[');




  if (!VAR_7.in_offset)
    {
      ++VAR_7.in_bracket;


      if (VAR_5->start->opcode_modifier & (VAR_0 | VAR_2))
 VAR_6.types[VAR_9] |= VAR_1;
      VAR_7.op_modifier &= ~VAR_10;
    }
  else
    FUNC_4 (VAR_7.disp, "[");


  if (*VAR_7.disp != '\0'
      && *(VAR_7.disp + FUNC_5 (VAR_7.disp) - 1) != '+')
    FUNC_4 (VAR_7.disp, "+");

  if (FUNC_2 ()
      && (VAR_12 = VAR_7.op_string - VAR_11 - 1,
   FUNC_3 (']')))
    {

      if (VAR_7.in_offset)
 FUNC_4 (VAR_7.disp, "]");
      else
 {
   --VAR_7.in_bracket;
   if (VAR_6.base_reg || VAR_6.index_reg)
     VAR_7.is_mem = 1;
   if (!VAR_7.is_mem)
     {
       if (!(VAR_7.op_modifier & (1 << VAR_4)))

  VAR_7.is_mem = -1;
       else if (!VAR_8)
  FUNC_1 (FUNC_0("`[%.*s]' taken to mean just `%.*s'"),
    VAR_12, VAR_11, VAR_12, VAR_11);
     }
 }
      VAR_7.op_modifier |= VAR_10;

      return 1;
    }
  return 0;
}
