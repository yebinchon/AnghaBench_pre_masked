
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int X_add_symbol; } ;
struct TYPE_4__ {TYPE_3__ exp; } ;
struct TYPE_5__ {int bwarn; TYPE_1__ reloc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,TYPE_3__) ;
 int FUNC_4 (char**,int,int ) ;
 int FUNC_5 (char*) ;
 TYPE_2__ VAR_7 ;
 int FUNC_6 (char**,int,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_7 (char**) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,int,char*) ;

__attribute__((used)) static void
FUNC_10 (char *VAR_9)
{
  int VAR_10;

  FUNC_8 (VAR_9);
  if ((VAR_10 = FUNC_6 (&VAR_9, 20, VAR_3)) == (int) VAR_0
      || FUNC_7 (&VAR_9) == (int) VAR_0)
    {
      return;
    }
  else
    {
      char VAR_11[VAR_1];
      char *VAR_12 = VAR_9;


      if (FUNC_4 (&VAR_9, 1, VAR_5) != (int) VAR_0)
        {
          FUNC_5 (VAR_9);
          return;
        }

      else
        {
          FUNC_0 (((void*)0));
          VAR_9 = VAR_12;
          if ((FUNC_4 (&VAR_9, 1, VAR_6) == (int) VAR_0)
              || (FUNC_5 (VAR_9) == (int) VAR_0))
            {
              return;
            }
          else
            {
              if ((VAR_8 == VAR_2) || (!VAR_7.reloc.exp.X_add_symbol))
                {
                  FUNC_9 (VAR_11, "ld_i32hi r%d, %s", VAR_10, VAR_12);
                  if (FUNC_1 (VAR_11, VAR_4) == (int) VAR_0)
      return;

                  FUNC_9 (VAR_11, "ld_i32lo r%d, %s", VAR_10, VAR_12);
                  if (FUNC_1 (VAR_11, VAR_4) == (int) VAR_0)
      return;
  }
       else
  {
    FUNC_2 (VAR_7.reloc.exp.X_add_symbol);
    FUNC_3 (VAR_10, VAR_7.reloc.exp);
  }


              VAR_7.bwarn = -1;
            }
        }
    }
}
