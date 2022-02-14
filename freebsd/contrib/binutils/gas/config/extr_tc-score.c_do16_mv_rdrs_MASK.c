
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int relax_inst; int instruction; int relax_size; int bwarn; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 (char**,int,int ) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_7 (char *VAR_6)
{
  int VAR_7;
  int VAR_8;
  char *VAR_9 = ((void*)0);

  VAR_9 = VAR_6;
  FUNC_5 (VAR_6);

  if ((VAR_7 = FUNC_3 (&VAR_6, 8, VAR_3)) == (int) VAR_1
      || FUNC_4 (&VAR_6) == (int) VAR_1
      || (VAR_8 = FUNC_3 (&VAR_6, 4, VAR_3)) == (int) VAR_1
      || FUNC_2 (VAR_6) == (int) VAR_1)
    {
      return;
    }
  else
    {

      if (VAR_7 < 16)
        {
          if (VAR_8 < 16)
            {
              VAR_5.relax_inst |= (((VAR_5.instruction >> 8) & 0xf) << 20)
                | (((VAR_5.instruction >> 4) & 0xf) << 15) | (0xf << 10);
              VAR_5.relax_size = 4;
            }
          else
            {
              char VAR_10[VAR_2];

              FUNC_6 (VAR_10, "mlfh! %s", VAR_9);
              if (FUNC_1 (VAR_10, VAR_4) == (int) VAR_1)
  return;

              VAR_5.bwarn = -1;
            }
        }

      else
        {
          if (VAR_8 > 16)
            {
              FUNC_0 (VAR_0);
              return;
            }
          else
            {
              char VAR_11[VAR_2];

              FUNC_6 (VAR_11, "mhfl! %s", VAR_9);
              if (FUNC_1 (VAR_11, VAR_4) == (int) VAR_1)
  return;


              VAR_5.bwarn = -1;
            }
        }
    }
}
