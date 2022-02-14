
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ X_add_symbol; } ;
struct TYPE_4__ {int type; TYPE_2__ exp; } ;
struct TYPE_6__ {int instruction; TYPE_1__ reloc; scalar_t__ error; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 TYPE_3__ VAR_5 ;
 int FUNC_1 (TYPE_2__*,char**) ;
 int FUNC_2 (char**,int,int ) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5 (char *VAR_6)
{
  int VAR_7;

  FUNC_4 (VAR_6);
  if (((VAR_7 = FUNC_2 (&VAR_6, 20, VAR_4)) == (int) VAR_2)
      || (FUNC_3 (&VAR_6) == (int) VAR_2)
      || (FUNC_1 (&VAR_5.reloc.exp, &VAR_6) == (int) VAR_2)
      || (FUNC_0 (VAR_6) == (int) VAR_2))
    {
      return;
    }
  else
    {
      if (VAR_5.reloc.exp.X_add_symbol == 0)
        {
          if (!VAR_5.error)
     VAR_5.error = VAR_0;

          return;
        }

      VAR_5.instruction |= VAR_3 << 15;
      VAR_5.reloc.type = VAR_1;
    }
}
