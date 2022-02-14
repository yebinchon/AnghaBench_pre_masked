
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct TYPE_2__ {unsigned char reg; } ;
struct axs_value {void* kind; TYPE_1__ u; } ;
struct agent_expr {int scope; } ;
typedef unsigned char ULONGEST ;
typedef int LONGEST ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (struct symbol*) ;
 int FUNC_1 (int ,int*,int *) ;
 int VAR_4 ;
 int FUNC_2 (struct agent_expr*,int ) ;
 int FUNC_3 (struct agent_expr*,int) ;
 int FUNC_4 (struct agent_expr*,int ) ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_5 (char*,int ) ;
 unsigned char* FUNC_6 (unsigned char*,unsigned char*,int *) ;
 int FUNC_7 (unsigned char*,unsigned char*,unsigned char*) ;

__attribute__((used)) static void
FUNC_8 (struct symbol * VAR_7, struct agent_expr * VAR_8,
      struct axs_value * VAR_9, unsigned char *VAR_10,
      int VAR_11)
{
  if (VAR_11 == 0)
    FUNC_5 ("Symbol \"%s\" has been optimized out.",
    FUNC_0 (VAR_7));

  if (VAR_11 == 1
      && VAR_10[0] >= VAR_1
      && VAR_10[0] <= VAR_2)
    {
      VAR_9->kind = VAR_6;
      VAR_9->u.reg = VAR_10[0] - VAR_1;
    }
  else if (VAR_10[0] == VAR_3)
    {
      ULONGEST VAR_12;
      FUNC_7 (VAR_10 + 1, VAR_10 + VAR_11, &VAR_12);
      VAR_9->kind = VAR_6;
      VAR_9->u.reg = VAR_12;
    }
  else if (VAR_10[0] == VAR_0)
    {


      int VAR_13;
      LONGEST VAR_14;
      unsigned char *VAR_15;

      VAR_15 = FUNC_6 (VAR_10 + 1, VAR_10 + VAR_11, &VAR_14);
      if (VAR_15 != VAR_10 + VAR_11)
 FUNC_5 ("Unexpected opcode after DW_OP_fbreg for symbol \"%s\".",
        FUNC_0 (VAR_7));

      FUNC_1 (VAR_8->scope, &VAR_13, &VAR_14);
      FUNC_3 (VAR_8, VAR_13);
      FUNC_2 (VAR_8, VAR_14);
      FUNC_4 (VAR_8, VAR_4);

      FUNC_2 (VAR_8, VAR_14);
      FUNC_4 (VAR_8, VAR_4);
      VAR_9->kind = VAR_5;
    }
  else
    FUNC_5 ("Unsupported DWARF opcode in the location of \"%s\".",
    FUNC_0 (VAR_7));
}
