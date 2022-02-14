
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* bsym; } ;
typedef TYPE_3__ symbolS ;
struct score_it {int dummy; } ;
struct TYPE_12__ {int X_add_number; TYPE_3__* X_add_symbol; } ;
typedef TYPE_4__ expressionS ;
struct TYPE_9__ {int type; } ;
struct TYPE_13__ {int bwarn; int error; TYPE_1__ reloc; } ;
struct TYPE_10__ {char* name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct score_it*,int,struct score_it*,int,TYPE_3__*) ;
 TYPE_5__ VAR_6 ;
 int FUNC_3 (struct score_it*,TYPE_5__*,int) ;
 int VAR_7 ;
 int FUNC_4 (char*,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_5 (int VAR_8, expressionS VAR_9, const char *VAR_10)
{
  symbolS *VAR_11 = VAR_9.X_add_symbol;
  int VAR_12 = VAR_9.X_add_number;
  struct score_it VAR_13[VAR_4];
  struct score_it VAR_14[VAR_4];
  int VAR_15 = 0;
  int VAR_16 = 0;
  char VAR_17[VAR_3];
  int VAR_18;

  VAR_18 = VAR_7;
  VAR_7 = 0;

  if ((VAR_12 == 0) || (VAR_12 >= -0x8000 && VAR_12 <= 0x7fff))
    {
      VAR_15 = 1;
      VAR_16 = 2;






      FUNC_4 (VAR_17, "lw_pic r1, %s", VAR_11->bsym->name);
      if (FUNC_1 (VAR_17, VAR_2) == (int) VAR_1)
        return;

      FUNC_3 (&VAR_13[0], &VAR_6, sizeof (struct score_it));





      VAR_6.reloc.type = VAR_0;
      FUNC_3 (&VAR_14[0], &VAR_6, sizeof (struct score_it));
      FUNC_4 (VAR_17, "addi_s_pic r1, %s", VAR_11->bsym->name);
      if (FUNC_1 (VAR_17, VAR_2) == (int) VAR_1)
        return;

      FUNC_3 (&VAR_14[1], &VAR_6, sizeof (struct score_it));
      FUNC_2 (VAR_13, VAR_15, VAR_14, VAR_16, VAR_11);


      FUNC_4 (VAR_17, "%s r%d, [r1, %d]", VAR_10, VAR_8, VAR_12);
      if (FUNC_1 (VAR_17, VAR_5) == (int) VAR_1)
        return;


      VAR_6.bwarn = -1;
    }
  else
    {
      VAR_6.error = FUNC_0("PIC code offset overflow (max 16 signed bits)");
      return;
    }

  VAR_7 = VAR_18;
}
