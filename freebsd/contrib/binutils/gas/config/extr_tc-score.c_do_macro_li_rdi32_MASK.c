
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ X_add_symbol; } ;
struct TYPE_5__ {TYPE_1__ exp; } ;
struct TYPE_6__ {int bwarn; int error; TYPE_2__ reloc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char**,int,int ) ;
 int FUNC_3 (char*) ;
 TYPE_3__ VAR_6 ;
 int FUNC_4 (char**,int,int ) ;
 int FUNC_5 (char**) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int,char*) ;

__attribute__((used)) static void
FUNC_8 (char *VAR_7){

  int VAR_8;

  FUNC_6 (VAR_7);
  if ((VAR_8 = FUNC_4 (&VAR_7, 20, VAR_2)) == (int) VAR_0
      || FUNC_5 (&VAR_7) == (int) VAR_0)
    {
      return;
    }
  else
    {
      char *VAR_9 = VAR_7;


      if (FUNC_2 (&VAR_7, 1, VAR_4) != (int) VAR_0)
        {
          FUNC_3 (VAR_7);
          return;
        }

      else
        {
          char VAR_10[VAR_1];

          VAR_7 = VAR_9;

          if ((FUNC_2 (&VAR_7, 1, VAR_5) == (int) VAR_0)
              || (FUNC_3 (VAR_7) == (int) VAR_0))
            {
              return;
            }
          else if (VAR_6.reloc.exp.X_add_symbol)
            {
              VAR_6.error = FUNC_0("li rd label isn't correct instruction form");
              return;
            }
          else
            {
              FUNC_7 (VAR_10, "ld_i32hi r%d, %s", VAR_8, VAR_9);

              if (FUNC_1 (VAR_10, VAR_3) == (int) VAR_0)
  return;
              else
                {
                  FUNC_7 (VAR_10, "ld_i32lo r%d, %s", VAR_8, VAR_9);
                  if (FUNC_1 (VAR_10, VAR_3) == (int) VAR_0)
      return;


                  VAR_6.bwarn = -1;
                }
            }
        }
    }
}
